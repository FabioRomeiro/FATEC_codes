#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
  char gabarito[11], turma[3][11];
  int matriculas[3], notas[3], acima = 0;
  float taxa_apr;

  printf("Entre com o gabarito:\n");

  for (int i = 1; i <= 10; i++) {
    printf("%d-", i);
    scanf(" %c", &gabarito[i-1]);
  }

  for (int i = 0; i < 3; i++) {
    printf("\nAluno %d\n", i+1);
    printf("Numero de matriculas: ");
    scanf("%d", &matriculas[i]);
    notas[i] = 0;
    for (int j = 0; j < 10; j++) {
      printf("%d-", j+1);
      scanf(" %c", &turma[i][j]);
      if (turma[i][j] == gabarito[j])
        notas[i]++;
    }
  }

  printf("\nNotas:\n");
  for (int i = 0; i < 3; i++) {
    printf("Aluno %d (Numero de matricula: %d): %d\n", i+1,matriculas[i],notas[i]);
    if (notas[i]>=7)
      acima++;
    taxa_apr = (acima*100)/3.0;
  }
  printf("Taxa de aprovacao: %.2f%%\n", taxa_apr);

  return 0;
}
