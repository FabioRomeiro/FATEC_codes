#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"portuguese");

  int a,b,expression;

  printf("Digite o primeiro número:\n");
  scanf("%d", &a);
  printf("Digite o segundo número:\n");
  scanf("%d", &b);

  expression = a > b;
  if (a!=b){
    switch (expression) {
      case 1: printf("%d", a);
              break;
      default: printf("%d", b);
               break;
    }
    printf(" é o maior número");
  } else {
    printf("Ambos os números valem %d", a);
  }
}
