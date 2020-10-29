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
	push(777);
	printf("\n==============================\n");
	push(888);
	printf("\n==============================\n");
	push(999);
	printf("\n==============================\n");
	push(1000);
	printf("\n==============================\n");
	printf("\n\nElemento 1, Depois do push: %d", pilha[0]);
	printf("\n\nElemento 2, Depois do push: %d", pilha[1]);	
	printf("\n\nElemento 3, Depois do push: %d", pilha[2]);
	printf("\n\nElemento 4, Depois do push: %d", pilha[3]);
	printf("\n\nElemento 5, Depois do push: %d", pilha[4]);
	printf("\n\n==============================\n");
	
	printf("\n\n==============================\n");
	printf("\n\n\nREMOCAO DE VALORES POP\n\n\n");
	int valor;
	
	valor = pop();
	printf("\nValor removido: %d\n", valor);
	valor = pop();
	printf("\nValor removido: %d\n", valor);
	valor = pop();
	printf("\nValor removido: %d\n", valor);
	valor = pop();
	printf("\nValor removido: %d\n", valor);
	valor = pop();
	printf("\nValor removido: %d\n", valor);
	valor = pop();
	printf("\nValor removido: %d\n", valor);
	
	printf("\n\n==================================\n\n");
}

void push(int valor){
	//TAM 5;
	//pilha guarda o valor inserido na pilha;
	//topo verifica os indices (o caminho) da pilha;
	
	//verificando se tem posições na pilha para inserir 
	if(topo < TAM){
		printf("Pilha disponivel, o valor %d esta pronto para a insercao!\n", valor);
		pilha[topo] = valor;
		printf("\nValor inserido! | topo(indice): %d | valor: %d", topo ,pilha[topo]);
		topo++;
		printf("\nIndice na proxima posicao (topo): %d", topo);
	}else{
		printf("\nPilha esta cheia, valor %d nao pode ser inserido \nIndice fora do tamanho estabelecido: %d",
		valor, TAM);
	}
	
}

int pop(){
	// 1  2  3
	// 3
	// 1  2
	// 2
	// 1
	// 1
	//-1
	if(topo > 0){
		printf("\nValor: %d | Indice (topo): %d", pilha[topo],topo);
		pilha[--topo];
		printf("\nIndice (topo): %d", topo);
		return pilha[topo];
	}else{
		printf("\n Pilha Vazia! \n");
		return -1;	
	}
}
