#include "funcoes.h"

void LerString(char *string, int tam) {
    fflush(stdin);
    fgets(string, tam, stdin);

     if (string[1] == '\0')
        strcpy(string, "---");

    string[strlen(string) -1] = '\0';
}

void ImprimirDados(AGENDA *agenda, int j) {
        printf("Nome: %s\n", agenda[j].nome);

        printf("Telefone: (%s)%s\n", agenda[j].telefone.ddd, agenda[j].telefone.numero);

       printf("E-mail: %s\n", agenda[j].email);

       printf("Data de aniversario: %d/%d/%d\n", agenda[j].aniversario.dia, agenda[j].aniversario.mes, agenda[j].aniversario.ano);

        printf("\nEndereco\n");
        printf("Rua: %s\n", agenda[j].endereco.rua);
        printf("Numero: %s\n", agenda[j].endereco.numero);
        printf("Complemento: %s\n", agenda[j].endereco.complemento);
        printf("Bairro: %s\n", agenda[j].endereco.bairro);
        printf("CEP: %s\n", agenda[j].endereco.cep);
        printf("Cidade: %s\n", agenda[j].endereco.cidade);
        printf("Estado: %s\n",agenda[j].endereco.estado);
        printf("País: %s\n", agenda[j].endereco.pais);

        printf("\nObservacoes: %s\n", agenda[j].observacoes);
}

void PedirEValidarTelefone(char *ddd, char *numero) {
    printf("Telefone (utilize o formato: xx xxxxx-xxxx: ");
    fflush(stdin);
    scanf("%s %s", ddd, numero);

    if (strlen(ddd) > 2 || strlen(numero) != 10 || numero[5] != '-'){
        printf("\nTelefone inválido, tente novamente.\n\n");
        PedirEValidarTelefone(ddd, numero);
    }
}

void PedirEValidarEmail(char *email) {
    int arroba = 0, ponto = 0, antesPonto = 0, depoisPonto = 0, i;

    printf("E-mail: ");
    LerString(email, 100);

    int tam = strlen(email);

    if (tam == 2)
        return;

    for (i = 0; i < tam; i++) {
        char c = email[i];

        if(c == '@') {
            if (arroba) break;
            arroba = 1;

            if (i < 3)
                break;

        } else if (arroba) {
		    if (ponto) {
		    	depoisPonto++;

		    } else if (c == '.') {
			    ponto = 1;

			    if (antesPonto < 3)
			      break;

		    } else antesPonto++;
    	}
    }
    if (i != tam || depoisPonto < 2) {
        printf("E-mail inválido, tente novamente.\n");
         PedirEValidarEmail(email);
    }
}

void PedirEValidarData(int *dia, int *mes, int *ano) {
    time_t data = time(NULL);
    struct tm tm = *localtime(&data);

    printf("Data de aniversário (DD/MM/AAA): ");
    fflush(stdin);
    scanf("%d/%d/%d", dia, mes, ano);

    if (dia == 0 || mes == 0 || ano == 0)
        return;

    if (*ano > tm.tm_year + 1900 ) {
        printf("Data inválida, tente novamente.\n\n");
        PedirEValidarData(dia, mes, ano);
    }

    if (*ano % 400 == 0 || (*ano % 4 == 0 && *ano % 100 != 0)) {
        if (*dia <= 0 || *dia> 28){
            printf("\nData inválida, tente novamente.\n\n");
            PedirEValidarData(dia, mes, ano);
        }
    } else if (*dia <= 0 || *dia > 30){
            printf("\nData inválida, tente novamente.\n\n");
            PedirEValidarData(dia, mes, ano);
        }

    if (*mes < 0|| *mes > 12) {
        printf("\nData inválida, tente novamente.\n\n");
       PedirEValidarData(dia, mes, ano);
    }
}

void PedirEValidarCep(char *cep) {
    printf("CEP (xx xxx-xxx): ");
    LerString(cep, 12);

    if (strlen(cep) == 2)
        return;

    if (strlen(cep) != 10 || cep[2] != ' ' || cep[6] != '-') {
        printf("\nCEP inválido, tente novamente.\n\n");
        PedirEValidarCep(cep);
    }
}


