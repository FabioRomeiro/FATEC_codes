#include <math.h>
#include <stdio.h>

int main() {
  float nota;
  int faltas;

  printf("Entre com a sua nota:\n");
  scanf("%f", &nota);
  printf("Entre com o seu numero de faltas:\n");
  scanf("%d", &faltas);
  printf("Seu conceito: ");
  if (nota >= 9.0 && nota <= 10.0) {
    printf((faltas <= 20) ? "A\n" : "B\n");
  } else if (nota >= 7.5 && nota < 9.0) {
    printf((faltas <= 20) ? "B\n" : "C\n");
  } else if (nota >= 5.0 && nota < 7.5) {
    printf((faltas <= 20) ? "C\n" : "D\n");
  } else if (nota >= 4.0 && nota < 5.0) {
    printf((faltas <= 20) ? "D\n" : "E\n");
  } else if (nota >= 0.0 && nota < 4.0) {
    printf("E\n");
  }

  return 0;
}
