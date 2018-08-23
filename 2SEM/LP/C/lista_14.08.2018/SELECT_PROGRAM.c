#include <stdio.h>
#include <math.h>
#include "auxiliar.c"

int main() {
  int program;

  printf("Digite o numero do programa para executa-lo:\n (1) = Aprovado, rec ou resprovado;\n (2) = Qual o maior numero;\n (3) = Invalido ou logaritmo;\n (4) = Area do trapésio;\n (5) = Que triangulo se forma;\n " );
  scanf("%d", &program);

  switch (program) {
    case 1: situacao_escolar();
            break;
    case 2: qual_o_maior();
            break;
    case 3: invalido_or_logaritmo();
            break;
    case 4: area_trapezio();
            break;
    case 5: que_triangulo();
            break;
  }
  return 0;
}
