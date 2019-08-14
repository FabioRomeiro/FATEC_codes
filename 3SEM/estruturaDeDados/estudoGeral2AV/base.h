#include <stdio.h>
#include <stdlib.h>

struct CELULA {
  int valor;
  struct CELULA* prox;
} typedef CELULA;

struct CELULAD {
  int valor;
  struct CELULAD* prox;
  struct CELULAD* ant;
} typedef CELULAD;

struct ARVORE {
  int valor;
  struct ARVORE* dir;
  struct ARVORE* esq;
} typedef ARVORE;

CELULA *vetorToLista(int v[], int n)
{
  CELULA* novaLista = malloc(sizeof(CELULA));
  CELULA* aux = novaLista;

  for (int i = 0; i < n; i++)
  {
    CELULA *nova = malloc(sizeof(CELULA));
    nova->valor = v[i];
    aux->prox = nova;
    aux = aux->prox;
  }
  return novaLista;
}

void printaLista(CELULA* lista)
{
  CELULA* aux = lista->prox;
  for (; aux ; aux = aux->prox)
    printf("%d ", aux->valor);
}

void printaVetor(int vetor[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", vetor[i]);
  }
}

void printVectorQuestion(char label[], int vinput[], int vn, void (*function)(int[], int))
{
  printf("\n%s\n", label);
  printf("Input: ");
  printaVetor(vinput, vn);
  printf("\n");
  function(vinput, vn);
  printf("Output: ");
  printaVetor(vinput, vn);
  printf("\n");
  printf("\n------------------------------------------\n");
}

void printVoidIntQuestion(char label[], int input, void (*function)(int), int hasOutput)
{
  printf("\n%s\n", label);
  printf("Input: %d\n", input);
  function(input);
  if (hasOutput)
    printf("Output: %d\n", input);
  printf("\n------------------------------------------\n");
}

void printDuasListasQuestion(char label[], CELULA *l1, CELULA *l2, void (*function)(CELULA*, CELULA*))
{
  printf("\n%s\n", label);

  printf("Input 1: ");
  printaLista(l1);
  printf("\n");
  printf("Input 2: ");
  printaLista(l2);
  printf("\n");
  
  function(l1, l2);
  
  printaLista(l1);
  printf("\n");
  printf("\n------------------------------------------\n");
}