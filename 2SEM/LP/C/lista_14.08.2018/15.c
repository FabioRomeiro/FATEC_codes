#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"portuguese");

  int numero;

  printf("Digite um numero de 1 a 7:\n");
  scanf("%d", &numero);
  switch (numero) {
    case 1: printf("Domingo\n");
            break;
    case 2: printf("Segunda\n");
            break;
    case 3: printf("Terça\n");
            break;
    case 4: printf("Quarta\n");
            break;
    case 5: printf("Quinta\n");
            break;
    case 6: printf("Sexta\n");
            break;
    case 7: printf("Sábado\n");
            break;
  }

  return 0;
}
