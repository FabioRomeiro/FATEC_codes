#include "funcoes.h"

void cadastrar(PESSOA *pessoas) {
    for (int i=0; i<10; i++) {
        printf("Nome: ");
        fflush(stdin);
        fgets(pessoas[i].nome, 31, stdin);
        pessoas[i].nome[strlen(pessoas[i].nome) -1] = '\0';

        printf("idade: ");
        scanf("%d", &pessoas[i].idade);

        printf("\n");
    }
s}
