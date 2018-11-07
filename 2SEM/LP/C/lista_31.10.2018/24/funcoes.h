#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

typedef struct endereco {
    char rua[50], complemento[50], bairro[30], cep[12], cidade[50], estado[20], pais[20], numero[5];
} ENDERECO;

typedef struct telefone {
    char ddd[3], numero[11];
} TELEFONE;

typedef struct data_aniversario {
    int dia, mes, ano;
} ANIVERSARIO;

typedef struct agenda {
    char nome[50], email[100], observacoes[255];
    ENDERECO endereco;
    TELEFONE telefone;
    ANIVERSARIO aniversario;
} AGENDA;

void LerString(char *string, int tam);
void ImprimirAgenda(AGENDA *agenda, int i);
void adicionar_contato(AGENDA *agenda, int i);
void BuscaPorMes(AGENDA *agenda, int i, int mes);
void BuscaPorNome(AGENDA *agenda, char *nome, int i);
bool ApagarContato(AGENDA *agenda, int *t, char *nome);
void BuscarPorAniversario(AGENDA *agenda, int i, int dia, int mes);




#endif // FUNCOES_H_INCLUDED
