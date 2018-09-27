#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char palavra[30], repalavra[30];
  int count = 0;
  printf("Entre com uma palavra: ");
  fgets(palavra, 30, stdin);
  palavra[strlen(palavra)-1] = '\0';

  for (int i = 0; palavra[i] != '\0'; i++) {
    int letraASCII = palavra[i];
    if (letraASCII <=90 && letraASCII >= 65) {
      char letraMin = letraASCII + 32;
      repalavra[i] = letraMin;
    } else {
      repalavra[i] = palavra[i];
    }
  }

  printf("Palavra no minusculo: %s\n", repalavra);

  return 0;
}
