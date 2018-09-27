#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  int dia, mes, ano;

  printf("Entre com uma data (DD/MM/AAAA): \n");
  scanf("%d/%d/%d",&dia,&mes,&ano);

  printf("%d/%d/%d", dia,mes,ano);

  return 0;
}
