#include <stdio.h>
#include <stdlib.h>

int ** aloca(int linha, int coluna);
void libera(int **p, int linha);
void leitura(int **p, int linha, int coluna);
void imprime(int **p, int linha, int coluna);

int main(){
	int **p;
	int **p1;
	
	p= aloca(3,2);
	imprime(p,3,2);	
	
	leitura(p,3,2);
	imprime(p,3,2);
	
	libera(p,3);
	
	return 0;
}

int ** aloca(int linha, int coluna){
	int **pMatriz;
	int x;
	
	pMatriz = (int **) calloc(linha,sizeof(int));
		if(pMatriz == NULL){
			printf("Erro ao Alocar Linhas");
			exit(1);
		}
	
	for(x = 0; x < linha; x++){
		pMatriz[x]= (int *) calloc(coluna,sizeof(int));
			if(pMatriz[x] == NULL){
				printf("Erro ao alocar Colunas");
				exit(1);
			}
	}
	
	return pMatriz;
}

void libera(int **p, int linha){
	int x;
	for(x=0;x<linha;x++){
		free(p[x]);
	}
	
	free(p);
}

void leitura(int **p, int linha, int coluna){
	int x, y;
	
		for(x = 0; x < linha; x++)
			for(y = 0; y < coluna; y++){
				printf("Valor (%d) (%d)",x,y);
				scanf("%d", &p[x][y]);
			}
		
}

void imprime(int **p, int linha, int coluna){
	int x,y;
	
	for(x = 0; x < linha; x++){
		for(y = 0; y < coluna; y++){
			printf("Linha (%d), Colunha (%d) = %d | ", x, y, p[x][y]);
		}
		printf("\n");
	}
}
