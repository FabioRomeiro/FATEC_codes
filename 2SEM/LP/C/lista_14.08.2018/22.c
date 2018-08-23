#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"portuguese");

  float a,b;
  int idade,tempoDeTrabalho, caso;

  printf("Digite sua idade:");
  scanf("%d", &idade);
  printf("Digite seu tempo de trabalho (em anos):");
  scanf("%d", &tempoDeTrabalho);
  switch ((tempoDeTrabalho>idade) ? '-' : idade>=65 || tempoDeTrabalho >= 30 || (idade>=65 && tempoDeTrabalho >= 25)) {
    case 1: printf("Pode se aposentar");
            break;
    case 0: printf("Não pode se aposentar\n");
            break;
    default: printf("Dados incompativeis\n");
  }

  return 0;
}
