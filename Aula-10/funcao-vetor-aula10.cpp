#include <stdio.h>
#define MAX 2

/*
--- Alterar o programa do exercício anterior passando para 
---função a struct e quantidade de registro a ser lida. 
---Faça também a impressão utilizando uma função para tal.
*/

void inserePessoa(struct agenda b[], int quantidade);
void imprimePessoa(struct agenda b[], int quantidade);
struct agenda{
	char nome[30];
	int idade;
	char telefone[10];
};

int main(){
	struct agenda a[MAX];
	
	inserePessoa(a,MAX);
	imprimePessoa(a, MAX);
	
	printf("====================================\n");
	
	return 0;
}

void inserePessoa(struct agenda b[], int quantidade){
	for(int i = 0; i < quantidade; i++){
		printf("Digite o nome: ");
		scanf("%s", &b[i].nome);
		printf("Digite a idade: ");
		scanf("%d", &b[i].idade);
		printf("Digite o telefone: ");
		scanf("%s", b[i].telefone);
		
	}
}

void imprimePessoa(struct agenda b[], int quantidade){
	for(int i = 0; i < quantidade; i++){
		printf("====================================\n");
		printf("Nome: %s\nIdade: %d\nTelefone: %s\n", 
				b[i].nome, 
				b[i].idade, 
				b[i].telefone);	
	}
}
