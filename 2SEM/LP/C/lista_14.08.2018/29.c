#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(0));
  int acertos = 0;
  int a1 = rand() % (100 + 1 - 0) + 0,a2 = rand() % (100 + 1 - 0) + 0, respA;
  int b1 = rand() % (100 + 1 - 0) + 0,b2 = rand() % (100 + 1 - 0) + 0, respB;
  int c1 = rand() % (100 + 1 - 0) + 0,c2 = rand() % (100 + 1 - 0) + 0, respC;
  int d1 = rand() % (100 + 1 - 0) + 0,d2 = rand() % (100 + 1 - 0) + 0, respD;
  int e1 = rand() % (100 + 1 - 0) + 0,e2 = rand() % (100 + 1 - 0) + 0, respE;

  printf("Bem vindo aluno! Responda a todas as operações de soma corretamente:\n");
  printf("\nQuesão A:\n %d + %d\n", a1,a2);
  scanf("%d", &respA);
  if(respA == a1+a2){
    acertos++;
    printf("Você acertou esta!!\n");
  } else {
    printf("Você errou esta\n");
  }
  printf("\nQuesão B:\n %d + %d\n", b1,b2);
  scanf("%d", &respB);
  if(respB == b1+b2){
    acertos++;
    printf("Você acertou esta!!\n");
  } else {
    printf("Você errou esta\n");
  }
  printf("\nQuesão C:\n %d + %d\n", c1,c2);
  scanf("%d", &respC);
  if(respC == c1+c2){
    acertos++;
    printf("Você acertou esta!!\n");
  } else {
    printf("Você errou esta\n");
  }
  printf("\nQuesão D:\n %d + %d\n", d1,d2);
  scanf("%d", &respD);
  if(respD == d1+d2){
    acertos++;
    printf("Você acertou esta!!\n");
  } else {
    printf("Você errou esta\n");
  }
  printf("\nQuesão E:\n %d + %d\n", e1,e2);
  scanf("%d", &respE);
  if(respE == e1+e2){
    acertos++;
    printf("Você acertou esta!!\n");
  } else {
    printf("Você errou esta\n");
  }

  printf("\nAluno, você acertou %d vezes%s\n", acertos, (acertos) ? "!!!" : "");
  return 0;
}
