#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"portuguese");

  int expressionA, expressionB;
  float a,b;

  printf("Digite a primeira nota:\n");
  scanf("%f", &a);
  printf("Digite a segunda nota:\n");
  scanf("%f", &b);

  expressionA = a >= 0 && a<=10;
  expressionB = b >= 0 && b<=10;

  if (!expressionA && !expressionB) {
    printf("Ambas as notas são inválidas! Digite notas entre 0 e 10\n");
  } else if (!expressionA) {
    printf("A primeira nota, %.2f, não é uma nota válida%s", a, (a<0) ? "\nDigite um numero maior ou igual a 0" : (a>10) ? "\nDigite um numero menor ou igual a 10" : "");
  } else if (!expressionB) {
    printf("A segunda nota, %.2f, não é uma nota válida%s", b, (b<0) ? "\nDigite um numero maior ou igual a 0" : (b>10) ? "\nDigite um numero menor ou igual a 10" : "");
  } else {
    printf("Sua média: %.2f\n", (a+b)/2);
  }
}
