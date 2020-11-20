#include<stdio.h>
#include<stdlib.h> //malloc e free
#include<stdbool.h>

typedef struct no{
	int dado;
	struct no * prox;
}tno;

typedef tno elemento;
typedef tno * tpilha; //typedef struct no * tpilha;

void criar(tpilha * pp);
bool push(tpilha * pp, int valor);
bool pop(tpilha * pp, int * ppegaValor);
void interrogacao(tpilha *pp);
//bool inverterPilha(tpilha * pp, tpilha *pp2, int *ppegaValor);

int main(){
	tpilha p, p2; //p é uma variável do tipo ponteiro para
		    //acessar os dados de uma struct no
	int pegaValor, valor, op; //variavel do tipo inteiro
	
	criar(&p);
	push(&p, 1);
	push(&p, 2);
	push(&p, 3);
	push(&p, 4);
	push(&p, 5);
	 
	interrogacao(&p);
	
	return 0;
}

void criar(tpilha * pp){
* pp = NULL;
}
			//null
bool push(tpilha * pp, int valor){
	tpilha novo;// AUX
	novo = (tno *) malloc(sizeof(tno));
		if(novo == NULL)
			return false;
			
		else{
			novo->dado = valor;
			novo->prox = *pp;//null
			*pp = novo;//NOVO DADO
			return true;
			
		}
}

bool pop(tpilha * pp, int * ppegaValor){
	tpilha aux;
	
	if(*pp == NULL)
		return false;
	else{
 		aux = *pp;
 		*ppegaValor = aux->dado; // *ppegaValor = (*pp)->dado
 		*pp = aux->prox; // *pp = (*pp)->prox;
 		free(aux);
 		return true;
	}
}

void interrogacao(tpilha *pp){
	 tpilha aux;
	 
	 criar(&aux);
	 
	 
	 //novoaux = pp;
	 int elemento_x, elemento_y, valor;
	
	 if(pop(pp, &elemento_x)){
	 printf("O que aconteceu? | REMOVEU de PP ELEMENTO X: %d \n", elemento_x);
	 }
	 while((*pp)->prox != NULL){
	 	if(pop(pp, &valor)){
	 		printf("O que aconteceu? | REMOVEU DE PP VALOR: %d \n", valor);
	 	}
	 	if(push(&aux, valor)){
	 		printf("O que aconteceu? | INSERIU VALOR EM AUX: %d \n", valor);
	 	}
	 }
	 
	 if(pop(pp, &elemento_y)){
	 printf("O que aconteceu? | REMOVE DE PP O ELEMENTO Y: %d \n", elemento_y);
	 }
	
	 if(push(pp, elemento_x)){
	 printf("O que aconteceu? | INSERIU EM PP O ELEMTENTO_X: %d \n", elemento_x);
	 } 
	 
	 while(aux != NULL){
	 if(pop(&aux, &valor)){
	 printf("O que aconteceu? | REMOVEU DE AUX O VALOR: %d \n", valor);
	 }
	 if(push(pp, valor)){
	 printf("O que aconteceu? | INSRIU EM PP O VALOR: %d \n", valor);
	 }
	 }
	 if(push(pp, elemento_y)){
	 printf("O que aconteceu? | inseriu em PP o Elemtento Y: %d\n", elemento_y);
	 }
}
