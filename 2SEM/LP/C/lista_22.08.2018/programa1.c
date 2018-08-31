#include <stdlib.h>
#include <stdio.h>
int area_maior_10(float lado) {
  if ((lado*lado)>10.0) return 1;
  else return 0;
}

void perim_menor_10(float lado) {
  printf("O perimetro do quadrado é %s do que 10\n", (lado*4.0>10.0) ? "maior" : "menor");
}


int main() {
  float lado;
  printf("Entre com o a medida do lado:\n");
  scanf("%f", &lado);
  area_maior_10(lado);
  perim_menor_10(lado);
  system("pause");
  return 0;
}
