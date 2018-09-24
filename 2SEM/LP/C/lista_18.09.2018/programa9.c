#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>


void ShellSort(char *vetor, int tam) {

    int i, j;
    char atual;
    int h = 1;

    while(h < tam){
        h = 3*h+1;
    }

    while(h > 1){
        h = h / 3;

        for(i = h; i < tam; i++){
           atual = vetor[i];
            j = i - h;

            while( (j >=0) && (atual < vetor[j])){
                vetor[j + h] = vetor[j];
                j = j - h;
            }

            vetor[j + h] = atual;
        }
    }
}




void SelectionSort(char *vetor, int tam){

	    int posicaoDoMenorValor, i, j;
        char aux;

	for(i = 0; i < tam; i++){
	        posicaoDoMenorValor = i;

	        for(j = i + 1; j < tam; j++){
	            if(vetor[j] < vetor[posicaoDoMenorValor]){
	                posicaoDoMenorValor = j;
	            }
	        }

	        if(posicaoDoMenorValor != i){
	            aux = vetor[i];
	            vetor[i] = vetor[posicaoDoMenorValor];
	            vetor[posicaoDoMenorValor] = aux;
	        }
	    }
	}


void BubbleSort(char *vet, int t){
    char aux;

    for (int i=0; i<t; i++){
        for (int j=i; j<t; j++){
            if (vet[i] > vet[j]) {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
}

void InsertionSort(char *v, int n) {
    char aux;
    int j;
    for (int i=1; i < n; i++){
        aux = v[i];
        for (j=i; j > 0 && aux < v[j -1]; j--)
            v[j] = v[j -1];
        v[j] = aux;
    }
}


void PrintVetor(char *v,int tam) {
    for (int i=0; i<tam; i++)
        printf("%c ", v[i]);
}


int main() {
    setlocale(LC_ALL, "portuguese");
    int tam;
    char *vet, opc;

    printf("Quantas letras deseja armazenar? ");
    scanf("%d", &tam);

    vet = (int*) calloc (tam, sizeof(char));

    printf("Letras: \n");
    for (int i=0; i<tam; i++) {
        fflush(stdin);
        scanf("%c", &vet[i]);
    }


    printf("Qual tipo de ordena��o deseja utilizar:?\n");
    printf("| 1 | Bubble sort\n");
    printf("| 2 | Insertion sort\n");
    printf("| 3 | Selection sort\n");
    printf("| 4 | Shell sort\n");
    printf("Op��o: ");
    opc = getche();
    printf("\n\n");

    switch (opc) {
        case '1':
            BubbleSort(vet, tam);
            PrintVetor(vet, tam);
            break;

        case '2':
            InsertionSort(vet, tam);
            PrintVetor(vet, tam);
            break;

        case '3':
            SelectionSort(vet, tam);
            PrintVetor(vet, tam);
            break;

        case '4':
            ShellSort(vet, tam);
            PrintVetor(vet, tam);
            break;

        default:
            printf("Op��o inv�lida.");

    }



    return 0;
}
