#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"Portugues");

  float l1, l2, l3, altura, semiperi, perimetro, area;

  printf("Entre com os tres lados de um triangulo:\n");
  scanf("%f", &l1);
  scanf("%f", &l2);
  scanf("%f", &l3);

  perimetro = l1 + l2 +l3;
  semiperi = perimetro / 2;
  area = sqrt(semiperi * (semiperi-l1) * (semiperi-l2)*(semiperi-l3));

  printf("A área do triangulo é de %.2fm² enquanto o perimetro é de %.2fm\n", area, perimetro);
}
