#include<stdio.h>
#include<stdlib.h>

struct elemento {
	int dado;
	struct elemento *prox;
};

typedef struct elemento Elemento;

typedef struct {
	Elemento *inicio;
	Elemento *fim;
} Fila;

void inicializa(Fila*);
int vazia(Fila);
void inserir(Fila*,int);
int remover(Fila*);
void imprimir(Fila);

int main() {
	Fila minhaFila;

	inicializa(&minhaFila);
	imprimir(minhaFila);
	inserir(&minhaFila,12);
	inserir(&minhaFila,23);
	inserir(&minhaFila,34);
	imprimir(minhaFila);
	remover(&minhaFila);
	imprimir(minhaFila);
	inserir(&minhaFila,46);
	imprimir(minhaFila);
	remover(&minhaFila);
	imprimir(minhaFila);
	remover(&minhaFila);
	imprimir(minhaFila);
	remover(&minhaFila);
	imprimir(minhaFila);
	//remover(&minhaFila);
	//imprimir(minhaFila);

	return 0;
}

void inicializa(Fila *f) {
	f->inicio = f->fim = NULL;
}

int vazia(Fila f) {
	return f.inicio == NULL && f.fim == NULL;
}

void inserir(Fila *f,int dado) {
	Elemento *e;

	e = (Elemento*)malloc(sizeof(Elemento));
	e->dado = dado;
	e->prox = NULL;

	if(vazia(*f)){
		f->inicio = e;
	}
	else{
		f->fim->prox = e;
	}
	f->fim = e;
}

int remover(Fila *f) {
	Elemento *aux;
	int dado;

	if(!vazia(*f)) {
		aux = f->inicio;
		f->inicio = f->inicio->prox;
		dado = aux->dado;
		free(aux);
		f->fim = f->inicio ? f->fim : NULL;
		return dado;
	}

	return 0;
}

void imprimir(Fila f) {
	Elemento *aux;

	printf("\n[ ");
	for(aux = f.inicio; aux; aux = aux->prox)
		printf("%d, ",aux->dado);
	printf("]\n");
}
