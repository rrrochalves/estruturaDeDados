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
	//referencia para uma variavel é obtida pelo & (GATINHOOOO - MIAUUUUUU)
	
	int i;
	scanf("%d", &i); // vai inserir o valor no endereço de memoria de i (por referencia);
	
	//alocação de vetor ou matriz dentro de uma função, deve-se passar a referencia do ponteiro (por causa da alocação dinamica);
	int *pN;
	//passando por referencia para a função
	funcao(&pN);
	//e declarado como um ponteiro na função em questão; Regra é a adição de um * sempre no inicio de uma variavel;
	void funcao(int **pN);
	
	return 0;
}
*/
