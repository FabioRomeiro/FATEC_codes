#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  float a, b, c, d, x1, x2;

  printf("Insira o valor de A:\n");
  scanf("%f", &a);
  printf("Insira o valor de B:\n");
  scanf("%f", &b);
  printf("Insira o valor de C:\n");
  scanf("%f", &c);

  d = pow(b,2) - (4*a*c);

  x1 = (-b + sqrt(d))/(2*a);
  x2 = (-b - sqrt(d))/(2*a);

  printf("O valor de X1 é %.2f\n", x1);
  printf("O valor de X2 é %.2f\n", x2);
}
