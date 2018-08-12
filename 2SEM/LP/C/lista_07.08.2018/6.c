#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
  setlocale(LC_ALL,"Portuguese");

  float l1,l2,l3;

  printf("Entre com os tres lados de um triangulo:\n");
  scanf("%f", &l1);
  scanf("%f", &l2);
  scanf("%f", &l3);

  printf("Este é um triangulo ");
  if ( pow(l1,2) == pow(l2,2) + pow(l3,2) ||
       pow(l2,2) == pow(l1,2) + pow(l3,2) ||
       pow(l3,2) == pow(l2,2) + pow(l1,2) ) {
    printf("retangulo");
  } else if ( pow(l1,2) > pow(l2,2) + pow(l3,2) ||
              pow(l2,2) > pow(l1,2) + pow(l3,2) ||
              pow(l3,2) > pow(l2,2) + pow(l1,2) ) {
    printf("obtusangulo");
  } else if ( pow(l1,2) < pow(l2,2) + pow(l3,2) ||
              pow(l2,2) < pow(l1,2) + pow(l3,2) ||
              pow(l3,2) < pow(l2,2) + pow(l1,2) ) {
    printf("acutangulo");
  }
}
