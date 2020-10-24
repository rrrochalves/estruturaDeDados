/**
	*	PILHA ESTATICA (VETOR)
	*	INSERÇÃO FEITA NO TOPO E REMOÇÃO TAMBEM

*/
#include <stdio.h>
#include <stdlib.h>
#define MAXTAM 10

typedef struct {
	int item[MAXTAM];
	int topo;
}Pilha;

void inicia(Pilha *p);
int vazia(Pilha *p);
int cheia(Pilha *p);
void insere(Pilha *p, int elem);
int pop(Pilha *p);
void imprime(Pilha *p);

int main(){
	
	Pilha *p = (Pilha*) malloc(sizeof(Pilha)); 
	
	//setando o valor -1;
	inicia(p);
	
	//vericar se a pilha ta cheia, e inserir o valor do elemento na pilha;
	insere(p, 11);
	printf("\nTopo: %d Elemento: %d\n", p->topo, p->item[p->topo]);
	insere(p, 22);
	printf("\nTopo: %d Elemento: %d\n", p->topo, p->item[p->topo]);
	insere(p, 37);
	printf("\nTopo: %d Elemento: %d\n", p->topo, p->item[p->topo]);
	insere(p, 46);
	printf("\nTopo: %d Elemento: %d\n", p->topo, p->item[p->topo]);
	insere(p, 58);
	printf("\nTopo: %d Elemento: %d\n", p->topo, p->item[p->topo]);
	insere(p, 67);
	printf("\nTopo: %d Elemento: %d\n", p->topo, p->item[p->topo]);
	insere(p, 72);
	printf("\nTopo: %d Elemento: %d\n", p->topo, p->item[p->topo]);
	insere(p, 85);	
	printf("\nTopo: %d Elemento: %d\n", p->topo, p->item[p->topo]);
	insere(p, 93);	
	printf("\nTopo: %d Elemento: %d\n", p->topo, p->item[p->topo]);
	insere(p, 100);
	printf("\nTopo: %d Elemento: %d\n", p->topo, p->item[p->topo]);
	//insere(p, 666);
	//printf("\nTopo: %d Elemento: %d\n", p->topo, p->item[p->topo]);
	int aux;
	aux = pop(p);
	printf("\n Saiu: %d", aux);
	aux = pop(p);
	printf("\n Saiu: %d", aux);
	aux = pop(p);
	printf("\n Saiu: %d", aux);
	aux = pop(p);
	printf("\n Saiu: %d", aux);
	aux = pop(p);
	printf("\n Saiu: %d", aux);
	aux = pop(p);
	printf("\n Saiu: %d", aux);
	aux = pop(p);
	printf("\n Saiu: %d", aux);
	aux = pop(p);
	printf("\n Saiu: %d", aux);
	aux = pop(p);
	printf("\n Saiu: %d", aux);
	aux = pop(p);
	printf("\n Saiu: %d", aux);
	aux = pop(p);
	printf("\n Saiu: %d", aux);
	return 0;
}

void inicia(Pilha *p){
	p->topo = -1;
}

int vazia(Pilha *p){
	if(p->topo == -1){
		return 1;
	}
	
	return 0;
}

int cheia(Pilha *p){
	if(p->topo == MAXTAM-1){
		//printf("\nPilha Cheia");
		return 1;
	}
	
	return 0;
}

void insere(Pilha *p, int elem){
	if(cheia(p) == 1){
		printf("Erro: Pilha Cheia");
		exit(1);
	}else{
		p->topo++;
		p->item[p->topo] = elem;
	}
}

int pop(Pilha *p){
	int aux;
	if(vazia(p) == 1){
		printf("\n Pilha Vazia!");
		exit(1);
	}else{
		aux = p->item[p->topo];
		p->topo--;
		return aux;
	}
	return 0;
}

void imprime(Pilha *p){
	 
	for(p->topo = 0; p->topo < MAXTAM;p->topo++)
	printf("\nIndice: %d Elemento: %d", p->topo,p->item[p->topo]);
}
