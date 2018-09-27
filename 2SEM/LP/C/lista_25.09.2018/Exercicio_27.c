#include <stdio.h>

/* Faca um programa que, dada uma string, diga se ela é palíndromo ou nao. Lembrando que
um palindromo é uma palavra que tenha a propriedade de poder ser lida tanto da direita para
a esquerda, como da esquerda para a direita.*/

int main() {
    char string[255];

    printf("Entre com uma frase: ");
    fflush(stdin);
    fgets(string, 255, stdin);
    int tam = strlen(string);
    string[tam -1]  = '\0';

    char invertido[tam];

    for (int i=0; i<tam; i++)
        if (string[i] == ' ')
            for (int j=i; j<tam; j++)
                    string[j] = string[j+1];

    strcpy(invertido, string);

    strrev(invertido);

    printf((strcmp(string, invertido) == 0) ? "E palindromo\n" : "Nao e palindromo\n");
}
