#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  float l1,l2,l3;
  
  printf("Entre com os tres lados de um triangulo:\n");
  scanf("%f", &l1);
  scanf("%f", &l2);
  scanf("%f", &l3);

  printf("O triangulo é ");
  if (l1==l2 && l2==l3 && l1==l3) {
    printf("equilátero");
  } else if (l1!=l2 && l2!=l3 && l1!=l3) {
    printf("escaleno");
  } else if (l1==l2 && l1!=l3 ||
             l1==l3 && l1!=l2 ||
             l2==l3 && l2!=l1 ) {
     printf("isóceles");
  }
}
