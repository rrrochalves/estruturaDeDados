#include<stdio.h>
#include<stdlib.h>

struct elemento {
	int dado;
	struct elemento *prox;
};

typedef struct elemento Elemento;


typedef struct {
	Elemento *topo;
} Pilha;

void push(Pilha*,int);
int pop(Pilha*);
void imprime(Pilha);

int main() {

	Pilha umaPilha;

	umaPilha.topo = NULL;
	imprime(umaPilha);
	push(&umaPilha,10);
	imprime(umaPilha);
	push(&umaPilha,222);
	imprime(umaPilha);
	push(&umaPilha,333);
	imprime(umaPilha);
	
	//Pop
	printf("\nPOP");
	pop(&umaPilha);
	imprime(umaPilha);
	pop(&umaPilha);
	imprime(umaPilha);
	push(&umaPilha,466);
	imprime(umaPilha);
	pop(&umaPilha);
	imprime(umaPilha);
	pop(&umaPilha);
	imprime(umaPilha);
	pop(&umaPilha);
	imprime(umaPilha);
	
	return 0;
}
			
			//Pilha    8
void push(Pilha *p,int dado) {
	Elemento *e;
	e = (Elemento*)malloc(sizeof(Elemento));
	//insiro o dado na minha estrutura elemento;
	e->dado = dado;
	//aponto para o topo da minha pilha;
	e->prox = p->topo;
	//topo da minha pilha aponto para o meu Elemento: elemento inserido;
	p->topo = e;
}

int pop(Pilha *p) {
	Elemento *aux;
	int dado;

	if(p->topo) {
		aux = p->topo;
		p->topo = p->topo->prox;
		dado = aux->dado;
		free(aux);
		return dado;
	}

	return 0;
}

void imprime(Pilha p) {
	Elemento *i;

	printf("\n[ ");
	for(i = p.topo; i; i = i->prox){
		printf("%d, ",i->dado);	
	}
	printf("]\n");
}
