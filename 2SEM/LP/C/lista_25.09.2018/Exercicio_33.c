#include <stdio.h>
#include <string.h>

/* Faca um programa para ler uma tabela contendo os nomes dos alunos de uma turma de
5 alunos. o programa deve solicitar ao usuario os nomes do aluno, sempre perguntando
se ele deseja inserir mais um nome na lista. uma vez lidos todos os alunos, o usuario
ira indicar u nome que ele deseja verificar se esta presente na lista, onde o programa
deve procurar pelo nome e se encontrar deve exibir o nome completo e o indice do vetor
onde esta guardado este nome. */

int main() {
    char nome[5][30], aluno[30];
    int encontrou = 0;

    for (int i=0; i<5; i++) {
        printf("Entre com  o nome do %d aluno: ", i+1);
        fgets(nome[i], 30, stdin);
        nome[i][strlen(nome[i]) -1]  = '\0';
    }

    printf("Qual nome deseja encontrar? ");
    fgets(aluno, 30, stdin);
    aluno[strlen(aluno) -1]  = '\0';


    for (int i=0; i<5; i++) {
        if (strstr(nome[i], aluno)) {
            printf("\nNome Encontrado!\nIndice: %d\n Nome: %s", i, nome[i]);
            encontrou = 1;
        }
    }

    if (!encontrou) printf("Aluno nao encontrado.\n");

}
