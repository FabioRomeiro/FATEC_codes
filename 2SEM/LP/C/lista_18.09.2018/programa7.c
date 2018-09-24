#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

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

void substitui_caracter(char s[],char c) {
  int i;
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] == c)
      s[i] = '*';
  }
  printf("\nNovo ficou:%s",s);
}

int main(){
  char s[20], c;
  printf("Entre com uma palavra\n");
  scanf("%s", &s);
  printf("Quantidade de vogais: %d\n",conta_vogais(s));
  printf("Entre com um caracter: ");
  scanf(" %c", &c);
  substitui_caracter(s,c);
  getch();
  return 0;
}
