#include <stdio.h>

void main() {

    int a, numero[3];

    printf("Digite 3 numeros: \n");
    for (int i = 0; i < 3; ++i) scanf("%d", &numero[i]);
    for (int i = 0; i < 3; ++i) {
        for (int j = i + 1; j < 3; ++j) {
            if (numero[i] > numero[j]) {
                a =  numero[i];
                numero[i] = numero[j];
                numero[j] = a;
            }
        }
    }
    printf("\n");
    for (int i = 0; i < 3; ++i) printf("%d ", numero[i]);
}
