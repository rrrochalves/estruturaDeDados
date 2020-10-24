#include <stdio.h>
#include <stdlib.h>

int funcao(int **piParametro);
int main(){
	
	int *piVariavel;
	piVariavel = (int *) malloc(sizeof(int));
	*piVariavel = 4;
	
	printf("%d \n", &piVariavel);
	printf("%d \n", piVariavel);
	printf("%d \n", *piVariavel);
	
	*piVariavel = 20;
	funcao(&piVariavel);
	return 0;
}

int funcao(int **piParametro){
	printf("%d\n", &piParametro);
	printf("%d\n", *piParametro);
	printf("%d\n", **piParametro);
	return 0;
}
