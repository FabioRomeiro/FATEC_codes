#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

/*Faca um programa que contenha um menu com as seguintes opcoes:
(a) Ler uma string S1 (tamanho maximo 20 caracteres);
(b) Imprimir o tamanho da string S1;
(c) Comparar a string S1 com uma nova string S2 fornecida pelo usuario e imprimir o resultado da comparacao;
(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenacao;
(e) Imprimir a string S1 de forma reversa;
(f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser informado pelo usuario;
(g) Substituir a primeira ocorrencia do caractere C1 da string S1 pelo caractere C2. Os caracteres C1 e C2 serao lidos pelo usuario;
(h) Verificar se uma string S2 e substring de S1. A string S2 deve ser informada pelo usuario;
(i) Retornar uma substring da string S1. Para isso o usuario deve informar a partir de qual posicao deve ser criada a substring e qual e o tamanho da substring.*/

void Substring(char *str1);
void LerString(char *str, int n);
void InverterString(char *str1);
void TamanhoString(char *str1);
void OcorrenciaCaractere(char *str1);
void SubstituirOcorrencia(char *str1);
void Verificar_substring(char *str1, char *str2);
void CompararString(char *str1, char *str2);
void ConcatenarString(char *str1, char *str2);

int main(){
    setlocale(LC_ALL, "portuguese");

    char opc = 'x', str1[20];
    char str2[20];

    while (opc != '0'){
        printf("| 0 | Sair\n");
        printf("| 1 | Ler uma string\n");
        printf("| 2 | Imprimir o tamanho da string1\n");
        printf("| 3 | Comparar a string1 com a string2\n");
        printf("| 4 | Concatenar string1 com a string 2\n");
        printf("| 5 | Inverter string1\n");
        printf("| 6 | Ocorrencia de um caractere na string1\n");
        printf("| 7 | Substituir a primeira ocorrencia de um caractere na string1\n");
        printf("| 8 | Verificar se uma string S2 e substring de S1\n");
        printf("| 9 | Retornar uma substring da string S2\n");
        printf("Opção: ");
        opc = getche();
        printf("\n\n");

        switch (opc){
        case '1':
            LerString(str1, 1);
            break;

        case '2':
            TamanhoString(str1);
            break;

        case '3':
            CompararString(str1, str2);
            break;

        case '4':
            ConcatenarString(str1, str2);
            break;

        case '5':
            if (strlen(str1) == 0) LerString(str1, 1);
            InverterString(str1);
            break;

        case '6':
            OcorrenciaCaractere(str1);
            break;

        case '7':
            SubstituirOcorrencia(str1);
            break;

        case '8':
            Verificar_substring(str1, str2);
            break;

        case '9':
            Substring(str1);
            break;

        case '0': printf("\nTchau =)\n");

        default: printf("Opção inválida, tente novamente. ");
        }
    printf("\n\n");
    system("PAUSE");
    system("CLS");
    }
    return 0;
}

void LerString(char *str, int n) {
    printf("Entre com a string%d: ", n);
    fflush(stdin);
    fgets(str, 20, stdin);

    str[strlen(str)-1] = '\0';
}

void TamanhoString(char *str1) {
    if (strlen(str1) > 0) printf("A string1 tem %d caractere(s)!\n", strlen(str1));
    else printf("Você não digitou uma string ainda.\n");
}

void CompararString(char *str1, char *str2) {

    if (strlen(str1) == 0 )  LerString(str1, 1);
    LerString(str2, 2);

    printf((strcmpi(str1, str2) == 0) ? "As strings são iguais!\n" : "A string %s é diferente da %s .\n", str1, str2);
}

void ConcatenarString(char *str1, char *str2) {
    char temp[20];

    if (strlen(str1) == 0) LerString(str1, 1);
    LerString(str2, 2);

    strcpy(temp, str1);

    printf("Strings concatenadas: %s", strcat(temp, str2));
}

void OcorrenciaCaractere(char *str1){
    char car;
    int ocorrencias = 0, tam = strlen(str1);

    if (tam == 0) LerString(str1, 1);

    tam = strlen(str1);

    printf("Caractere que deseja contar: ");
    car = getche();
    printf("\n\n");

    for (int c=0; c<tam; c++)
            if (str1[c] == car) ocorrencias += 1;

    if (ocorrencias != 0) printf("O caractere \"%c\" aparece %d vez(es) na string1.\n", car,  ocorrencias);
    else printf("Caractere não encontrado.\n");
}

void SubstituirOcorrencia(char *str1) {
    char char1, *endereco;

    if (strlen(str1) == 0) LerString(str1, 1);

    while (!strchr(str1, char1)) {
        printf("Caractere que deseja substituir: ");
        char1 = getche();
        printf("\n");
        endereco = strchr(str1, char1);
    }


    printf("Por qual? ");
    *endereco = getche();

    printf("\nNova string: %s", str1);
}

void InverterString(char *str1) {
    int tam = strlen(str1);
    char aux[tam-1];

	if (tam == 1) LerString(str1, 1);

    strcpy(aux, str1);

    printf("A string1 invertida fica: %s\n", strrev(aux));
}

void Verificar_substring(char *str1, char *str2) {
    int i, j, c = 0;

    if (strlen(str1) == 0) LerString(str1, 1);
    LerString(str2, 2);

    if (strstr(str1, str2))
        printf("\n%s é substring de %s\n", str2, str1);
    else
        printf("\n%s não é substring de %s\n", str2, str1);
}

void Substring(char *str1) {
    int inicio, fim;

    if (strlen(str1) == 0) LerString(str1, 1);

    printf("Digite o índice de inicio e fim: ");
    scanf("%d %d", &inicio, &fim);

    while (inicio > fim || inicio < 0 || fim > strlen(str1)) {
        if (inicio > fim) printf("O valor de inicio não pode ser menor que o fim.\n");
        if (inicio < 0 || fim > strlen(str1)) printf("Entre com um valor válido.\n");

        printf("Digite o índice de inicio e fim: ");
        scanf("%d %d", &inicio, &fim);
    }

    for (int i=inicio; i<fim; i++)
        printf("%c", str1[i]);
}
