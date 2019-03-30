/*

 3- Crie um programa em C que receba um vetor de números reais com 100 elementos.
 Escreva uma função recursiva que inverta ordem dos elementos presentes no vetor.

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int valor;
    struct celula *prox;
} CELULA;

void concatena(CELULA** a, CELULA* b) {
    if (*a == NULL) {
        *a = b;
        return;
    }

    CELULA* aux = *a;

    while (aux->prox != NULL) aux = aux->prox;
    aux->prox = b;
}

void printaValores(CELULA * lista) {
    if(lista == NULL) return;
    CELULA* aux = lista;
    while (aux->prox != NULL) {
        printf("%d ", aux->valor);
        aux = aux->prox;
    }
    printf("%d\n", aux->valor);
}

void insereNaLista(CELULA ** lista, int novoValor) {
    CELULA * nova = malloc(sizeof(CELULA));
    nova->valor = novoValor;

    if (lista != NULL) {

        CELULA* aux = *lista;

        while (aux->prox != NULL) aux = aux->prox;
        aux->prox = nova;
    } else {
        *lista = nova;
    }
}

int main() {
    CELULA * lista = malloc(8);
    insereNaLista(&lista, 8);
    insereNaLista(&lista, 5);
    insereNaLista(&lista, 10);
    insereNaLista(&lista, 851);

    CELULA * lista2 = malloc(8);
    insereNaLista(&lista2, 8789);
    insereNaLista(&lista2, 147);
    insereNaLista(&lista2, 123);
    insereNaLista(&lista2, 159);

    printaValores(lista);
    printaValores(lista2);

    concatena(&lista,lista2);

    printaValores(lista);
    printaValores(lista2);
}