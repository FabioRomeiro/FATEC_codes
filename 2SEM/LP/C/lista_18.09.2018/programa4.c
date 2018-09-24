#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void exibe_matriz(int m[4][4]) {
  int len = 4;
  printf("\n");
  for (int i = 0; i < len; i++) {
    for (int j = 0; j < len; j++) {
      printf("%d", m[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

void op_matrizes(int m1[4][4], int m2[4][4], char op){
  int len = 4, resp[4][4];
  printf("\n");
  for (int i = 0; i < len; i++) {
    for (int j = 0; j < len; j++) {
      if (op == '+')
        resp[i][j] = m1[i][j] + m2[i][j];
      else if (op == '-')
      resp[i][j] = m1[i][j] - m2[i][j];
      printf("%d ", resp[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int op, matriz1[4][4], matriz2[4][4], length = sizeof(matriz1)/sizeof(matriz1[0]);

  for (int i = 0; i < length; i++) {
    if (i == 0)
      printf("Entre com tres numeros em cada linha da matriz 1 (Ex: 0 5 2 8):\n");
    scanf("%d %d %d %d", &matriz1[i][0], &matriz1[i][1], &matriz1[i][2], &matriz1[i][3]);
  }
  printf("\n");
  for (int i = 0; i < length; i++) {
    if (i == 0)
      printf("Entre com tres numeros em cada linha da matriz 2 (Ex: 0 5 2 8):\n");
    scanf("%d %d %d %d", &matriz2[i][0], &matriz2[i][1], &matriz2[i][2], &matriz2[i][3]);
  }

  printf("Escolha a operação:\n[1] Soma\n[2] Subtracao\nEscolha: ");
  scanf("%d", &op);

  switch (op) {
    case 1:
      op_matrizes(matriz1,matriz2,'+');
      break;
    case 2:
      op_matrizes(matriz1,matriz2,'-');
      break;
    default:
      printf("\nOperacao invalida");
  }
  getch();
  return 0;
}
