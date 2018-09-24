#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char frase[30];
  printf("Entre com uma frase: \n");
  gets(frase);

  int length = strlen(frase);

  for (int i = 0; i < length; i++) {
    if (frase[i] == 'A')
      frase[i] = '*';
  }

  char invertido[length];
  for (int j = length-1; j >= 0; j--) {
    printf("%c", frase[j]);
    invertido[abs((length-1)-j)] = frase[j];
  }

  printf("\nFrase invertida e com * no lugar de A:\n%s\n", invertido);
}
