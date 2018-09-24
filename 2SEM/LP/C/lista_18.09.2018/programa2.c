#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>

char dia_semana[][8] = {"Sabado","Domingo", "Segunda", "Terca", "Quarta", "Quinta", "Sexta"};

int main() {
  int dia,mes,ano;
  printf("Entre com o dia/mes/ano:\n");
  scanf("%d/%d/%d", &dia, &mes, &ano);

  int a,b,c,d,e,f,g,h,i,j;
  a = (12-mes)/10;
  b = ano-a;
  c = mes + (12 * a);
  d = b/100;
  e = d/4;
  f = 2-d+e;
  g = (365.25*b);
  h = 30.6001 * (c+1);
  i = f + g + h + dia + 5;
  j = i%7;
  printf("%s\n", dia_semana[j]);
  getch();
  return 0;
}
