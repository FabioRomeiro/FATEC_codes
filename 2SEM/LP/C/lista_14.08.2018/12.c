#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void invalido_or_logaritmo() {
    int numero, soma = 0;

    printf("Digite um numero:\n");
    scanf("%d", &numero);

    if (numero<0) {
      printf("Número Invalido");
    } else {
      printf("%f",log(numero));
    }
}

int main() {
  setlocale(LC_ALL,"portuguese");
  invalido_or_logaritmo();
  return 0;
}
