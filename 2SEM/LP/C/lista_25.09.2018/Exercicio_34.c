#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  FILE* f;
  char sequencia[1002];

  f = fopen('sequencia.txt', 'r');
  if(f==0) {
    printf("Falhou na leitura do arquivo\n");
    exit(1);
  }
  fscanf(f,"%s", &sequencia);

  printf("%s\n", sequencia);
  return 0;
}
