#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"portuguese");

  float altura, peso_ideal;
  char sexo='$';
  int valid = 1;

  printf("Digite sua altura:\n");
  scanf("%f", &altura);
  printf("Digite seu sexo (M/F):\n");
  sexo = getche();

  printf("\n%f\n", altura);

  switch (sexo) {
    case 'M': peso_ideal = 72.7 * altura;
              break;
    case 'm': peso_ideal = 72.7 * altura;
              break;
    case 'F': peso_ideal = 62.1 * altura;
              break;
    case 'f': peso_ideal = 62.1 * altura;
              break;
    default: printf("\nSexo invalido, digite 'M' para masculino ou 'F' para feminino\n");
             valid = 0;
  }
  if (valid) {
    printf("\nSeu peso ideal é %fkg\n", peso_ideal);
  }
  return 0;
}
