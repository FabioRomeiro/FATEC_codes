#include <stdio.h>
#include <string.h>

/* Excreva um programa que substitua as ocorrencias de um caractere por outro */

int main() {
    char string[255], caractere, caractere_substituto;

    printf("Entre com uma frase: ");
    fflush(stdin);
    fgets(string, 255, stdin);
    string[strlen(string) -1]  = '\0';

    printf("Qual caractere deseja substituir? ");
    fflush(stdin);
    scanf("%c", &caractere);

    printf("Por qual? ");
    fflush(stdin);
    scanf("%c", &caractere_substituto);

    for (int i=0; i<strlen(string); i++) {
        if (string[i] == caractere)
            string[i] = caractere_substituto;
    }
    printf("%s", string);

    return 0;
}
