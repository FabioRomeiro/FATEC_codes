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

int *ordenaSubvetores(int v[], int i, int h, int n) {
    
    int aux = h;
    for(; i < n; i++) {
        for(h = aux; h < n; h++) {
            if(v[i] > v[aux]) {
                int aux2 = v[i];
                v[i] = v[h];
                v[h] = aux2;
            }
        }
    }

    return v;
}

int simulaInspecao() {
    int horas = 8;
    int minutosTotal = horas * 60;
    
    int qtdTv = 0;
    int qtdTvsFixed = 0;
    int tempoConsertando = 0;
    for(int minutos = 1; minutos < minutosTotal; minutos++) {
        if(tempoConsertando == 4) {
            tempoConsertando = 0;
            qtdTvsFixed++;
            qtdTv--;
        } 
        if(minutos%3 == 0) {
            qtdTv++;
        }
        if(qtdTv >= 1) {
            tempoConsertando++;
        }
    }

    return qtdTvsFixed;
}

int main() { 
    // CELULA * lista = NULL; // Uma lista SEMPRE deve ser inicializada com NULL 
    // CELULA * lista2 = NULL; 
    // insereNaLista(&lista, 1); 
    // insereNaLista(&lista, 2); 
    // insereNaLista(&lista, 3); 
    // insereNaLista(&lista, 4); 
 
 
    // insereNaLista(&lista2, 1); 
    // insereNaLista(&lista2, 2); 
    // insereNaLista(&lista2, 3); 
    // insereNaLista(&lista2, 4);

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

    // printf("\n");
    // int v[10] = {1,5,54,82,1,8,12,32,58,100};

    // int esperado[10] = {1,1,5,8,12,32,54,58,82,100};
    // printaVetor(ordenaSubvetores(v,0,4,10), 10);
    // printf("\n");
    // printaVetor(esperado,10);

    int valor = simulaInspecao();
    printf("%d", valor);
/*
    printf("\n VETOR: "); 
    printaVetor(v, 10);
    inverterVetor(v,10);
    printf("\n VETOR: "); 
    printaValores(converte(v,10));
 */
}