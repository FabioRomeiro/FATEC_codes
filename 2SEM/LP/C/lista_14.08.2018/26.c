#include <math.h>
#include <stdio.h>

int main() {
  float distancia, litros, consumo;

  printf("Entre com a distancia percorrida em KM:\n");
  scanf("%f", &distancia);
  printf("Entre a quantidade de litros consumidos:\n");
  scanf("%f", &litros);

  consumo = distancia/litros;

  if (consumo < 8) {
    printf("Venda o carro!\n");
  } else if (consumo >=8 && consumo <14){
    printf("Econômico!\n");
  } else if (consumo>12) {
    printf("Super económico!\n");
  }

  return 0;
}
