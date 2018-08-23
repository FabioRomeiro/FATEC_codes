#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void situacao_escolar() {
  float lab = -1, avSem=-1, eF= -1, media;

  while (lab<0 || lab>10) {
    printf("Digite a nota da prova AV1:\n");
    scanf("%f", &lab);
  }
  while (avSem<0 || avSem>10) {
    printf("Digite a nota da prova AV2:\n");
    scanf("%f", &avSem);
  }
  while (eF<0 || eF>10) {
    printf("Digite a nota da prova AV3:\n");
    scanf("%f", &eF);
  }

  media = ((lab*2) + (avSem*3) + (eF*5))/4;

  if (media>=0 && media < 3) {
    printf("REPROVADO");
  } else if (media>=3 && media < 5) {
    printf("RECUPERACAO");
  } else if (media>=5) {
    printf("APROVADO");
  }
}

int main() {
  setlocale(LC_ALL,"portuguese");
  situacao_escolar();
  return 0;
}
