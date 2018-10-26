#include "Funcoes.h"

/* Crie um programa, utilizando um vetor de struct que guarda o nome, RG e ano de nascimento de,no máximo, 10 pessoas.
 O programa permite as seguintes funcionalidades, conforme escolha do usuário:
 a - Cadastrar uma pessoa;
 b - Calcular a idade de uma pessoa selecionada pelo usuário;
 c - Listar pessoas que nasceram a partir de um determinado ano;
 d - Listar pessoas que nasceram antes de um determinado ano;
 e- Encontrar o nome de uma pessoa com determinado RG;
 s- Sair.
 O programa deverá ser executado em loop até o usuário digitar a opção s.
 Implemente funções para as opções disponíveis */

int main() {
    Pessoa pessoas[10];
    char opc = 'x';
    int qtd = 0;

    while (opc != 's') {
        printf("| a | Cadastrar\n");
        printf("| b | Calcular idade\n");
        printf("| c | Listar pessoas que nasceram a partir de um determinado ano\n");
        printf("| d | Listar pessoas que nasceram antes de um determinado ano\n");
        printf("| e | Encontrar o nome de uma pessoa com determinado RG\n");
        printf("| s | Sair\n");
        printf("Opcao: ");
        opc = getche();
        printf("\n");

        switch (opc) {
            case 'a':
                cadastrar(pessoas, &qtd);
                break;

            case 'b':
                calcularIdade(pessoas, qtd);
                break;

            case 'c':
                anoMais(pessoas, qtd);
                break;

            case 'd':
                anoMenos(pessoas, qtd);
                break;

            case 'e':
                buscaRG(pessoas, qtd);
                break;

            case 's':
                break;

            default:
                printf("Opção inválida.\n");
        }
    }
    return 0;
}
