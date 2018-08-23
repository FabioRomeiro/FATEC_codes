#include <math.h>
#include <stdio.h>
#include <string.h>

int main() {
  float preco_antigo, novo_preco;
  char mensagem[10];

  printf("Entre com o preço antigo do produto:\n");
  scanf("%f", &preco_antigo);

  if (preco_antigo <= 50.0) {
    novo_preco = preco_antigo + (preco_antigo * 0.05);
  } else if (preco_antigo > 50.0 && preco_antigo <= 100.0) {
    novo_preco = preco_antigo + (preco_antigo * 0.10);
  } else if (preco_antigo > 100.0) {
    novo_preco = preco_antigo + (preco_antigo * 0.15);
  }
  if(novo_preco <= 80) sprintf(mensagem, "barato");
  if(novo_preco > 80 && novo_preco <= 120) sprintf(mensagem, "normal");
  if(novo_preco > 120 && novo_preco <= 200) sprintf(mensagem, "caro");
  if(novo_preco > 200) sprintf(mensagem, "muito caro");

  printf("\nNovo preço: R$%.2f\nEle está %s", novo_preco, mensagem);

  return 0;
}
