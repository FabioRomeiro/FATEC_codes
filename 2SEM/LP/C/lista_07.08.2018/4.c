#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"Portuguese");

  float l1,l2,l3;

  printf("Entre com os tres lados de um triangulo:\n");
  scanf("%f", &l1);
  scanf("%f", &l2);
  scanf("%f", &l3);

  printf("O perimetro%s é maior do que 10\n", (l1+l2+l3)<=10 ? " não" : "");
}
