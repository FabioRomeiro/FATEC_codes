#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *p, x=5; // declaração de ponteiro e da variavel x, já atribuindo valor a ela

    p *= 2*p;// Tenta fazer uma operação com o ponteito P, mas não foi atribuído nenhum valor a ele.

    printf("%d", x);// Imprime o valor da variavel x, que é 5
}
