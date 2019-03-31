#include <stdio.h>
#include <stdlib.h>

/* 3ª Lista de Eestrutura de Dados
 *
 * 1 - Faça uma função que receba duas listas encadeadas L1 e L2 e retorne
 * uma terceira lista L3 com a intercalação de L1 e L2.
 */

struct Cel {
    int valor;
    struct Cel *prox;
};

typedef struct Cel cel;


void *inserir (cel **lista, int x) {
    cel *temp = NULL, *aux = *lista;

    temp = malloc(sizeof(cel));
    temp->valor = x;
    temp->prox = NULL;


    if (*lista == NULL)
        *lista = temp;
    else {
        for (; aux->prox != NULL; aux = aux->prox);
        aux->prox = temp;
    }
    printf("%d ", temp->valor);
}

cel *intercalar(cel *l1, cel *l2) {
    cel *l3 = NULL;
    cel *aux1 = l1;
    cel *aux2 = l2;

    while(aux1 != NULL || aux2 != NULL) {

        if (aux1 != NULL) {
            l3 = inserir(&l3, aux1->valor);
            aux1 = aux1->prox;
            //printf("insere1\n");
        }

        if (aux2 != NULL) {
            l3 = inserir(&l3 , aux2->valor);
            aux2 = aux2->prox;
            //printf("%d\n", aux2->valor);
        }
    }
    return l3;
}


void imprimir(cel *lista) {
    for (cel *aux = lista; aux != NULL; aux = aux->prox)
        printf("%d\n", aux->valor);
}

int main() {
    cel *lst = NULL;
    cel *lst2 = NULL;
    cel *lst3 = NULL;

    inserir(&lst, 1);
    inserir(&lst, 1);
    inserir(&lst, 1);
    inserir(&lst, 1);


    inserir(&lst2, 2);
    inserir(&lst2, 22);
    inserir(&lst2, 222);
    inserir(&lst2, 2222);


    lst3 = intercalar(lst, lst2);
    imprimir(lst3);
    printf("oi");

    return 0;
}
