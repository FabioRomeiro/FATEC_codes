#include <stdlib.h>
#include <stdio.h>

typedef struct celula {
    int valor;
    struct celula *prox;
} CELULA;

void printaValores(CELULA * lista) { 
    // if(lista == NULL) return; // Não precisa disso 
    CELULA* aux = lista; 
    while (aux != NULL) { // Para printar o aux deve ser comparado diretamente com nulo, e não o priximo. senão ele não printa o ultimo 
        printf("%d ", aux->valor); 
        aux = aux->prox; 
    } 
    // printf("%d\n", aux->valor); // Não precisa mais disso 
} 
 
void insereNaLista(CELULA ** lista, int novoValor) { 
    CELULA * nova = malloc(sizeof(CELULA)); 
    nova->valor = novoValor; 
    nova->prox = NULL; // VOCÊ ESQUECEU DE APONTAR PRA NULL 
 
    if (*lista != NULL) { // CUIDADO vc estava tentando comparar lista com nulo. Ele NUNCA será nulo. o conteúdo de lista é o endereço da lista la da main. Mesmo que o lista da main seja nulo, o da função nunca será. comparar *lista 
        CELULA* aux = *lista; 
 
        while (aux->prox != NULL) 
            aux = aux->prox; 
 
        aux->prox = nova; 
    } else { 
        *lista = nova; 
    } 
} 

void inverterVetor(int v[], int n) {
    if(n > 5) {
        int aux = v[n-1];
        v[n-1] = v[10-n];
        v[10-n] = aux;
        inverterVetor(v, n-1);
    }
}

void printaVetor(int v[], int n) {
    for(int i = 0; i<n; i++)
        printf("%d,", v[i]);
}

CELULA* converte(int v[], int n) {
    CELULA * lst = malloc(8);
    lst->valor = v[0]; 
    lst->prox = NULL;
    CELULA * aux = lst; 
    for(int i=1; i<n ; i++) {
        CELULA * nova = malloc(8);
        nova->valor = v[i];
        aux->prox = nova;
        aux = nova;
    }
    return aux;
}

CELULA *mergeListasOrdenadas(CELULA * lista1, CELULA* lista2) {
    CELULA *aux = NULL;
    CELULA *lista3 = NULL;

    if (lista1->valor < lista2->valor) {
        aux = lista1;
        lista3 = aux;
        lista1 = lista1->prox;
    } else if(lista1->valor > lista2->valor){
        aux = lista2;
        lista3 = aux;
        lista2 = lista2 -> prox;
    } else if (lista1->valor == lista2->valor) {
        aux = lista1;
        aux->prox = lista2;
        lista3 = aux;
        lista1 = lista1->prox;
        lista2 = lista2->prox;
    }

    while(lista1->prox != NULL && lista2->prox != NULL){
       if (lista1->valor < lista2->valor) {
            aux->prox = lista1;
            lista1 = lista1->prox;
              } else if(lista1->valor > lista2->valor){
            aux->prox = lista2;
            lista2 = lista2 -> prox;
       } else if (lista1->valor == lista2->valor) {
            aux->prox = lista1;
            aux = aux->prox;
            aux->prox = lista2;
            lista1 = lista1->prox;
            lista2 = lista2->prox;
       }
       aux = aux->prox;
    }
    if (lista1->prox == NULL) {
        aux->prox = lista2;
    } else if (lista2->prox == NULL) {
        aux->prox = lista1;
    }
}
 
int main() { 
    CELULA * lista = NULL; // Uma lista SEMPRE deve ser inicializada com NULL 
    CELULA * lista2 = NULL; 
    insereNaLista(&lista, 1); 
    insereNaLista(&lista, 2); 
    insereNaLista(&lista, 3); 
    insereNaLista(&lista, 4); 
 
 
    insereNaLista(&lista2, 4); 
    insereNaLista(&lista2, 5); 
    insereNaLista(&lista2, 5); 
    insereNaLista(&lista2, 6);

    printaValores(mergeListasOrdenadas(lista, lista2));
    // printf("Antes:\n"); 
    // printf("-> Lista 1:\n"); 
    // printaValores(lista); 
    // printf("\n-> Lista 2:\n"); 
    // printaValores(lista2); 
 
    // concatena(&lista,lista2); 
 
    // printf("\n\n\nDepois:\n"); 
    // printf("-> Lista 1 (concatenada):\n"); 
    // printaValores(lista); 
    // printf("\n-> Lista 2:\n"); 
    // printaValores(lista2);
/*
    int v[10] = {1,5,54,82,1,65,2,34,5,4};
    printf("\n VETOR: "); 
    printaVetor(v, 10);
    inverterVetor(v,10);
    printf("\n VETOR: "); 
    printaVetor(v, 10);
    printf("\n");
    printaValores(converte(v,10));
 */
}