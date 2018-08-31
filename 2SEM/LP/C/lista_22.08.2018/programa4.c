#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define CONSUMO 10 // KM/L
float nivel = 0;

void andar() {
  printf("\n");

  float distancia;

  printf("Digite a distancia que deseja dirigir:\n");
  scanf("%f", &distancia);

  float litros_consumidos = distancia/CONSUMO;

  if ( litros_consumidos > nivel) {
    printf("Você não tem combustivel o suficiente para andar esta distancia, tente abastecer o carro antes!\n");
  } else {
    printf("Você gastou %.2f litros andando\n", litros_consumidos);
    nivel -= litros_consumidos;
  }
  system("pause");
}

void adicionarGasolina() {
  printf("\n");

  float quantidade;

  printf("Digite a quantidade a ser abastecido:\n");
  scanf("%f", &quantidade);

  nivel += quantidade;

  printf("Abastecido %.2f litros!\n", quantidade);
  system("pause");
}

void obterGasolina() {
  printf("\n");
  printf("Nivel atual de combustivel: %.2f litros\n", nivel);
  system("pause");
}

int main() {
  char op;
  int rodar = 1;


  while (rodar) {
    system("clean");
    system("cls");
    printf("Entre com a operação:\n [a] = Andar\n [o] = Obter Gasolina\n [d] = Adicionar Gasolina\n [s] = Sair\n Escolha: ");
    op = getche();

    printf("\n");

    switch (op) {
      case 'a':
        andar();
        break;

      case 'o':
        obterGasolina();
        break;

      case 'd':
        adicionarGasolina();
        break;

      case 's':
        rodar = 0;
        break;

      default: printf("OPÇÃO NAO RECONHECIDA\n");
    }
  }
  system("pause");
  return 0;
}
