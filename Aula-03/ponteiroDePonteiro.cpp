#include <stdio.h>
#include <stdlib.h>

void funcao(int *pVariavel);
void alocarMatriz(int **variavel);
int main(){
	int variavel;
	//scanf("%d", &variavel);
	funcao(&variavel);
	
	int *pVariavel;
	//pVariavel = (int *) malloc (sizeof(int));
	alocarMatriz(&pVariavel);
	
	
	return 0;
}

int ** funcao(int *pVariavel){
	
}

void alocarMatriz(int **variavel){
	
}
/*
int main(){
	//referencia para uma variavel � obtida pelo & (GATINHOOOO - MIAUUUUUU)
	
	int i;
	scanf("%d", &i); // vai inserir o valor no endere�o de memoria de i (por referencia);
	
	//aloca��o de vetor ou matriz dentro de uma fun��o, deve-se passar a referencia do ponteiro (por causa da aloca��o dinamica);
	int *pN;
	//passando por referencia para a fun��o
	funcao(&pN);
	//e declarado como um ponteiro na fun��o em quest�o; Regra � a adi��o de um * sempre no inicio de uma variavel;
	void funcao(int **pN);
	
	return 0;
}
*/
