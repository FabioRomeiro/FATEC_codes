#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  float altura, peso;

  printf("Entre com sua altura:\n");
  scanf("%f", &altura);
  printf("Entre com seu peso:\n");
  scanf("%f", &peso);

  printf("Seu IMC é de %.2f\n", peso/pow(altura,2));
}
