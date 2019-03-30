// Fábio Lucas Romeiro de Castro - BD3

// Lista 1 Ex.1
void inverteInt(int x) {
    printf("%d", x%10);
    if(x/10 == 0) return;
    inverteInt(x/10);
}

// Lista 1 Ex.2
void describe(int n) {
    printf("%d ", n);
    if (n!=0) {
        describe(n - 1);
        printf("%d ", n);
    }
}

// Lista 1 Ex.3
void reverseVector(int v[], int n) {
    if(n <= 50) return;
    int aux = v[n-1];
    v[n-1] = v[100-n];
    v[100 - n] = aux;
    reverseVector(v, n-1);
}

// Lista 2 da Lista 1 Ex 1
void concatena(CELULA** a, CELULA* b) {
    if (*a == NULL) {
        *a = b;
        return;
    }
    CELULA* aux = *a;
    while (aux->prox != NULL) aux = aux->prox;
    aux->prox = b;
}

// Lista 2 da Lista 1 Ex 2