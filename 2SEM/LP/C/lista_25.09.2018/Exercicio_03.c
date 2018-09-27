#include <stdio.h>

/* 3. Entre com um nome e imprima o imprima somente se a primeira letra for 'a'. */

int main() {
    char nome[30];

    printf("Entre com  o nome: ");
    fgets(nome, 30, stdin);
    nome[strlen(nome) -1]  = '\0';

    if (nome[0] == 'a')
        printf("%s", nome);
}

