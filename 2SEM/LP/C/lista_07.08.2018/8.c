#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  float a, b, x;

  printf("Insira o valor de A:\n");
  scanf("%f", &a);
  printf("Insira o valor de B:\n");
  scanf("%f", &b);

  x = -b/a;

  printf("O valor de X é %.2f\n", x);
}
