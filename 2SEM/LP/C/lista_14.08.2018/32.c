#include <math.h>
#include <stdio.h>

int main() {
  int codigo,qtd;

  printf("Entre com o código do produto comprado:\n");
  scanf("%d", &codigo);
  printf("Entre com a quantidade comprada:\n");
  scanf("%d", &qtd);

  printf("Valor total da compra: R$");
  switch (codigo) {
    case 100: printf("%.2f\n", 1.20*qtd);
              break;
    case 101: printf("%.2f\n", 1.30*qtd);
              break;
    case 102: printf("%.2f\n", 1.50*qtd);
              break;
    case 103: printf("%.2f\n", 1.20*qtd);
              break;
    case 104: printf("%.2f\n", 1.70*qtd);
              break;
    case 105: printf("%.2f\n", 2.20*qtd);
              break;
    case 106: printf("%.2f\n", 1.00*qtd);
              break;
    default: printf("Produto não cadastrado\n");
             break;
  }

  return 0;
}
