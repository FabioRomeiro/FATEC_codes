#include "funcoes.h"

void imprimir(Casamento *casamentos, int indice) {
    printf("\n");
    printf("|Nome da noiva: %s\n", casamentos[indice].nomeNoiva);
    printf("|Nome da mae da noiva: %s\n", casamentos[indice].nomeMaeNoiva);
    printf("|Nome do pai da noiva: %s\n", casamentos[indice].nomePaiNoiva);

    printf("|Nome do noivo: %s\n", casamentos[indice].nomeNoivo);
    printf("|Nome da mae do noivo: %s\n", casamentos[indice].nomeMaeNoivo);
    printf("|Nome dao pai da noiva: %s\n", casamentos[indice].nomePaiNoivo);

    printf("|Data do casamento: %d/%d/%d\n", casamentos[indice].data.dia, casamentos[indice].data.mes, casamentos[indice].data.ano);
    printf("|Hora do casamento: %d:%d:%d\n", casamentos[indice].hora.hora, casamentos[indice].hora.mnt, casamentos[indice].hora.seg);
    printf("\n");
}

void cadastrar(Casamento *casamentos, int *qtd) {
    *qtd +=1;

    printf("Nome da Noiva: ");
    fflush(stdin);
    fgets(casamentos[*qtd].nomeNoiva, 50, stdin);
    casamentos[*qtd].nomeNoiva[strlen(casamentos[*qtd].nomeNoiva) -1] = '\0';

    printf("Nome do pai da noiva: ");
    fflush(stdin);
    fgets(casamentos[*qtd].nomePaiNoiva, 50, stdin);
    casamentos[*qtd].nomePaiNoiva[strlen(casamentos[*qtd].nomePaiNoiva) -1] = '\0';

    printf("Nome da mãe da noiva: ");
    fflush(stdin);
    fgets(casamentos[*qtd].nomeMaeNoiva, 50, stdin);
    casamentos[*qtd].nomeMaeNoiva[strlen(casamentos[*qtd].nomeMaeNoiva) -1] = '\0';

    printf("Nome do Noivo: ");
    fflush(stdin);
    fgets(casamentos[*qtd].nomeNoivo, 50, stdin);
    casamentos[*qtd].nomeNoivo[strlen(casamentos[*qtd].nomeNoivo) -1] = '\0';

    printf("Nome do pai do noivo: ");
    fflush(stdin);
    fgets(casamentos[*qtd].nomePaiNoivo, 50, stdin);
    casamentos[*qtd].nomePaiNoivo[strlen(casamentos[*qtd].nomePaiNoivo) -1] = '\0';

    printf("Nome da mãe do noivo: ");
    fflush(stdin);
    fgets(casamentos[*qtd].nomeMaeNoivo, 50, stdin);
    casamentos[*qtd].nomeMaeNoivo[strlen(casamentos[*qtd].nomeMaeNoivo) -1] = '\0';

    printf("Data do casamento (DD/MM/AAAA): ");
    fflush(stdin);
    scanf("%d/%d/%d", &casamentos[*qtd].data.dia, &casamentos[*qtd].data.mes, &casamentos[*qtd].data.ano);

    printf("Hora do casamento (HH:MM:SS): ");
    fflush(stdin);
    scanf("%d:%d:%d", &casamentos[*qtd].hora.hora, &casamentos[*qtd].hora.mnt, &casamentos[*qtd].hora.seg);

}

void listarPorData(Casamento *casamentos, int qtd) {
    int ano;
    printf("Qual ano? ");
    scanf("%d", &ano);
    for (int i=1; i<qtd+1; i++)
        if (casamentos[i].data.ano == ano)
            imprimir(casamentos, i);
}

void futuroConjugue(Casamento *casamentos, int qtd) {
    char noivx[50];
    int encontrado = 0;

    printf("Entre com o nome do conjugue: ");
    fflush(stdin);
    fgets(noivx, 50, stdin);
    noivx[strlen(noivx) -1] = '\0';


    for (int i=1; i<qtd+1; i++) {
        if (strcmp(casamentos[i].nomeNoiva, noivx) == 0 ) {
            printf ("Noivo: %s\n", casamentos[i].nomeNoivo);
            encontrado = 1;
        } else if  (strcmp(casamentos[i].nomeNoivo, noivx) == 0 ) {
            printf("Noiva: %s\n", casamentos[i].nomeNoiva);
            encontrado = 1;
        }
    }

    if (!encontrado) printf("Nome não encontrado. \n");
}

void datahorario(Casamento *casamentos, int qtd) {
    char noivo[50], noiva[50];
    int encontrou = 0;

    printf("nome do noivo: ");
    fflush(stdin);
    fgets(noivo, 50, stdin);
    noivo[strlen(noivo)-1] = '\0';

    printf("nome da noiva: ");
    fflush(stdin);
    fgets(noiva, 50, stdin);
    noiva[strlen(noiva)-1] = '\0';

    for (int i=1; i<qtd+1; i++) {
        if (strcmp(noivo, casamentos[i].nomeNoivo) == 0 && strcmp(noiva, casamentos[i].nomeNoiva) == 0) {
            printf("Data: %d/%d/%d\n", casamentos[i].data.dia, casamentos[i].data.mes, casamentos[i].data.ano);
            printf("Hora: %d:%d:%d\n", casamentos[i].hora.hora, casamentos[i].hora.mnt, casamentos[i].hora.seg);
            encontrou = 1;
            break;
        }
    }
    if (!encontrou) printf("Não encontrado.\n");
}
