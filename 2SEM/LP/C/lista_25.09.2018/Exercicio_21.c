#include <stdio.h>
#include <string.h>

/* Faca um programa que receba duas frases distintas e imprima de maneira invertida
trocando as letras A por * */

void Substitui(char *frase, int tam) {
    for (int i=0; i<tam; i++)
        if (frase[i] == 'a')
            frase[i] = '*';
}

int main() {
    char frase1[255], frase2[255];

    printf("Entre com uma frase: ");
    fflush(stdin);
    fgets(frase1, 255, stdin);
    int tam = strlen(frase1);
    frase1[tam -1]  = '\0';

    printf("Entre com outra frase: ");
    fflush(stdin);
    fgets(frase2, 255, stdin);
    int tam2 = strlen(frase2);
    frase2[tam2 -1]  = '\0';

    Substitui(frase1, tam);
    Substitui(frase2, tam2);


    printf("\n\n%s \n%s", strrev(frase1), strrev(frase2));
}
