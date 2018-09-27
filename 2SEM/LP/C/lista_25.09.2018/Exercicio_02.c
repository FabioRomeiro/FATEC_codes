#include <stdio.h>

int main() {
  char str[30];
  int len = 0;

  printf("Entre com uma string: ");
  gets(str);

  for (int i = 0; str[i] != '\0'; i++) len++;

  printf("Tamanho da string: %d \n", len);

  return 0;
}
