#include <stdio.h>
#include <string.h>

int main() {
  double valor, valor_final;
  char estado[2];

  printf("Entre com o valor do produto:\n");
  scanf("%lf", &valor);

  printf("Entre com o o estado detinado:\n");
  scanf("%s", &estado);

  if(strcmpi(estado,"MG")== 0) {
     valor_final = valor + (valor*0.07);
     printf("Valor final: %.2f", valor_final);
  } else if(strcmpi(estado,"SP")== 0) {
     valor_final = valor + (valor*0.12);
     printf("Valor final: %.2f", valor_final);
  } else if(strcmpi(estado,"RJ")== 0) {
     valor_final = valor + (valor*0.15);
     printf("Valor final: %.2f", valor_final);
  } else if(strcmpi(estado,"MS")== 0) {
     valor_final = valor + (valor*0.08);
      printf("Valor final: %.2f", valor_final);
  } else {
    printf("ESTADO NÃO VALIDO\n");
  }

  return 0;
}
