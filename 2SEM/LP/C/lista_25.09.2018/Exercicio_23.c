#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char str[20];
  int i, j;
  printf("Entre com uma string: \n");
  fgets(str, 20, stdin);
  str[strlen(str)-1] = '\0';

  printf("Digite um numero: \n");
  scanf("%d", &i);

  printf("Digite outro numero: \n");
  scanf("%d", &j);

  for (int k = i; k <= j; k++)
    printf("%c", str[k]);

  return 0;
}
