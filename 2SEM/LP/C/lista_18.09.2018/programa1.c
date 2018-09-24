#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "BBI_STR.h"

int eh_vogal(char c){
  c = tolower(c);
  if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    return 1;
  else
    return 0;
}

int conta_vogais (char s[]){
  int qtd_vogais = 0;
  for (int i = 0; i < strlen(s); i++) {
    if(eh_vogal(s[i])){
      qtd_vogais++;
    }
  }
  return qtd_vogais;
}

void substitui_vogais_por_asterisco(char s[]){
  for (int i = 0; i < strlen(s); i++) {
    if(eh_vogal(s[i])){
      s[i]='*';
    }
  }
  printf("%s\n", s);
}

void conta_consoante(char s[]) {
  int consoantes = 0;
  for (int i = 0; i < strlen(s); i++) {
    if(!eh_vogal(s[i])){
      consoantes++;
    }
  }
  printf("Quantidade de consoantes: %d\n", consoantes);
}

int main(){
  char s[20], c;
  int op;
  printf("Entre com uma palavra\n");
  scanf("%s", &s);

  printf("Escolha o que deseja fazer:\n");
  printf("[1] Contar vogais\n[2] Substitui vogais por '*'\n[3] Conta consoantes\n[4] Conta caracteres\n[5] Substitui certo caractere por '*'\nEscolha: ");
  scanf("%d", &op);

  switch (op) {
    case 1:
      printf("Quantidade de vogais: %d\n", conta_vogais(s));
      break;
    case 2:
      substitui_vogais_por_asterisco(s);
      break;
    case 3:
      conta_consoante(s);
      break;
    case 4:
      printf("Entre com um caractere a ser contado: \n");
      scanf("%s", &c);
      printf("Quantidade de aparicoes de %c na frase: %d\n", c, conta_caracter(s,c));
      break;
    case 5:
      printf("Entre com um caractere a ser substituido: \n");
      scanf("%s", &c);
      substitui_caracter(s,c);
      break;
    default:
      printf("Opcao nao existente!!\n");
      break;
  }
  getch();
  return 0;
}
