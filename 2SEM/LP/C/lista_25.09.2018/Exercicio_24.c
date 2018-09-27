#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char str[20], c;
  int i, k=0;
  printf("Entre com uma string: \n");
  fgets(str, 20, stdin);
  str[strlen(str)-1] = '\0';

  printf("Digite um caractere: \n");
  scanf(" %c", &c);

  printf("Digite um numero: \n");
  scanf("%d", &i);

  for (k = 0; k < strlen(str); k++){
    if (k >= i && str[k] == c) break;
  }

  printf("Primeira ocorrencia de %c: %d\n", c,k);
  return 0;
}
