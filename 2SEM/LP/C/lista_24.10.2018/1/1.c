#include <stdio.h>

/* Considere as al�quotas de IR vigentes, de acordo com o site http://idg.receita.fazenda.gov.br/acesso-rapido/tributos/irpf-imposto-de-renda-pessoa-fisica#calculo_mensal_IRPF.
Elabore um programa, usando Linguagem de Programa��o C, que calcule o valor do imposto total para qualquer valor de rendimento tribut�vel, considerando poss�veis
dedu��es. */

typedef struct Pessoa {
    int idade;
    int dependentes;
    float renda;
};

int main() {
    Pessoa pessoa;

    printf("Renda: ");
    scanf("%f", &pessoa.renda);

    printf("Idade: ");
    scanf("%d", &pessoa.idade);

    printf("Dependentes: ");
    scanf("%d", &pessoa.dependentes);

} // 76
// 51
