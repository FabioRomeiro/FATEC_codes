#include <stdio.h>
#include <string.h>

/* Implemente um programa que leia duas strings e um valor inteiro positivo N. Concatene não mais que N caracteres da string 2 a string 1. */

int main() {
    char string1[255], string2[255], string3[255];
    int  n;
    printf("Entre com uma frase: ");
    fflush(stdin);
    fgets(string1, 255, stdin);
    int tam = strlen(string1) -1;

    printf("Entre com outra frase: ");
    fflush(stdin);
    fgets(string2, 255, stdin);
    string2[strlen(string2) -1]  = '\0';

    printf("Entre com o valor de N: ");
    scanf("%d", &n);

    n+=1;

    for (int i=0; i<=n; i++) {
        string1[tam] = string2[i];
        tam++;
    }

    string1[strlen(string1)]  = '\0';

    printf("%s", string1);
}
