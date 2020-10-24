#include <stdio.h>
#define TAM 5  //topofinal(qunatidade)

//int pilha[TAM];
int pilha[TAM];
int topo = 0;

void push(int valor);
int pop();

int main(){
	printf("\n==============================\n");
	push(666);
	printf("\n==============================\n");
	push(333);
	printf("\n==============================\n");	
	printf("\n\nElemento 1, Depois do push: %d", pilha[0]);
	printf("\n\nElemento 2, Depois do push: %d", pilha[1]);	
	printf("\n\nElemento 3, Depois do push: %d", pilha[2]);
	printf("\n\nElemento 4, Depois do push: %d", pilha[3]);
	printf("\n\nElemento 5, Depois do push: %d", pilha[4]);
	printf("\n\n==============================\n");
}

void push(int valor){
	//TAM 5;
	//pilha guarda o valor da pilha;
	//topo verifica os indices (o caminho) da pilha;
	
	//verificando se tem posições na pilha para inserir 
	if(topo < TAM){
		printf("Pilha disponivel, o valor %d esta pronto para a insercao!\n", valor);
		pilha[topo] = valor;
		printf("\nValor inserido! \ntopo(indice): %d \nvalor: %d", topo ,pilha[topo]);
		topo++;
		printf("\nIndice (topo): %d", topo);
	}else{
		printf("\nPilha esta cheia, valor %d nao pode ser inserido \nindice fora do tamanho estabelecido: %d",
		valor, topo);
	}
	
}

int pop(){
	
	return 0;
}
