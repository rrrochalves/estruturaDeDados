#include <stdio.h>
#include <stdlib.h>

int main(){

    int **p;
    int i,j;
	int k,x;

    printf("Digite as dimensoes da matriz: ");
    scanf("%d %d", &i, &j);

    printf("Dimensao: %d linha, %d coluna \n\n\n", i, j);
    
	p = (int **) malloc(i * sizeof(int *)); // 2 espaço de memoria
	if(p == NULL){
		printf("Erro na alocacao! Linha");
		exit(1);
	}
	
	for(k = 0; k < i; k++){ // 2 espaços de memoria;
		p[k] = (int *) malloc(j * sizeof(int));
			if(p[k] == NULL){
				printf("Erro na alocacao! Coluna");
				exit(1);
			}
	}
	
	for(k = 0; k < i; k++){
		for(x =0; x < j; x++){
			printf("Digite os valores das matrizes:");
			scanf("%d", &p[k][x]);
		}
	}
	
	for(k = 0; k < i; k++){
		for(x =0; x < j; x++){
			printf("\n\nValores(%d)(%d): %d", k, x, p[k][x]);
		}
	}
	
	for(k = 0; k < i; k++){
		free(p[k]);
	}
	
	free(p);
	return 0;
}
