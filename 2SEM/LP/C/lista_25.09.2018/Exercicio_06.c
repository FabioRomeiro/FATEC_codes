#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char nome[30], sexo;
  int idade;

  printf("Entre com seu nome: ");
  fgets(nome, 30, stdin);
  nome[strlen(nome)-1] = '\0';
  printf("Qual seu sexo (M/F): ");
  scanf("%c", &sexo);
  printf("Entre com sua idade: ");
  scanf("%d", &idade);

  printf("%s, %s\n", nome, (idade < 25 && tolower(sexo) == 'f') ? "ACEITA" : "NAO ACEITA");
  return 0;
}
