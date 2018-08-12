#include <locale.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL,"portuguese");
  float lado;
  printf("Entre com o lado do quadrado em metros:\n");
  scanf("%f", &lado);
  printf("O perímetro do quadrado é de %.2fm e a área é de %.2fm²\n", lado*4,lado*lado);
}
