#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

#include <stdio.h>
#include <string.h>
#include <conio.h>

typedef struct {
    char nome[50];
    int anoNasc, rg;
} Pessoa;



void cadastrar(Pessoa *pessoas, int *qtd);
void calcularIdade(Pessoa *pessoas, int qtd);
void anoMais(Pessoa *pessoas, int qtd);
void anoMenos(Pessoa *pessoas, int qtd);
void buscaRG(Pessoa *pessoas, int qtd) ;

#endif // FUNCOES_H_INCLUDED
