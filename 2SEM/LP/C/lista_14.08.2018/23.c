#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"portuguese");

  float a,b;
  int ano;

  printf("Digite um ano:\n");
  scanf("%d", &ano);

  printf("Este ano %sé bissexto\n", (ano%400==0 || (ano%4==0 && ano%100 != 0)) ? "" : "não ");

  return 0;
}
