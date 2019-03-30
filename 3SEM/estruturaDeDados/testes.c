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
 
int main() { 
    CELULA * lista = NULL; // Uma lista SEMPRE deve ser inicializada com NULL 
    CELULA * lista2 = NULL; 
    insereNaLista(&lista, 8); 
    insereNaLista(&lista, 5); 
    insereNaLista(&lista, 10); 
    insereNaLista(&lista, 851); 
 
 
    insereNaLista(&lista2, 8789); 
    insereNaLista(&lista2, 147); 
    insereNaLista(&lista2, 123); 
    insereNaLista(&lista2, 159);
    
    printaValores(converte(v,5)); 
 
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

    int v[10] = {1,5,54,82,1,65,2,34,5,4};
    printf("\n VETOR: "); 
    printaVetor(v, 10);
    inverterVetor(v,10);
    printf("\n VETOR: "); 
    printaVetor(v, 10);
    printf("\n");
    printaValores(converte(v,10));
 
}