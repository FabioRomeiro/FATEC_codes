#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char palavra[30], c, d;
  printf("Entre com uma palavra: ");
  fgets(palavra, 30, stdin);
  palavra[strlen(palavra)-1] = '\0';

  printf("Entre com um caractere: ");
  scanf(" %c", &c);
  printf("Entre com outro caractere: ");
  scanf(" %c", &d);

  for (int i = 0; palavra[i] != '\0'; i++) {
    if (palavra[i] == c)
      palavra[i] = d;
  }

  printf("Caracteres substituidos: %s\n", palavra);

  return 0;
}
