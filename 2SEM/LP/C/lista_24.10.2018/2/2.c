#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "2.h"

int main() {

  CARTA cartas[2];
  char totalstr[2];
  int total;

  printf("Vamos jogar um jogo\n");
  getch();
  printf("Escolha uma carta do baralho (Tirando as cartas 10, valete, dama, rei e nipes)\n");
  getch();
  printf("Multiplique por 2 o valor da carta\n");
  getch();
  printf("Some por 5\n");
  getch();
  printf("Multiplique por 5\n");
  getch();
  printf("Lembra do resultado deste calculo que acabou de fazer!\n");
  getch();
  printf("Escolha outra carta do deck\n");
  getch();
  printf("Some o valor dela com o resultado do calculo com a carta anterior\n");
  getch();
  printf("Entre com o total dessa conta: ");
  scanf("%d", &total);

  total -= 25;

  sprintf(totalstr, "%d", total);
  for (int i = 0; totalstr[i] != '\0'; i++) {
    cartas[i].numero = totalstr[i];
    cartas[i].eh_as = (cartas[i].numero == '1') ? 1 : 0;
  }

  printf("\nAs cartas que você escolheu foram:\n");
  printf((cartas[0].eh_as) ? "As e " : "%c e ", cartas[0].numero);
  printf((cartas[1].eh_as) ? "As" : "%c", cartas[1].numero);


  return 0;
}
