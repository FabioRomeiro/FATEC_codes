#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main() {
  int valor_total;
  char data[6], mes[10], idade[4];

  printf("Ola, vamos jogar\n");
  getch();
  printf("Pense no numero do mes em que voce nasceu\n");
  getch();
  printf("Duplique-o\n");
  getch();
  printf("Some 5\n");
  getch();
  printf("Multiplique por 50\n");
  getch();
  printf("Some a idade de um amigo\n");
  getch();
  printf("Subtraia por 365\n");
  getch();
  printf("Entre com o valor total dessa conta:\n");
  scanf("%d", &valor_total);
  valor_total += 115;
  sprintf(data, "%d", valor_total);

  if (strlen(data) >= 4) {
    for (int i = 0; i < strlen(data); i++) {
        if (i <= 1)
          mes[i] = data[i];
        else {
          idade[i-2] = data[i];
        }
    }
  } else {
    for (int i = 0; i < strlen(data); i++) {
        if (i == 0)
          mes[i] = data[i];
        else {
          idade[i-1] = data[i];
        }
    }
  }

  if (mes[0] == '1' && strlen(data) < 4)
    strcpy(mes, "Janeiro");
  else if (mes[0] == '2')
    strcpy(mes, "Fevereiro");
  else if (mes[0] == '3')
    strcpy(mes, "Marco");
  else if (mes[0] == '4')
    strcpy(mes, "Abril");
  else if (mes[0] == '5')
    strcpy(mes, "Maio");
  else if (mes[0] == '6')
    strcpy(mes, "Junho");
  else if (mes[0] == '7')
    strcpy(mes, "Julho");
  else if (mes[0] == '8')
    strcpy(mes, "Agosto");
  else if (mes[0] == '9')
    strcpy(mes, "Setembro");
  else if (strcmp(mes, "10"))
    strcpy(mes, "Outubro");
  else if (strcmp(mes, "11"))
    strcpy(mes, "Novembro");
  else if (strcmp(mes, "12"))
    strcpy(mes, "Dezembro");

  for (int i = 0; i < strlen(idade); i++) {
    if (i == 2){
      idade[i] = '\0';
      break;
    }
  }

  printf("Voce nasceu em %s e tem %s anos de idade.\n", mes, idade);
  return 0;
}
