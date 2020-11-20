#include<stdio.h>
#include<stdlib.h> //malloc e free
#include<stdbool.h>
#include <string.h>

/*
--Escreva um programa que utiliza uma pilha 
--para determinar se um texto é um palíndrono, ou seja, 
--o texto é soletrado identicamente do início para o fim 
--e do fim para o início. 
--O programa deve ignorar espaços, pontuação e caracteres especiais.
--Exemplos: “asa”, “ovo”, “socorram-me subi no onibus em marrocos”

--Dica: 
--Para ler uma string com espaço  em branco com scanf()!
--scanf("%[^\n]", frase)

--Ou podem usar a função gets();
*/
typedef struct no{
	char dado;
	struct no * prox;
}tno;

typedef tno *tpilha; //typedef struct no * tpilha;

void criar(tpilha * pp);
bool push(tpilha * pp, char valor);
bool pop(tpilha * pp, char * ppegaValor);
bool palindromo(tpilha * p);

int main(){
	tpilha p;
	char palavra[100];
	
	criar(&p);
	
	printf("Digite uma palavra ou frase >> ");
	scanf("%*[^\n]", palavra);
	
	//printf("\n palavra: %s", palavra);
	
	for(int i = 0; i < strlen(palavra); i++){
		push(&p, palavra[i]);
	}
	
	//======INVERSOES DA PILHA E COMPARAÇÕES======
	tpilha p2, p3;
	char aux, aux2;
	criar(&p2);
	criar(&p3);
	while(p){
		pop(&p, &aux);
		if(aux != ' '){
			push(&p2, aux);
		}
		printf("ok");
		
	}
	
	return 0;
}

void criar(tpilha * pp){
* pp = NULL;
}

bool push(tpilha * pp, char valor){
	tpilha novo;
	novo = (tno *) malloc(sizeof(tno));
		if(novo == NULL)
			return false;
		else{
			novo->dado = valor;
			novo->prox = * pp;
			*pp = novo;
			return true;
		}
}

bool pop(tpilha * pp, char *ppegaValor){
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

bool palindromo(tpilha * p){
	
}
