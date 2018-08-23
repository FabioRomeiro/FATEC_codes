#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void que_triangulo() {
  float a,b,c;

  printf("Digite um valor A:\n");
  scanf("%f", &a);
  printf("Digite um valor B:\n");
  scanf("%f", &b);
  printf("Digite um valor C:\n");
  scanf("%f", &c);

  if (a>b+c || b>a+c || c>b+a) {
    printf("Não é possivel formar um triangulo com os valores passados\n");
  } else if (a == b && b == c && a == c) {
    printf("Pode-se formar um triangulo equilatero\n");
  } else if (a == b || a == c || b == c) {
    printf("Pode-se formar um triangulo isóceles\n");
  } else if ( a != b && a != c && b != c) {
    printf("Pode-se formar um triangulo escaleno\n");
  }
}

int main() {
  setlocale(LC_ALL,"portuguese");
  que_triangulo();
  return 0;
}
