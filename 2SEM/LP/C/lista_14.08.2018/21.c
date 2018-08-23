#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"portuguese");

  float a,b;
  int operacao;

  printf("Digite o item do menu que deseja\n'1' = Soma de 2 números;\n'2' = Diferença entre 2 números (maior pelo menor);\n'3' = Produto entre dois números;\n'4' = Divisão entre 2 números (o denominador nao pode ser 0);\n");
  scanf("%d", &operacao);
  if (operacao >=1 && operacao <=4) {
    printf("\nEntre com um valor A:\n");
    scanf("%f", &a);
    printf("\nEntre com um valor B:\n");
    scanf("%f", &b);
  }
  switch (operacao) {
    case 1: printf("%.2f\n",a+b);
            break;
    case 2: printf("%.2f\n",a-b);
            break;
    case 3: printf("%.2f\n",a*b);
            break;
    case 4: printf("%.2f\n",a/b);
            break;
    default: printf("OPERAÇÃO INVÁLIDA!\n");
  }

  return 0;
}
