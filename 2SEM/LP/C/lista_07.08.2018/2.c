#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  float largura;
  float altura;

  printf("Entre com a altura do retangulo em metros:\n");
  scanf("%f", &largura);
  printf("Entre com a largura do retangulo em metros:\n");
  scanf("%f", &altura);
  printf("O perimetro do retangulo é de %.2fm e a área é de %.2fm²\n", (largura*2 + altura*2), (altura*largura));
}
