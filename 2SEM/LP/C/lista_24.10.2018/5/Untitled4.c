void fila_enfileirar(int *fila, int valor, int *tras) { // Adiciona elemento a fila
    if (*tras == TAM -1)// da pra fazer isso em uma outra função separada se quiser
        printf("Lista cheia!\n");
    else {
        *tras += 1;
        fila[*tras] = valor;
    }
}

void realocar(Crianca *criancas, int qtd) {
    Crianca temp[qtd];
    for (int i=0; i<qtd; i++) {

        strcpy(temp[i].nomeCrianca, criancas[i].nomeCrianca);
        strcpy(temp[i].nomePai, criancas[i].nomePai);
        strcpy(temp[i].nomeMae, criancas[i].nomeMae);
        temp[i].data.dia = criancas[i].data.dia;
        temp[i].data.mes = criancas[i].data.mes;
        temp[i].data.ano = criancas[i].data.ano;
        temp[i].hora.hora = criancas[i].hora.hora;
        temp[i].hora.mnt = criancas[i].hora.mnt;
        temp[i].hora.seg = criancas[i].hora.seg;
        temp[i].massa = criancas[i].massa;
        temp[i].altura = criancas[i].altura;
    }
    printf("copiou\n");
    criancas = (Crianca*) realloc(criancas, sizeof(Crianca) * qtd+1);
    printf("realocou\n");
    for (int i=0; i<qtd; i++) {
        printf("for2\n");
        strcpy(temp[i].nomeCrianca, criancas[i].nomeCrianca);
        strcpy(criancas[i].nomePai, temp[i].nomePai);
        strcpy(criancas[i].nomeMae, temp[i].nomeMae);
        printf("copiou string\n");
        criancas[i].data.dia = temp[i].data.dia;
        criancas[i].data.mes = temp[i].data.mes;
        criancas[i].data.ano = temp[i].data.ano;
        printf("d m a\n");
        criancas[i].hora.hora = temp[i].hora.hora;
        criancas[i].hora.mnt = temp[i].hora.mnt;
        criancas[i].hora.seg = temp[i].hora.seg;
        printf("hora\n");
        criancas[i].massa = temp[i].massa;
        criancas[i].altura = temp[i].altura;
    }
    printf("foiiioioi\n");
}
