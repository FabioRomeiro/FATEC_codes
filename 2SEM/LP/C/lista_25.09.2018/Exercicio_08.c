#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char bin[30];
  int count = 0;
  printf("Entre com uma sequencia binaria: ");
  fgets(bin, 30, stdin);
  bin[strlen(bin)-1] = '\0';

  for (int i = 0; bin[i] != '\0'; i++) {
    if (bin[i] == '1') count++;
  }

  printf("'%s' -> %d\n", bin, count);
  return 0;
}
