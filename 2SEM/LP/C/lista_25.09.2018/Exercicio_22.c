#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char mercadoria[20];
  float valor, valorAVista;
  printf("Entre com o nome da mercadoria: \n");
  fgets(mercadoria, 20, stdin);
  mercadoria[strlen(mercadoria)-1] = '\0';

  printf("Digite o preço da mercadoria: \n");
  scanf("%f", &valor);

  printf("%s:\n Preco total: %.2f\n Preco a vista: %.2f", mercadoria, valor, valor - (valor*0.1));

  return 0;
}
