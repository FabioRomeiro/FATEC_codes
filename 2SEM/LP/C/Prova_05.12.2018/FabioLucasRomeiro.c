#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

struct cliente {
	char
		id[255],
		cpf[255],
		nome[255],
		rg[255],
		endereco[255];
};

typedef struct cliente CLIENTE;

void cadastrarCliente(){

	FILE *file = fopen("db.txt", "a");
	CLIENTE Cliente;

	printf("Digite o id, nome, rg, cpf, endereco\n");
	scanf("%s", Cliente.id);
	scanf("%s", Cliente.nome);
	scanf("%s", Cliente.rg);
	scanf("%s", Cliente.cpf);
	scanf("%s", Cliente.endereco);

	fprintf(file, "id:%s cpf:%s nome:%s rg:%s endereco:%s",
		Cliente.id,
		Cliente.cpf,
		Cliente.nome,
		Cliente.rg,
		Cliente.endereco);
	fprintf(file, "\n");
	fclose(file);
}

void listarComRestricao(char nome[]) {
	FILE *f;
	char linha[255];
	char nomeComparar[255];
	CLIENTE Cliente2;

	f = fopen("db.txt","r");
	while(fscanf(f, "%s %s %s %s %s",
			Cliente2.id,
			Cliente2.cpf,
			Cliente2.nome,
			Cliente2.rg,
			Cliente2.endereco)!=EOF){
		if(strstr(Cliente2.nome, nome)){
			printf("\n");
			printf("%s %s %s %s %s\n",
				Cliente2.id,
				Cliente2.cpf,
				Cliente2.nome,
				Cliente2.rg,
				Cliente2.endereco);
			printf("\n");
		}
	}
}

void listarTodos() {
	FILE *f;
	char linha[255];

	f = fopen("db.txt","r");

	while(fgets(linha, 255, f) != NULL){
		printf("%s\n", linha);
	}
}

int main() {

	int escolha = 9;
	char resp[255];
	FILE *f;
	f = fopen("db.txt","a");
	fprintf(f, "id:1 cpf:65126516468 nome:Fabio rg:9956561 endereco:Rua-Marco-Gomes-SP\n");
	fprintf(f, "id:2 cpf:65126516468 nome:Joao rg:9956561 endereco:Rua-Marco-Gomes-SP\n");
	fprintf(f, "id:3 cpf:65126516468 nome:POaulo rg:9956561 endereco:Rua-Marco-Gomes-SP\n");
	fprintf(f, "id:4 cpf:65126516468 nome:Maria rg:9956561 endereco:Rua-Marco-Gomes-SP\n");
	fclose(f);

	while (escolha != 4 ){
		printf("Entre o que deseja fazer:\n1-Cadastrar cliente\n2-Listar pelo nome\n3-Listar todos\n4-Sair\n");
		scanf("%d", &escolha);
		switch(escolha){
			case 1: cadastrarCliente(); break;
			case 2:
				printf("Nome do usuario que deseja exibir:\n");
				scanf("%s", resp);
				listarComRestricao(resp);
				break;
			case 3: listarTodos(); break;
			case 4: escolha = 4; break;
			default: escolha = 9; break;
		}
	}

	return 0;
}
