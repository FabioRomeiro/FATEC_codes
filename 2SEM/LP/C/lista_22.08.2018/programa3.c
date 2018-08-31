#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
int numero_magico = 4294967295;

int calc_moda(int numeros[5], int length) {
  int moda, mais_aparicoes = 1, tem_moda = 0;

  for (int i = 0; i < length; i++) {
    int vezes = 0;

    for (int j = 0; j < length; j++) {
      if (numeros[j] == numeros[i]) vezes++;
    }

    if (vezes > mais_aparicoes) {
      moda = numeros[i];
      tem_moda = 1;
    }
  }

  if (tem_moda) return moda;
  else return numero_magico;
}

int calc_mediana(int numeros[5], int length) {
  int a;
  for (int i = 0; i < length; ++i) {
      for (int j = i + 1; j < length; ++j) {
          if (numeros[i] > numeros[j]) {
              a =  numeros[i];
              numeros[i] = numeros[j];
              numeros[j] = a;
          }
      }
  }
  return numeros[2];
}

float media_ari(int numeros[5], int length) {
  int soma = 0;
  float media;
  for (int i = 0; i < length; i++) {
    soma += numeros[i];
  }
  media = soma/length;
  return media;
}

int maior_menor(int numeros[5], int length, char *c) {
  int maior = numeros[0], menor= numeros[0];

  for (int i = 0; i < length; i++) {
    if (numeros[i] < menor) {
      menor = numeros[i];
    } else if (numeros[i] > maior) {
      maior = numeros[i];
    }
  }

  if (strcmp(c,"maior") == 0) {
    return maior;
  } else if (strcmp(c,"menor") == 0) {
    return menor;
  } else {
    return 0;
  }
}

int main() {
  char op;
  int maior, menor, length, numeros[5], mediana, moda;
  float media;

  length = sizeof(numeros)/sizeof(numeros[0]);

  for (int i = 0; i < length; i++) {
    printf("Entre com o %dº numero:\n", i+1);
    scanf("%d", &numeros[i]);
  }

  printf("O que deseja ver?\na) O maior número;\nb) O menor número;\nc) A média aritmética;\nd) A mediana;\ne) A moda;\nEscolha: ");
  op = getche();
  printf("\n");
  switch (op) {
    case 'a': maior = maior_menor(numeros, length, "maior");
              printf("\nMaior numero = %d\n", maior);
              break;
    case 'b': menor = maior_menor(numeros, length, "menor");
              printf("\nMenor numero = %d\n", menor);
              break;
    case 'c': media = media_ari(numeros, length);
              printf("\nMedia aritmética = %.2f\n", media);
              break;
    case 'd': mediana = calc_mediana(numeros, length);
              printf("\nMediana = %d\n", mediana);
              break;
    case 'e': moda = calc_moda(numeros, length);
              (moda != numero_magico) ? printf("\nModa = %d\n", moda) : printf("\nMODA INEXISTENTE\n");
              break;
    default: printf("Opção inexistente\n");
  }
  system("pause");
  return 0;
}
