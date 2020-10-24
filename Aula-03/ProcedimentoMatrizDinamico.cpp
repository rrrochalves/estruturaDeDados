
#include <stdio.h>
#include <stdlib.h>

void aloca(int ***p, int linha, int coluna);
void leitura(int ***p, int linha, int coluna);
void imprime(int ***p, int linha, int coluna);

int main(){
	int **pMatriz;
	int i,k;
	
	//essa passagem é por referencia;
	//passar o endereço = valor real
	//int roni;
	//scanf("%d", &roni);
	
	aloca(&pMatriz, 4, 5);
	
	leitura(&pMatriz, 4, 5);
	imprime(&pMatriz, 4, 5);
	
	return 0;
}

void aloca(int ***p, int linha, int coluna){
	int i;
	
	*p = (int **) malloc (sizeof(int) * linha);
	if(*p == NULL){
		printf("Erro na ALocacao de Linha");
		exit(1);
	}
	
	for(i = 0; i < linha; i++){
		(*p)[i] = (int *) malloc(sizeof(int) * coluna);
			if((*p)[i] == NULL){
				printf("Erro na alocacao de colunas");
				exit(1);
			}
	}
}

void leitura(int ***p, int linha, int coluna){
	int i, k;
	for(i = 0; i < linha; i++){
		for(k = 0; k < coluna; k++){
			(*p)[i][k] = i + k;
		}
	}
}

void imprime(int ***p, int linha, int coluna){
	int i,k;
	for(i = 0; i < linha; i++){
		for(k = 0; k < coluna; k++){
			printf("(%d) (%d) = %d | ", i,k, (*p)[i][k]);
		}
		printf("\n");
	}
}
