#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

typedef struct {
    int hora, mnt, seg;
} Hora;

typedef struct {
    int dia, mes, ano;
} Data;

typedef struct {
    char nomeNoiva[50], nomeNoivo[50], nomePaiNoiva[50], nomeMaeNoiva[50], nomePaiNoivo[50], nomeMaeNoivo[50];
    Data data;
    Hora hora;
} Casamento;

void cadastrar(Casamento *casamentos, int *qtd);
void datahorario(Casamento *casamentos, int qtd);
void listarPorData(Casamento *casamentos, int qtd);
void futuroConjugue(Casamento *casamentos, int qtd);


#endif // FUNCOES_H_INCLUDED
