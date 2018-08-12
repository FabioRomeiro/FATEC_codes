#include <stdio.h>
#include <math.h>
#include <locale.h>
#define PI 3.14

int main() {
  setlocale(LC_ALL, "Portuguese");
  float raio, perimetro, area;

  printf("Insira o valor do raio:\n");
  scanf("%f", &raio);

  perimetro = 2*PI*raio;
  area = PI*pow(raio,2);

  printf("O perimetro do circulo vale %.2f\n", perimetro);
  printf("A área do circulo vale %.2f\n", area);
}
