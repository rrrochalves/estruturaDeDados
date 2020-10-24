#include <stdio.h>

/*
--- Seja a estrutura para descrever uma agenda de endereços, 
--- contendo os seguintes campos:
------- nome: string de tamanho 30
------- idade: inteiro
------- telefone: string de tamanho 10
--- Escrever a definição da estrutura agenda globalmente.
--- Ler UM registro, e logo após escrever os dados lidos.
*/

struct agenda{
	char nome[30];
	int idade;
	char telefone[10];
};

int main(){
	struct agenda a;
	
	printf("Digite o nome: ");
	scanf("%s", &a.nome);
	printf("Digite a idade: ");
	scanf("%d", &a.idade);
	printf("Digite o telefone: ");
	scanf("%s", a.telefone);
	
	
	printf("Nome: %s\nIdade: %d\nTelefone: %s", 
	a.nome, 
	a.idade, 
	a.telefone);
	return 0;
}
