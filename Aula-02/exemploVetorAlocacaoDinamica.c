#include <stdio.h>
#include <stdlib.h>

//realocação somente de linhas de uma matriz;
//realocação somente de colunas de uma matriz;
//realocação de linhas e colunas de uma matriz;

int main(){
    int *p, *p2;
    int i, k, n;
	
    printf("Digite o numero do vetor: ");
    scanf("%d", &i);
	
    p = (int *) malloc(i*sizeof(int));
        if( p == NULL){
                printf("Erro na alocacao!");
                exit(1);
        }

    for(k = 0; k < i; k++){
        printf("Valor (%d): ", k);
        scanf("%d", &p[k]);
    }

    for( k = 0; k < i; k++){
        printf("Valor digitado (%d): %d\n", k,p[k]);
    }
    
    
	printf("Digite o numero de elementos para realocacao do vetor: ");
	scanf("%d",&n);
	
	p = (int *) realloc(p, (i+n)*sizeof(int));
	if(p == NULL){
		printf("REALOCACAO - ERRO! SEM MEMORIA");
		exit(1);
	}
	//k = i
	for(; k < (i+n); k++){
        printf("Valor (Realocacao) (%d): ", k);
        scanf("%d", &p[k]);
    }

    for(k = 0; k < (i+n); k++){
        printf("Valor digitado (Realocacao) (%d): %d\n", k, p[k]);
    }
		
	free(p);
}
