#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

char nome[20];
int idade;
float peso, altura, imc = 0;

void crescer() {
  if (idade < 21) altura += 0.5;
}

void status() {
  printf("\n");
  printf("%s\nSua idade: %d\nSua altura: %.2f\nSeu peso: %.2f\nSeu IMC: ", nome, idade, altura, peso);
  (imc) ? printf("%.2f\n", imc) : printf("NÃO CALCULADO!\n");
  printf("\n");
  system("pause");
}

void envelhecer(int anos) {
  for (int i = 0; i < anos; i++) {
    idade++;
    crescer();
  }
}

void engordar(float kg) {
  peso += kg;
}

void emagrecer(float kg) {
  peso -= kg;
}

float Imc (float peso,  float altura) {
  imc= peso/(altura*altura);
}

int main() {
  char op;
  int rodar = 1;

  printf("\nEntre com seu nome: \n");
  scanf("%s", &nome);
  printf("\nEntre com sua idade: \n");
  scanf("%d", &idade);
  printf("\nEntre com sua altura: \n");
  scanf("%f", &altura);
  printf("\nEntre com seu peso: \n");
  scanf("%f", &peso);

  while (rodar) {
    int anos;
    float kg;
    system("clean");
    system("cls");
    printf("%s, entre com a operação:\n [v] = Envelhecer\n [g] = Engordar\n [m] = Emagrecer\n [i] = Calcular IMC\n [s] = Sair\n Escolha: ", nome);
    op = getche();

    printf("\n");

    switch (op) {
      case 'v':
        printf("Entre com a quantidade de anos a ser envelhecida: \n");
        scanf("%d", &anos);
        envelhecer(anos);
        status();
        break;

      case 'g':
        printf("Entre com a quantidade quilos a ser engordado: \n");
        scanf("%f", &kg);
        engordar(kg);
        status();
        break;

      case 'm':
        printf("Entre com a quantidade quilos a ser emagrecido: \n");
        scanf("%f", &kg);
        emagrecer(kg);
        status();
        break;

      case 'i':
        Imc(peso, altura);
        status();
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
