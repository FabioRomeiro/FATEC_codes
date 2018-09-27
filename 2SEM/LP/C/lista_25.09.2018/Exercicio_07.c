#include <stdio.h>

/* 7.  Cria um programa que compara duas strings (não use a função strcmp)*/

int ComparaString(char *str1, char *str2);

int main() {
    char string1[255], string2[255];

    printf("Entre com a primeira string: ");
    fgets(string1, 255, stdin);
    string1[strlen(string1) -1]  = '\0';

    printf("Entre com a segunda string: ");
    fgets(string2, 255, stdin);
    string2[strlen(string2) -1]  = '\0';

    printf(ComparaString(string1, string2) ? "As strings sao iguais\n " : "As strings sao diferentes\n");
}


int ComparaString(char *str1, char *str2) {
    int tam1 = strlen(str1), tam2 = strlen(str2), cont = 0;

    if (tam1 != tam2)
        return 0;

    for (int i=0; i<tam1; i++)
        if (str1[i] != str2[i])
            return 0;

    return 1;
}
