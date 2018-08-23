#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"portuguese");

  char operacao = '&';
  float a,b;

  printf("Digite a operação que deseja realizar\n'+' = soma;\n'-' = subtração;\n'*' = multiplicação;\n'/' = divisão;\n");
  operacao = getche();
  printf("\nEntre com um valor A:\n");
  scanf("%f", &a);
  printf("\nEntre com um valor B:\n");
  scanf("%f", &b);

  switch (operacao) {
    case '+': printf("%.2f\n",a+b);
            break;
    case '-': printf("%.2f\n",a-b);
            break;
    case '*': printf("%.2f\n",a*b);
            break;
    case '/': printf("%.2f\n",a/b);
            break;
    default: printf("OPERAÇÃO INVÁLIDA!\n");
  }

  return 0;
}
