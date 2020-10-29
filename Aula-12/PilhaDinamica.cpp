#include<stdio.h>
#include<stdlib.h> //malloc e free
#include<stdbool.h>

typedef struct no{
	int dado;
	struct no * prox;
}tno;

typedef tno * tpilha; //typedef struct no * tpilha;

void criar(tpilha * pp);
bool push(tpilha * pp, int valor);
bool pop(tpilha * pp, int * ppegaValor);
bool inverterPilha(tpilha * pp, tpilha *pp2, int *ppegaValor);

int main(){
	tpilha p, p2; //p é uma variável do tipo ponteiro para
		    //acessar os dados de uma struct no
	int pegaValor, valor, op; //variavel do tipo inteiro
	
	criar(&p);
	criar(&p2);
	
	do{
		printf("Entre com a opcao: \n-1 - Sair \n 1 - Push  \n 2 - Pop \n 3 - Inverter\n");
		scanf("%d", &op);
		
		switch(op){
		case 1: 
		do{
			printf("Informe o valor para Push (-1 Sair) : ");
			scanf("%d", &valor);
			if(valor == -1)
			printf("Saindo...\n");
			else{
				if(push(&p, valor))
				printf("Pilha[%d] \n", p->dado);
				else{
					printf("Erro: Memoria Insuficiente!\n");
					valor = -1;
				}
			}
		}while(valor != -1);
		break;
		case 2: 
		//do{
			//printf("Entre com o valor 1 para Pop ou (-1 Sair) : ");
			//scanf("%d",&valor);
			//if(valor == 1){
				if(pop(&p, &pegaValor))
					printf("Lido valor do topo da pilha: %d \n", pegaValor);
				else
				printf("\n\n\nPilha Vazia! \n\n\n");
			//}
			//else{
			//	printf("Valor invalido! \n");
			//}
		//}while(valor != -1);
		break;
		case 3:
			//printf("Entre com o Valor 1 para inverter ou (-1 Sair)\n");
			//scanf("%d", &valor);
			//if(valor == -1)
				//printf("Saindo....\n");
				//else{
					if(inverterPilha(&p,&p2,&pegaValor))
						printf("Valor invertido: %d \n", p2->dado);
					else
						printf("\n\nNao inverteu! \n\n");
				//}
			
			break;
		}
	}while(op != -1);
	
	return 0;
}

void criar(tpilha * pp){
* pp = NULL;
}

bool push(tpilha * pp, int valor){
	tpilha novo;
	novo = (tno *) malloc(sizeof(tno));
		if(novo == NULL)
			return false;
		else{
			novo->dado = valor;
			novo->prox = * pp;
			*pp = novo;
			return true;
		}
}

bool pop(tpilha * pp, int * ppegaValor){
	tpilha aux;
	
	if(*pp == NULL)
		return false;
	else{
 		aux = *pp;
 		*ppegaValor = aux->dado; // *ppegaValor = (*pp)->dado
 		*pp = aux->prox; // *pp = (*pp)->prox;
 		free(aux);
 		return true;
	}
}

bool inverterPilha(tpilha * pp, tpilha *pp2, int *ppegaValor){
	tpilha aux;	
		if(*pp == NULL)
		return false;
		else{
			pop(pp, ppegaValor);
			push(pp2, *ppegaValor);
			return true;
		}
}
