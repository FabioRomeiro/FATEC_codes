#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char palavra[30], aux[30];

  printf("Entre com uma palavra: ");
  fgets(palavra, 30, stdin);
  palavra[strlen(palavra)-1] = '\0';

  for (int i = 0; palavra[i] != '\0'; i++) {
    aux[i] = palavra[strlen(palavra)-(i+1)];
  }
  printf("%s\n", aux);

  return 0;
}
