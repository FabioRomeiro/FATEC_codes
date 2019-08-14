#include "base.h"

void inverteInteiro(int n)
{
  if(n == 0) return;
  printf("%d", n%10);
  inverteInteiro(n/10);
}

void printaInteiro(int n)
{
  if(n >= 0) {
    printf("%d ", n);
    if (n == 0)
      return;
    printaInteiro(n-1);   
  }
  printf("%d ", n);
}

void inverteVetor100(int v[], int n)
{
  if(n > 49) {
    int aux = v[100 - n];
    v[100 - n] = v[n-1];
    v[n - 1] = aux;
    inverteVetor100(v, n-1);
  }
}

int alturaAteElemento(ARVORE* raiz, int x)
{
  for (int i = 1; raiz; i++)
  {
    if (raiz->valor == x) 
      return i;
    if (x < raiz->valor) {
      raiz = raiz->esq;
    } else {
      raiz = raiz->dir;
    }
  }
  return -1;
}

void concatenaDuasListas(CELULA* l1, CELULA* l2)
{
  CELULA* aux = l1->prox;
  for (; aux->prox; aux = aux->prox);
  aux->prox = l2->prox;
}

ARVORE *Insere(ARVORE *r, int x)
{
  ARVORE *f, *p;
  ARVORE *novo = malloc(sizeof(ARVORE));
  novo->valor = x;
  novo->esq = NULL;
  novo->dir = NULL;

  if (r == NULL)
    return novo;
  f = r;
  while (f != NULL)
  {
    p = f;
    if (f->valor > novo->valor)
      f = f->esq;
    else
      f = f->dir;
  }
  if (p->valor > novo->valor)
    p->esq = novo;
  else
    p->dir = novo;
  return r;
}

void troca(int vetor[], int iOriginal, int iFuturo)
{
  int aux = vetor[iOriginal];
  vetor[iOriginal] = vetor[iFuturo];
  vetor[iFuturo] = aux;
}

int particiona(int vetor[], int inicio, int fim)
{
  int menores = 0;
  int pivot = vetor[fim-1];
  for (int i = 0; i < fim-1; i++)
  {
    if (vetor[i] <= pivot)
    {
      troca(vetor, pivot, i);
      menores++;
    }
  }
  troca(vetor,fim-1,menores);
  return menores;
}

void intercala(int vetor[], int inicio, int meio, int fim)
{
  int i = 0;
  while (inicio < meio && meio < fim)
  {
    if (vetor[inicio] > vetor[meio])
    {
      troca(vetor,i++,meio++);
    } else {
      troca(vetor, i++, inicio++);
    }
  }
  for (; inicio < meio; inicio++)
    vetor[i++] = vetor[inicio]; 
  for (; meio < fim; meio++)
    vetor[i++] = vetor[meio+1];
}

void mergeSort(int vetor[], int inicio, int fim)
{
  if ((fim-inicio) <= 1) return;
  int meio = (fim+inicio)/2;
  mergeSort(vetor, meio, fim);
  mergeSort(vetor, inicio, meio);
  intercala(vetor, inicio, meio, fim);
}

void quickSort(int vetor[], int inicio, int fim)
{
  if (fim <= inicio)
    return;
  int pivot = particiona(vetor,inicio,fim);
  quickSort(vetor, pivot+1, fim);
  quickSort(vetor, inicio, pivot);
}

int main()
{
  printVoidIntQuestion(
    "Inverte números inteiros recursivamente:",
    3020,
    inverteInteiro,
    0);

  printVoidIntQuestion(
    "Printa para frente e para tras:",
    6,
    printaInteiro,
    0);

  int inputVector[] = {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
    11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
    21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
    31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
    41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
    51, 52, 53, 54, 55, 56, 57, 58, 59, 60,
    61, 62, 63, 64, 65, 66, 67, 68, 69, 70,
    71, 72, 73, 74, 75, 76, 77, 78, 79, 80,
    81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
    91, 92, 93, 94, 95, 96, 97, 98, 99, 100,
  };
  printVectorQuestion(
    "Inverte vetor de 100 posicoes:",
    inputVector,
    100,
    inverteVetor100);


  int inputVetor1[] = {1,2,3};
  int inputVetor2[] = {6,8};

  printDuasListasQuestion(
      "Concatena duas listas encadeadas:",
      vetorToLista(inputVetor1, 3),
      vetorToLista(inputVetor2, 2),
      concatenaDuasListas);
/*
  printVectorQuestion(
      "Converte vetor para lista encadeada:",
      inputVetor1,
      3,
      vetorToLista);
*/
  ARVORE* raiz = NULL;
  raiz = Insere(raiz,13);
  raiz = Insere(raiz,8);
  raiz = Insere(raiz,15);
  raiz = Insere(raiz,7);
  raiz = Insere(raiz,10);
  raiz = Insere(raiz,14);
  raiz = Insere(raiz,18);

  //printf("\n%d\n", alturaAteElemento(raiz, 7));

  int vetor[] = {1,7,12,4,5,10};
  printaVetor(vetor,6);
  printf("\n");
  mergeSort(vetor, 0, 6);
  printaVetor(vetor,6);
  printf("\n");
  printf("%d", 5/2);

  return 0;
}