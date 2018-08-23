#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"portuguese");

  int numero, soma = 0;

  printf("Digite um numero:\n");
  scanf("%d", &numero);

  while (numero > 0) {
    soma += numero % 10;
    numero/=10;
  }

  if (numero < 0) {
    printf("\nNúmero Invalido\n");
  } else {
    printf("\n%d\n", soma);
  }

  return 0;
}
