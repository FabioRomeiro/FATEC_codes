#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

char S1[20]="$&",S2[20]="$&";
int rodar = 1;

void a() {
  printf("Entre com um texto de no maximo 20 caracteres:\n");
  scanf("%s", S1);
  printf("\n\nTexto guardado com sucesso!\n");
}
void b() {
  if (S1 != "") printf("Tamando do texto: %d caracteres\n", strlen(S1));
  else printf("Por favor execute a opção 'a' antes de executar outras funcoes\n");
}
void pede_S2 () {
  printf("Entre com um segundo texto:\n");
  scanf("%s", S2);
}
void c() {
  if (abs(strcmp(S1,"$&"))) {
    if (!abs(strcmp(S2,"$&"))) pede_S2();
    printf("Essas duas strings %scontem caracteres diferentes!\n", (abs(strcmp(S1,S2))) ? "" : "nao ");
  }
  else {
    printf("Por favor execute a opção 'a' antes de executar outras funcoes\n");
  }
}
void d() {
  char str[40];
  if (abs(strcmp(S1,"$&"))) {
    if (!abs(strcmp(S2,"$&"))) pede_S2();
    strcpy(str, S1);
    strcat(str, S2);
    puts(str);
  }
  else {
    printf("Por favor execute a opção 'a' antes de executar outras funcoes\n");
  }
}
void e() {
  if (abs(strcmp(S1,"$&"))) {
    printf("%s\n", strrev(S1));
  }
  else {
    printf("Por favor execute a opção 'a' antes de executar outras funcoes\n");
  }
}
void f() {
  char c;
  int count = 0;
  if (abs(strcmp(S1,"$&"))) {
    printf("Entre com um caracter para ver quantas vezes ele aparece na S1: ");
    scanf("%s", &c);
    for (int i = 0; i < strlen(S1); i++) {
      if (S1[i] == c) count++;
    }
    printf("\nEste caracter aparece %d vezes neste texto!\n", count);
  }
  else {
    printf("Por favor execute a opção 'a' antes de executar outras funcoes\n");
  }
}
void g() {
  char c1,c2, s1cpy[20];
  if (abs(strcmp(S1,"$&"))) {
    printf("Entre com um caracter C1: ");
    c1 = getche();
    printf("\nEntre com um caracter C2: ");
    c2 = getche();
    for (int i = 0; i < strlen(S1); i++) {
      if (S1[i] == c1) {
        s1cpy[i] = c2;
        break;
      } else {
        s1cpy[i] = S1[i];
      };
    }

    printf("\n%s\n", s1cpy);
  }
  else {
    printf("Por favor execute a opção 'a' antes de executar outras funcoes\n");
  }
}


int main() {
  system("clear");
  system("cls");

  char op;

  while (rodar) {
    printf("\nEscolha uma opção:\n (a) Ler uma string S1 (MAXIMO 20 CARACTERES);\n (b) Imprimir o tamanho da string S1;\n (c) Comparar a string S1 com uma nova string S2;\n (d) Concatenar a string S1 com uma nova string S2;\n (e) Imprimir a string S1 de forma reversa;\n (f) Contar quantas vezes um dado caractere aparece na string S1;\n (g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2;\n (s) Sair do programa\n Escolha: ");
    scanf("%s", &op);

    switch (op) {
      case 'a':
        a();
        break;
      case 'b':
        b();
        break;
      case 'c':
        c();
        break;
      case 'd':
        d();
        break;
      case 'e':
        e();
        break;
      case 'f':
        f();
        break;
      case 'g':
        g();
        break;
      case 's':
        rodar = 0;
        break;
      default: printf("OPCAO INVALIDA!\n");
    }

    system("pause");
    system("clear");
    system("cls");
  }

  system("pause");
  return 0;
}