void adicionar_contato(AGENDA *agenda, int i) {
    printf("Nome: ");
    LerString(agenda[i].nome, 50);

    PedirEValidarTelefone(agenda[i].telefone.ddd, agenda[i].telefone.numero);

    PedirEValidarEmail(agenda[i].email);

    printf("\nEndereço\n");
    printf("Rua: ");
    LerString(agenda[i].endereco.rua, 50);

    printf("Numero: ");
    LerString(agenda[i].endereco.numero, 5);

    printf("Bairro: ");
    LerString(agenda[i].endereco.bairro, 30);

    printf("Cidade: ");
    LerString(agenda[i].endereco.cidade, 50);

    printf("Estado: ");
    LerString(agenda[i].endereco.estado, 20);

    printf("Complemento: ");
    LerString(agenda[i].endereco.complemento, 50);

    PedirEValidarCep(agenda[i].endereco.cep);

    printf("País: ");
    LerString(agenda[i].endereco.pais, 20);

    PedirEValidarData(&agenda[i].aniversario.dia, &agenda[i].aniversario.mes, &agenda[i].aniversario.ano);

    printf("Observacoes: ");
    LerString(agenda[i].observacoes, 100);

    printf("\nContato adicionado!\n");
}

void BuscaPorNome(AGENDA *agenda, char *nome, int i) {
    bool encontrou = 0;

    for (int j=0; j<i; j++) {
        if (strstr(agenda[j].nome, nome)) {
            printf("\n");
            ImprimirDados(agenda, j);
            encontrou = 1;
        }
    }
    if (!encontrou)
        printf("\nNão existem contatos com este nome.\n");
}

void BuscaPorMes(AGENDA *agenda, int i, int mes) {
    bool encontrou = 0;

    for (int j=0; j<i; j++)
        if (agenda[j].aniversario.mes == mes) {
            printf("\n");
            ImprimirDados(agenda, j);
            encontrou = 1;
        }
    if (!encontrou) {
        printf("\nNão existem contatos que fazem anivesário neste mês.\n");
    }
}

void BuscarPorAniversario(AGENDA *agenda, int i, int dia, int mes) {
     bool encontrou = 0;

    for (int j=0; j<i; j++)
        if (agenda[j].aniversario.dia == dia && agenda[j].aniversario.mes == mes) {
            printf("\n");
            ImprimirDados(agenda, j);
            encontrou = 1;
        }
   if (!encontrou) {
            printf("\nNão existem contatos que fazem aniversário neste dia.\n");
   }
}

bool ApagarContato(AGENDA *agenda, int *t, char *nome) {
    char apagar;

    for (int j=0; j<*t; j++) {
        if (strstr(agenda[j].nome, nome)) {
            ImprimirDados(agenda, j);

            printf("\nÉ este o contato que deseja apagar? [S][N] ");
            apagar = getche();
            strupr(&apagar);
            printf("\n");

            while(apagar != 'S' && apagar != 'N'){
                printf("Opção inválida.\n");
                printf("\nÉ este o contato que deseja apagar? [S][N] ");
                apagar = getche();
                strupr(&apagar);
                printf("\n");
            }

            if (apagar == 'S') {
                for (int i=j; i<*t; i++ ) {
                    *t -= 1;

                    for (int l=i; l<*t; l++) {
                        strcpy(agenda[l].nome, agenda[l+1].nome);
                        strcpy(agenda[l].email, agenda[l+1].email);
                        strcpy(agenda[l].observacoes, agenda[l+1].observacoes);

                        strcpy(agenda[l].endereco.rua, agenda[l+1].endereco.rua);
                        strcpy(agenda[l].endereco.complemento, agenda[l+1].endereco.complemento);
                        strcpy(agenda[l].endereco.bairro, agenda[l+1].endereco.bairro);
                        strcpy(agenda[l].endereco.cep, agenda[l+1].endereco.cep);
                        strcpy(agenda[l].endereco.cidade, agenda[l+1].endereco.cidade);
                        strcpy(agenda[l].endereco.estado, agenda[l+1].endereco.estado);
                        strcpy(agenda[l].endereco.pais, agenda[l+1].endereco.pais);
                        agenda[l].endereco.numero, agenda[l+1].endereco.numero;

                        strcpy(agenda[l].telefone.ddd, agenda[l+1].telefone.ddd);
                        strcpy(agenda[l].telefone.numero, agenda[l+1].telefone.numero);

                        agenda[l].aniversario.dia = agenda[l+1].aniversario.dia;
                        agenda[l].aniversario.mes = agenda[l+1].aniversario.mes;
                    }

                    return 1;
                }
            }
        }
    }
    return 0;
}

void ImprimirAgenda(AGENDA *agenda, int i) {
    if (i == 0)
        printf("Não há contatos cadastrados.\n");
    for (int j=0; j<i; j++) {
        ImprimirDados(agenda, j);
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    }
}
