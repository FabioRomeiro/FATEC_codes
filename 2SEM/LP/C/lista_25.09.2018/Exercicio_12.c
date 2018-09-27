#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char palavra[30], c;
  int count = 0;
  printf("Entre com uma palavra: ");
  fgets(palavra, 30, stdin);
  palavra[strlen(palavra)-1] = '\0';
  printf("Entre com um caractere: ");
  scanf("%c", &c);

  for (int i = 0; palavra[i] != '\0'; i++) {
    if (tolower(palavra[i]) == 'a' || tolower(palavra[i]) == 'e' || tolower(palavra[i]) == 'i' || tolower(palavra[i]) == 'o' || tolower(palavra[i]) == 'u') {
      count++;
      palavra[i] = c;
    }
  }

  printf("Quantidade de vogais: %d\nVogais substituidas: %s\n", count, palavra);

  return 0;
}
