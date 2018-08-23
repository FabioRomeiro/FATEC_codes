#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"portuguese");

  int expression;
  float salario, emprestimo;

  printf("Digite seu salário:\n");
  scanf("%f", &salario);
  printf("Quando deseja pegar emprestado?:\n");
  scanf("%f", &emprestimo);

  expression = emprestimo < (salario * 0.2);

  if (expression) {
    printf("Emprestimo concedido\n");
  } else {
    printf("Emprestimo não concedido\n");
  }
}
