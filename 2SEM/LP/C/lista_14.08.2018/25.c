#include <math.h>
#include <stdio.h>

int main() {
  float a, b, c, d, x1, x2;

  printf("Entre com o coeficiente A:\n");
  scanf("%f", &a);
  printf("Entre com o coeficiente B:\n");
  scanf("%f", &b);
  printf("Entre com o coeficiente C:\n");
  scanf("%f", &c);

  if (a == 0) {
    printf("Não é equação de segundo grau\n");
  } else {
    d = pow(b,2) - (4*a*c);
    if(d < 0) {
      printf("Não existe raiz\n");
    } else {
      x1 = (-b + sqrt(d))/(2*a);
      x2 = (-b - sqrt(d))/(2*a);

      if (d==0) {
        printf("Raiz unica\nX = %.2f", x1);
      } else {
        printf("X1 = %.2f\nX2 = %.2f", x1, x2);
      }
    }
  }

  return 0;
}
