#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"portuguese");

  float nota1,nota2,nota3, media;

  printf("Digite a nota da prova AV1:\n");
  scanf("%f", &nota1);
  printf("Digite a nota da prova AV2:\n");
  scanf("%f", &nota2);
  printf("Digite a nota da prova AV3:\n");
  scanf("%f", &nota3);

  media = (nota1 + nota2 + (nota3*2))/4;

  printf("Media ponderada: %f\n%s", media, (media >= 60) ? "APROVADO" : "REPROVADO");

  return 0;
}
