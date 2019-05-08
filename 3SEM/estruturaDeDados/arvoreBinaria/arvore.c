typedef struct celulad 
{
	int valor;
	struct celulad *esquerda;
	struct celulad *direita;
} CELULAD;

typedef struct celula
{
	int valor;
	struct celula *prox;
} CELULA;

void imprimeArvore(CELULAD raiz)
{
	if(!raiz) return;
	imprimeArvore(raiz->esquerda);
	printf("%d", raiz->valor);
	imprimeArvore(raiz->direita);
}

CELULAD insereNaArvore(CELULAD raiz)
{
	if(raiz)	
}

int main()
{

	return 0;
}
