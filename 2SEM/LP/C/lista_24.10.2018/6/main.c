#include "funcoes.h"

/* Uma igreja deseja cadastrar os casamentos ocorridos. Usando a linguagem C e struct, implemente:
a) uma função de cadastro capaz de armazenar nome da noiva, nome do noivo, nomes do pai e
da mãe de cada cônjuge, dia, mês, ano e hora da cerimônia.
b) uma função que lista todas as cerimônias ocorridas em uma determinada data, passada como
parâmetro.
c) uma função que fornece o nome do futuro cônjuge, a partir do nome de um dos nubentes.
d)  uma função que fornece a data e o horário da cerimônia, a partir dos nomes dos noivos.
e) main(): oferece menu para o usuário escolher a operação desejada. */



int main() {
    setlocale(LC_ALL, "portuguese");
    Casamento casamentos[100];
    char opc = 'x';
    int qtd = 0;

    while (opc != '0') {
        printf("| 0 | Sair\n");
        printf("| 1 | Cadastrar\n");
        printf("| 2 | Buscar por data\n");
        printf("| 3 | Futuro cônjuge\n");
        printf("| 4 | Data e horario a partir do nome dos noivos\n");
        printf("Opcao: ");
        opc = getche();
        printf("\n");

        switch (opc) {
            case '0':
                break;

            case '1':
                cadastrar(casamentos, &qtd);
                break;

            case '2':
                listarPorData(casamentos, qtd);
                break;

            case '3':
                futuroConjugue(casamentos, qtd);
                break;

            case '4':
                datahorario(casamentos, qtd);
                break;

            default:
                printf("Opção inválida.\n");
        }
    }
    printf("\n");
    system("pause");
    system("cls");
    return 0;
}
