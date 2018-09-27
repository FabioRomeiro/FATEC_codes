#include <stdio.h>
#include <string.h>

int main() {
  char str[30];

  printf("Entre com uma string: ");
  fgets(str, 30, stdin);
  str[strlen(str)-1] = '\0';

  for (int i = 0; i <= 3; i++) printf("%c", str[i]);
  return 0;
}
