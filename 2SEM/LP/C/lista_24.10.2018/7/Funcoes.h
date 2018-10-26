#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[31];
    int idade;
} PESSOA;


void cadastrar(PESSOA *pessoas);

#endif // FUNCOES_H_INCLUDED
