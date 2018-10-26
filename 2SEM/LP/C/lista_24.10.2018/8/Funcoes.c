#include "Funcoes.h"

void cadastrar(Pessoa *pessoas, int *qtd) {
    if (*qtd < 11) {
        printf("Nome: ");
        gets(pessoas[*qtd].nome);
        printf("ano de nascimento: ");
        scanf("%d", &pessoas[*qtd].anoNasc);
        qtd+=1;
    } else
        printf("Lista cheia.\n");
}

void calcularIdade(Pessoa *pessoas, int qtd) {
    char nome[50];
    fflush(stdin);
    printf("Nome da pessoa que deseja saber a idade: ");
    gets(nome);

    for (int i=0; i<qtd+1; i++) {
        if (strcmpi(nome, pessoas[i].nome) == 0)
            printf("Idade: %d\n", 2018 - pessoas[i].anoNasc);
    }
}

void anoMais(Pessoa *pessoas, int qtd) {
    int ano, encontrado = 0;
    printf("Ano em que a pesoa nasceu: ");
    scanf("%d", &ano);

    for (int i=0; i<qtd+1; i++) {
        if (ano > pessoas[i].anoNasc) {
            printf("Nome: %s", pessoas[i].nome);
            printf("Idade: %d\n", pessoas[i].anoNasc);
            encontrado = 1;
        }
    }
    if (!encontrado) printf("Não há.");
}

void anoMenos(Pessoa *pessoas, int qtd) {
    int ano, encontrado = 0;
    printf("Ano em que a pesoa nasceu: ");
    scanf("%d", &ano);

    for (int i=0; i<qtd+1; i++) {
        if (ano < pessoas[i].anoNasc) {
            printf("Nome: %s", pessoas[i].nome);
            printf("Idade: %d\n", pessoas[i].anoNasc);
            encontrado = 1;
        }
    }
    if (!encontrado) printf("Não há.");
}

void buscaRG(Pessoa *pessoas, int qtd) {
    int rg, encontrado = 0;
    printf("RG da pessoa a ser encontrada: ");
    scanf("%d", &rg);

    for (int i=0; i<qtd+1; i++) {
        if (rg == pessoas[i].rg) {
            printf("Nome: %s", pessoas[i].nome);
            printf("Idade: %d\n", pessoas[i].anoNasc);
            encontrado = 1;
        }
    }
    if (!encontrado) printf("Não há.");
}

