#include "funcoes.h"

/*  Use estrutura
typedef struct
{
    char nome[31];
    int idade;
} PESSOA;
e elabore um programa para cadastrar 10 pessoas. */


int main() {
    PESSOA pessoas[10];

    cadastrar(pessoas);
    return 0;
}
