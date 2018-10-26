#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "3.h"
int main() {
  DADOS informacoes;
  int total;
  char totalstr[4], num_mes[2];
  char meses[12][10] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
  printf("Vamos jogar um jogo\n");
  getch();
  printf("Pense no numero do seu mes de nascimento\n");
  getch();
  printf("Duplique-o\n");
  getch();
  printf("Some por 5\n");
  getch();
  printf("Multiplique por 50\n");
  getch();
  printf("Some a idade de um amigo\n");
  getch();
  printf("Subtraia o resultado por 365\n");
  getch();
  printf("Entre com o total dessa conta: ");
  scanf("%d", &total);
  total += 115;
  sprintf(totalstr, "%d", total);
  int has_sec_digit = 0;
  for (int i = 0; totalstr[i] != '\0'; i++) {
    if (i == 0){
      num_mes[i] = totalstr[i];
    } else if (i == 1 && strlen(totalstr) > 3 && (totalstr[i] == '0' || totalstr[i] == '1' || totalstr[i] == '2')){
      num_mes[i] = totalstr[i];
      has_sec_digit = 1;
    } else {
      if (has_sec_digit)
        informacoes.idade[i-2] = totalstr[i];
      else
        informacoes.idade[i-1] = totalstr[i];
    }
  }
  strcpy(informacoes.mes, meses[atoi(num_mes) - 1]);
  printf("Voce nasceu em %s e tem %s anos de idade.\n", informacoes.mes, informacoes.idade);
  return 0;
}
