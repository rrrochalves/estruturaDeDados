#include <stdio.h>
#include <stdlib.h>

int main(){
	int **p;
		
	p = (int **) calloc(2,sizeof(int));
	
	printf("Linha: %d \n", p);
	for (int i = 0; i < 2; i++){
		p[i] = (int *) calloc(2, sizeof(int));
		
		printf("COluna:  %d\n" ,p[i]);
	}
	
	printf("\n");
	for(int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++){
			printf("(%d) (%d) = %d | " ,i,i,p[i][j]);
		}
	printf("\n"); 
	}
}
