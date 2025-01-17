# PassCrypt

Este repositório contém um projeto desenvolvido utilizando somente Linguagem C. Neste arquivo README, você encontrará um guia passo a passo para compilar o projeto e rodar em seu ambiente local.

## Pré-requisitos

Antes de começar, verifique se você possui as seguintes ferramentas instaladas em sua máquina:

- GCC - GNU Compiler Collection

## Passo 1: Clonar o repositório

Comece clonando este repositório para sua máquina local. Abra o terminal e execute o seguinte comando:

```bash
git clone https://github.com/d1nd1nh0x/PassCrypt.git
```

Isso criará uma cópia local do repositório em seu ambiente.

## Passo 2: Instalar dependências

Caso seu sistema operacional não possua o compilador você pode instalar utilizando esses dois passos a passos, tanto para Windows quanto para Linux.

Instalação do GCC
No Linux:

### Distribuições baseadas em Debian (Ubuntu, etc.):
```bash
sudo apt update
```
```bash
sudo apt install build-essential
```

Verifique a instalação com:
```bash
gcc --version
```

### Distribuições baseadas em Red Hat (Fedora, CentOS):

### Fedora:
```bash
sudo dnf install gcc
```

### CentOS:
```bash
sudo yum install gcc
```
Verifique a instalação com:
```bash
gcc --version
```

### Arch Linux (Manjaro, etc.):
```bash
sudo pacman -S base-devel
```
Verifique a instalação
```bash
gcc --version
```

### No Windows (Usando MinGW-w64):

* Baixe o MinGW-w64: https://sourceforge.net/projects/mingw-w64/

Execute o instalador e siga as instruções. Durante a instalação, escolha:


* Architecture: `x86_64` (64 bits) ou `i686` (32 bits).
* Threads: `posix`
* Exception: `sjlj

* Adicione o diretório `bin do MinGW ao PATH do sistema:

```markdown
C:\mingw-w64\mingw64\bin
```

Verifique a instalação com:

```bash
gcc --version
```
### Alternativa no Windows (Usando MSYS2):

Baixe e instale o MSYS2: msys2.org.

Após a instalação, abra o MSYS2 e execute:
```bash
pacman -Syu
pacman -Su
pacman -S mingw-w64-x86_64-gcc
```
Verifique a instalação com:

```bash
gcc --version
```

## Passo 3: Modificar o projeto

Agora que você tem o projeto em execução, você pode fazer modificações no código conforme necessário. Sinta-se à vontade para explorar e adaptar o projeto de acordo com suas necessidades.

## Passo 4: Publicar suas modificações

Se desejar publicar suas modificações em um repositório remoto no GitHub, siga estes passos:

1. Crie um novo repositório vazio no GitHub.
2. No terminal, navegue até o diretório raiz do projeto.
3. Execute os seguintes comandos:

```bash
git remote set-url origin https://github.com/seu-usuario/nome-do-novo-repositorio.git
git add .
git commit -m "Adicionar minhas modificações"
git push -u origin master
```

Isso configurará o repositório remoto e enviará suas modificações para lá.

---
