#include <stdio.h>
#include <locale.h>

void qual_o_maior() {
  int a,b,expression,difference;

  printf("Digite o primeiro número:\n");
  scanf("%d", &a);
  printf("Digite o segundo número:\n");
  scanf("%d", &b);

  expression = a > b;
  if (a!=b){
    switch (expression) {
      case 1: printf("\n%d", a);
              difference = a - b;
              break;
      case 0: printf("\n%d", b);
              difference = b - a;
              break;
    }
    printf(" é o maior número, e a diferença entre eles é de %d", difference);
  } else {
    printf("Ambos os números valem %d", a);
  }
}

int main() {
  setlocale(LC_ALL,"portuguese");
  qual_o_maior();
}
