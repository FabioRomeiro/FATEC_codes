#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void area_trapezio() {
    float altura,baseMaior,baseMenor, area;

    printf("Digite a altura do trapézio:\n");
    scanf("%f", &altura);
    printf("Digite a base maior do trapézio:\n");
    scanf("%f", &baseMaior);
    printf("Digite a base menor do trapézio:\n");
    scanf("%f", &baseMenor);

    area = (altura + baseMaior)*altura/2;

    printf("Area do trapézio: %.2fm²", area);
}

int main() {
  setlocale(LC_ALL,"portuguese");
  area_trapezio();
  return 0;
}
