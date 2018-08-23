#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
  setlocale(LC_ALL,"portuguese");

  int a;

  printf("Digite um número:\n");
  scanf("%d", &a);

  if (a%2==0) {
    printf("%d é um número par",a);
  } else {
    printf("%d é um número ímpar",a);
  }
}
