#include <stdio.h>

/* Escreva um protrama que leia duas palavras e diga qual delas vem primeiro na ordem alfabetica. */

int main() {
    char palavra1[50], palavra2 [50];

    printf("Entre com uma frase: ");
    fflush(stdin);
    fgets(palavra1, 255, stdin);
    palavra1[strlen(palavra1) -1]  = '\0';

   printf("Entre com outra frase: ");
    fflush(stdin);
    fgets(palavra2, 255, stdin);
    palavra2[strlen(palavra2) -1]  = '\0';

    printf((strcmp(palavra1, palavra2) > 0) ? "%s \n", palavra2 : "%s \n", palavra1);
}
