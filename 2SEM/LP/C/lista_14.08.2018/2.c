#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
  setlocale(LC_ALL,"portuguese");

  int a;

  printf("Digite um número:\n");
  scanf("%d", &a);

  if (a>=0) {
    printf("Raíz quadrada do número: %.0f\n", sqrt(a));
  } else {
    printf("Número inválido\n");
  }
}
