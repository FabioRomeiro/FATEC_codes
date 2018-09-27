#include <stdio.h>

/* 11. Faca um programa que recea do usuario uma string. O programa imprime a string sem suas vogais. */

int main() {
    char string[255];

    printf("Entre com uma frase: ");
    fflush(stdin);
    fgets(string, 255, stdin);
    string[strlen(string) -1]  = '\0';

    for (int i=0; i<strlen(string); i++) {
        if (string[i] != 'a' && string[i] != 'e' && string[i] != 'i' && string[i] != 'o' && string[i] != 'u')
            printf("%c", string[i]);
    }
}
