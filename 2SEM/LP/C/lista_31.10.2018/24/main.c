#include "funcoes.h"

/* fazer um programa para simular uma agenda de telefones. Para cada pessoa devem-se ter os seguintes
dados:
    - nome
    - e-mail
    - endereço (rua, numero, complemento, bairro, cep, cidade, estado, pais)
    - telefone (DDD, numero)
    - Data de aniversario(Dia, mes, ano)
    - observacoes: uma linha (string) para uma observacao especial.

a) Definir a estrutura acima
b) declarar a variavel agenda (vetor) com capacidade de agendar até 100 nomes.
c) Definir um bloco de instrucoes busca por primeiro nome: imprime os dados da pessoa com esse nome
(se tiver mais de uma pessoa, imprime para todas)
d) definir um bloco de instrucoes busca por mes de aniversario: imprime os dados de todas as pessoas que
fazem aniversario nesse mes
e) definir um bloco de instrucoes por dia e mes de aniversario: imprime os dados de todas as pessoas que
fazem aniversario nesse dia e mes
f) definir um bloco de instrucoes insere pessoa: insere por ordem alfabetica de nome.
g) definir um bloco de instrucoes retira pessoa: Retira todos os dados dessa pessoa e desloca todos os
elementos seguintes do vetor para a posicao anterior
h) definir um bloco de instrucoes imprime agenda com as opcoes:
    - imprime nome, telefone e e-mail
    - imprime todos os dados
i) o programa deve ter um menu principal oferecendo as opcoes acima.*/



int main() {
    setlocale(LC_ALL, "portuguese");

    AGENDA agenda[100];
    char opc;
    int indice = 0, dia, mes, sair = 0;

    while (!sair) {
        char nome[50];

        printf("| 1 | Busca por nome\n");
        printf("| 2 | Busca por mês de aniversário\n");
        printf("| 3 | Busca por dia e mês de aniversário\n");
        printf("| 4 | Adicionar novo contato\n");
        printf("| 5 | Excluir contato\n");
        printf("| 6 | Visualizar agenda\n");
        printf("Opção: ");
        opc = getche();
        printf("\n\n");

        switch (opc) {
            case '0':
                sair = 1;
            case '1':
                printf("Qual nome deseja encontrar? ");
                LerString(nome, 50);
                BuscaPorNome(agenda, nome, indice);
                break;

            case '2':
                printf("De qual mês você quer visualizar? ");
                scanf("%d", &mes);
                BuscaPorMes(agenda, indice, mes);
                break;

            case '3':
                printf("De qual dia e mês você deseja visualizar? (DD/MM) ");
                scanf("%d/%d", &dia, &mes);
                BuscarPorAniversario(agenda, indice, dia, mes);
                break;

            case '4':
                adicionar_contato(agenda, indice);
                indice ++;
                break;

            case '5':
                printf("Qual contato deseja apagar?");
                LerString(nome, 50);

                printf(ApagarContato(agenda, &indice, nome) ? "Contato apagado!\n" : "Contato não cadastrado.\n");
                break;

            case '6':
                ImprimirAgenda(agenda, indice);
                break;
        }
        system("PAUSE");
        system("CLS");
    }

    return 0;
}

// by danny
