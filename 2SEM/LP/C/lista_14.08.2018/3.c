#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
  setlocale(LC_ALL,"portuguese");

  int a;

  printf("Digite um número:\n");
  scanf("%d", &a);

  if (a>=0) {
    printf("Raíz quadrada de %d: %.0f\n", a, sqrt(a));
  } else {
    printf("Quadrado de %d: %.0f\n", a, pow(a,2));
  }
}
