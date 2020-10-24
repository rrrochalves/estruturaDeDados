#include <stdio.h>
#include <stdlib.h>


int main(){
    int *p;
    int i,k;

    printf("Digite o numero do vetor: ");
    scanf("%d", &i);

    p = (int *) malloc(i*sizeof(int));
        if( p == NULL){
                printf("Erro na alocacao!");
                exit(1);
        }

    for(k = 0; k < i; k++){
        printf("Valor: ");
        scanf("%d", &p[k]);
    }

    for( k = 0; k < i; k++){
        printf("Valor digitado: %d\n", p[k]);
    }
    
    free(p);
}
