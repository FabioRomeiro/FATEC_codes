#include <stdio.h>

/* 5 .Digite um nome , calcule e retorne quantas letras tem esse nome. */

int main() {
    char nome[30];

    printf("Entre com  o nome: ");
    fgets(nome, 30, stdin);
    nome[strlen(nome) -1]  = '\0';
    printf("O nome possui %d letras.", strlen(nome));
}
