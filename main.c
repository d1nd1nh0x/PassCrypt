#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Defines
#define MAX_LENGTH 64 // Máximo de caracteres digitados
#define COLOR_GREEN "\x1b[32m"
#define COLOR_RESET "\x1b[0m"

// Funções e procedimentos
char *encryptPassword(const char *pwd, size_t pwdLength); // Encriptar a senha
void welcomeMessage(); // Mensagem de boas-vindas
void encryptMessage(const char *pwd); // Mensagem exibindo senha encriptada

// Configurações
void chpWin(); // Ativando caracteres especiais no Windows
void cleanScreen(); // Limpando a tela do terminal

int main() {
    // Configurações
    chpWin();
    cleanScreen();

    // Variáveis
    char userPassword[MAX_LENGTH + 1];

    // Mensagem de boas-vindas
    welcomeMessage();
    printf("Digite <ENTER> para iniciar: ");
    while (getchar() != '\n'); // Esperando o usuário digitar o 'New Line'

    cleanScreen();

    // Capturando senha do usuário
    printf("Entre com a sua senha: ");
    if (fgets(userPassword, sizeof(userPassword), stdin) == NULL) {
        fprintf(stderr, "Erro ao ler a senha.\n");
        return 1;
    }
    userPassword[strcspn(userPassword, "\n")] = '\0'; // Removendo '\n'

    cleanScreen();

    // Exibindo senha criptografada
    char *encryptedPassword = encryptPassword(userPassword, strlen(userPassword));
    if (encryptedPassword == NULL) {
        fprintf(stderr, "Erro ao criptografar a senha.\n");
        return 1;
    }

    encryptMessage(encryptedPassword);

    // Liberando memória alocada
    free(encryptedPassword);

    return 0;
}

// Configurações
void chpWin() {
    #ifdef WIN32
        system("chcp 65001");
    #endif
}

void cleanScreen() {
    #ifdef WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

// Mensagens
void welcomeMessage() {
    puts("Bem-vindo ao Cifrador de Senhas!");
    putchar('\n');
    puts("Sua ferramenta para criptografia de senhas.");
    putchar('\n');
}

void encryptMessage(const char *pwd) {
    puts("Senha criptografada com sucesso!");
    putchar('\n');
    printf("Sua senha segura: %s[%s]%s\n", COLOR_GREEN, pwd, COLOR_RESET);
}

// Função de criptografia
char *encryptPassword(const char *pwd, size_t pwdLength) {
    char *crypt_pwd = (char *)malloc((pwdLength + 1) * sizeof(char)); // +1 para o '\0'
    if (crypt_pwd == NULL) {
        return NULL; // Verificação de alocação de memória
    }

    // Invertendo a senha
    for (size_t i = 0; i < pwdLength; i++) {
        crypt_pwd[i] = pwd[pwdLength - 1 - i];
    }
    crypt_pwd[pwdLength] = '\0'; // Adicionando o terminador nulo

    return crypt_pwd;
}