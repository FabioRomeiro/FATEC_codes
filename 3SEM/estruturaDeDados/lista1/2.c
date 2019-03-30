#include <stdio.h>

/*

 2 - Faça uma função recursiva que receba um inteiro n e imprima até zero e em seguida volte a n.
 ex: n=5
 5 4 3 2 1 2 3 4 5

 */

void describe(int n) {
    printf("%d ", n);
    if (n!=0) {
        describe(n - 1);
        printf("%d ", n);
    }
}

int main() {
    describe(5);
}

