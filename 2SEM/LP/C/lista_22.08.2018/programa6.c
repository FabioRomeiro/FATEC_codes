#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
char tipoCombustivel;
float valorLitro, quantidadeCombustivel;

float abastecerPorValor(float valor) {
  if (quantidadeCombustivel- (valor/valorLitro) >= 0) return valor/valorLitro;
  else return 0;
}

float abastecerPorLitro(float litros) {
  if (quantidadeCombustivel - litros >= 0) return litros * valorLitro;
  else return 0;
}

void alterarValor(float valor) {
    valorLitro = valor;
}

void alterarCombustivel(char c) {
  tipoCombustivel = c;
}

void alterarQuantidadeCombustivel() {
  float nova_qtd;
  printf("Digite a nova quantidade de combustivel disponivel no tanque: ");
  scanf("%f", &nova_qtd);
  quantidadeCombustivel = nova_qtd;
  printf("\nQuantidade alterada para %.2f litros!!\n", quantidadeCombustivel);
}

int main() {
  char op;
  int rodar = 1;
  printf("Entre com o tipo do combustivel:\n [g] = Gasolina\n [e] = Etanol\n [d] = Disel\n Escolha: ");
  tipoCombustivel = getche();

  printf("\nEntre com o valor do combustivel: ");
  scanf("%f", &valorLitro);

  printf("Entre com a quantidade de combustivel dentro da bomba: ");
  scanf("%f", &quantidadeCombustivel);

  while (rodar) {
    float valor_pago, litros_abastecidos,valor_abastecido,litos_a_abastecer, novo_valor;
    char novo_tipo;
    printf("\n\nEscolha a operação:\n [v] = Abastecer por valor\n [l] = Abastecer por litro\n [V] = Alterar valor\n [C] = Alterar combustivel\n [Q] = Alterar quantidade de combustivel\n [s] = Sair do programa\n Escolha: ");
    scanf("%s", &op);

    printf("\n");

    switch (op) {
      case 'v':
        printf("\n\nDigite o valor a abastecer: \n");
        scanf("%f", &valor_pago);
        litros_abastecidos = abastecerPorValor(valor_pago);
        if (litros_abastecidos != 0) {
          printf("Abastecido %.2f litros\n", litros_abastecidos);
          quantidadeCombustivel -= litros_abastecidos;
        } else {
          printf("Não é possivel abastecer esse valor!\n");
        }
        break;

      case 'l':
        printf("\n\nDigite a quantidade de litros a abastecer: \n");
        scanf("%f", &litos_a_abastecer);
        valor_abastecido = abastecerPorLitro(litos_a_abastecer);
        if (valor_abastecido != 0) {
          printf("Valor a ser pago: R$%.2f\n", valor_abastecido);
          quantidadeCombustivel -= litos_a_abastecer;
        } else {
          printf("Não é possivel abastecer esse valor!\n");
        }
        break;
      case 'V':
        printf("\n\nDigite o novo valor do litro do combustivel: ");
        scanf("%f", &novo_valor);
        alterarValor(novo_valor);
        printf("\nValor alterado!!\n");
        break;
      case 'C':
        printf("\n\nDigite o tipo do combustivel: ");
        scanf("%f", &novo_tipo);
        alterarCombustivel(novo_tipo);
        printf("\nTipo de combustivel alterado!!\n");
        break;
      case 'Q':
        alterarQuantidadeCombustivel();
        break;
      case 's': rodar = 0;
                break;
      default: printf("OPÇÃO NAO RECONHECIDA\n");
    }
    printf("Quantidade de litros no tanque: %.2f litros\n\n", quantidadeCombustivel);
    system("pause");
    system("clear");
    system("cls");
  }
  return 0;
}
