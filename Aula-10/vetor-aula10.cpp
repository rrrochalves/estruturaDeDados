#include <stdio.h>
#define MAX 10

/*
--- Alterar o programa do exercício anterior para ler e 
--- armazenar 10 registros, 
--- imprimir os mesmos.
*/

struct agenda{
	char nome[30];
	int idade;
	char telefone[10];
};

int main(){
	struct agenda a[MAX];
	
	for(int i = 0; i < MAX; i++){
		printf("Digite o nome: ");
		scanf("%s", &a[i].nome);
		printf("Digite a idade: ");
		scanf("%d", &a[i].idade);
		printf("Digite o telefone: ");
		scanf("%s", a[i].telefone);
		
	}
	
	printf("====================================\n");
	
	for(int i = 0; i < MAX; i++){
		printf("====================================\n");
		printf("Nome: %s\nIdade: %d\nTelefone: %s\n", 
				a[i].nome, 
				a[i].idade, 
				a[i].telefone);	
	}
	printf("====================================\n");
	return 0;
}
