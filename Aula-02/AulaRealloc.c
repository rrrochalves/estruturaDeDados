#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *p3;
	int i;
	p3 = (int *) malloc(2 * sizeof(int));
	
	for(i = 0; i < 2; i++){
		printf("Digite os valores: ");
		scanf("%d", &p3[i]);	
	}
	for(i = 0; i < 2; i++){
		printf("Valor: %d\n", p3[i]);	
	}
	
	//void * realloc(ponteiro, tamanho);
	p3 = (int *) realloc(p3, (2+2)*sizeof(int));
	//i = 2
	for(; i < 4; i++){
		printf("Digite os valores: ");
		scanf("%d", &p3[i]);
	} 
	
	for(i = 0; i < 4; i++){
		printf("Valor: %d\n", p3[i]);	
	}
	
	int *p2;
	
	//realloc = alocar ou realocar memoria durante a execução do programa.
    //faz pedido de memoria ao computador e retorna um ponteiro com o endereço do inicio do espaço de memoria alocado;
    //alocacao com realloc();
    p2 = (int *) realloc(NULL, 70*sizeof(int));
    //equivale a:
    p2 = (int *) malloc(70*sizeof(int));
    //liberar memoria
    p2 = (int *) realloc(p2,0);
    //equivale
    free(p2);
	
	
	//reallocacao de duas etapas
	int *p = (int *) malloc(5*sizeof(int));
		int *p1 = (int *) realloc(p, 15*sizeof(int));
			if(p1 != NULL){
				p = p1;
			}
	
	
	return 0;
}
