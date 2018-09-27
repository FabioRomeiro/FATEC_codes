#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char palavra[50], repalavra[50];
  int count = 0;
  printf("Entre com uma palavra: ");
  fgets(palavra, 50, stdin);
  palavra[strlen(palavra)-1] = '\0';

  for (int i = 0; palavra[i] != '\0'; i++) {
    int letraASCII = palavra[i];
    repalavra[i] = letraASCII + 1;
  }

  printf("Palavra nova: %s\n", repalavra);
  return 0;
}
