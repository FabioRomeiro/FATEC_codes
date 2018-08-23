#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"portuguese");

  int num, expression;

  printf("Entre com um numero inteiro:\n");
  scanf("%d", &num);

  printf("%d ",num);
  if (num%3==0 && num%5!=0) {
    printf("é divisivel por 3 e não por 5\n");
  } else if (num%3!=0 && num%5==0) {
    printf("é divisivel por 5 e não por 3\n");
  } else {
    printf("é invalido\n");
  }

  return 0;
}
