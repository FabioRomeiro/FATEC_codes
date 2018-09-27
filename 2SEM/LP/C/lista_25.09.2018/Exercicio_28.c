#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char str[20], str2[20];
  int i, k=0;
  printf("Entre com uma string: \n");
  fgets(str, 20, stdin);
  str[strlen(str)-1] = '\0';

  printf("Entre com uma outra string: \n");
  fgets(str2, 20, stdin);
  str2[strlen(str2)-1] = '\0';

  printf("%s %sesta contido em %s\n", str2, (strstr(str, str2) != NULL) ? "" : "nao " ,str);


  return 0;
}
