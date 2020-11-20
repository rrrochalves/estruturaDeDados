#include <stdlib.h>
#include <stdio.h>

typedef struct {
	int elementos[100];
	int topo;
}pilha;

pilha * cria_pilha() {
	pilha *p = malloc(sizeof(pilha));
	p->topo = -1;
	return p;
}
void push(pilha *p, int elemento) {
	if (p->topo >= 99){
		return;
	}
	
	p->elementos[++p->topo] = elemento;
}

int pop(pilha *p) {
	int a = p->elementos[p->topo];
	p->topo--;
	return a;
}
//O programa a seguir utiliza uma pilha
int main() {
	pilha * p = cria_pilha();
	push(p, 2);
	push(p, 3);
	push(p, 4);
	pop(p);
	push(p, 2);
	int a = pop(p) + pop(p);
	push(p, a);
	//a += pop(p);
	a += a;
	printf("a (comum): %d \n", a);
	
	return 0;
}
