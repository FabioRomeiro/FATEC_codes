#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void calcular_imposto() {
    float salario, imposto, total_imposto = 0;
    printf("Entre com seu salário:\n");
    scanf("%f", &salario);

    printf("Valor do imposto \n");

    if (salario > 1903.98){
            salario -= 1903.98;
            printf("0,00 \n");

        if (salario > 0) {
            salario -= 922.67;
            imposto = 922.67 * 7.5 / 100;
            total_imposto += imposto;
            printf("%.2f\n", imposto);

        } if (salario - 924.40 > 0) {
            salario -= 924.40;
            imposto = 924.40 * 15 / 100;
            total_imposto += imposto;
            printf("%.2f\n", imposto);

        } if (salario - 913.63 > 0) {
            salario -= 913.63;
            imposto = 913.63 * 22.5 / 100;
            total_imposto += imposto;
            printf("%.2f\n", imposto);

        } if (salario > 0) {
            imposto = salario * 27.5 / 100;
            total_imposto += imposto;
            salario -= salario;

            printf("%.2f\n", imposto);
        }
    }
    printf("\nTotal: %.2f\n", total_imposto);
}


void novo_salario() {
  float salario, new_salario;
  printf("Entre com seu salário:\n");
  scanf("%f", &salario);

  if (salario > 15000) {
    new_salario = salario + (salario * 0.1);
  } else if(salario>=7500 && salario <= 15000) {
    new_salario = salario + (salario * 0.2);
  } else if(salario>=1000 && salario < 7500) {
    new_salario = salario + (salario * 0.3);
  } else if(salario < 1000) {
    new_salario = salario + (salario * 0.4);
  }

  printf("Novo salário %.2f\n", new_salario);
}

void classificando() {
  float salario, new_salario;
  printf("Entre com seu salário:\n");
  scanf("%f", &salario);
  printf("%s REMUNERADO\n", (salario >= 7000) ? "BEM" : "MAL");
}


int main() {
  char op;

  printf("Menu de opções\n [A] = Imposto\n [B] = Novo Salário\n [C] = Classificação\nEscolha: ");
  op = getche();
  printf("\n");
  switch (op) {
    case 'A': calcula_imposto();
              break;
    case 'B': novo_salario();
              break;
    case 'C': classificando();
              break;
    default: printf("Opção inexistente\n");
  }
  system("pause");
  return 0;
}
