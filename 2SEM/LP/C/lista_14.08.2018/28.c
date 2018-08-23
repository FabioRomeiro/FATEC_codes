#include <math.h>
#include <stdio.h>

int main() {
  int a, b, c, media_escolhida;
  float media;

  printf("Entre com o valor A:\n");
  scanf("%d", &a);
  printf("Entre com o valor B:\n");
  scanf("%d", &b);
  printf("Entre com o valor C:\n");
  scanf("%d", &c);

  printf("Escola a média a ser realizada:\n (1) = Geométrica\n (2) = Ponderada\n (3) = Harmônica\n (4) = Aritmética\n");
  scanf("%d", &media_escolhida);

  switch (media_escolhida) {
    case 1: printf("%.2f\n", pow(a*b*c,1.0/3.0));
            break;
    case 2: printf("%.2f\n", (a+(2.0*b)+(3.0*c))/6.0);
            break;
    case 3: printf("%.2f\n", (3.0/((1.0/a)+(1.0/b)+(1.0/c))));
            break;
    case 4: printf("%.2f\n", (a+b+c)/3.0);
            break;
    default: printf("MÉDIA INEXISTENTE NO SISTEMA\n");
  }

  return 0;
}
