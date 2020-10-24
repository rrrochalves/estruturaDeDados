#include <stdio.h>
#include <stdlib.h>


struct ST_DADOS{
	char nome[40];//40
	float salario;//8

	struct nascimento{
		int ano;//4
		int mes;//4
		int dia;//4
	}dt_nascimento;
};

int main(){
	struct ST_DADOS *p;
	
	
	p = (struct ST_DADOS *) malloc(sizeof(struct ST_DADOS));
	if(p == NULL){
		printf("Erro ao alocar Memoria!");
		exit(1);
	}
	
	printf("Nome: ");
	//STRING (VETOR DE CARACTERES) É UM PONTEIRO, POR ISSO A AUSENCIA DO &(GATINHO - MIAUUUU)
	scanf("%s", p->nome);
	printf("Salario: ");
	scanf("%f", &p->salario);
	
	//O -> É CHAMADO DE POINTER MEMBER (APONTADOR DE MEMBRO). ELE É USADO PARA REFERENCIAR UM CAMPO DA ESTRUTURA NO LUGAR DO PONTO(.)
	printf("Entre com a data de Nascimento: ");
	scanf("%d %d %d", &p->dt_nascimento.dia, &p->dt_nascimento.mes, &p->dt_nascimento.ano);
	
	printf("\nDados Digitados");
	printf("\n\n\nNome: %s", p->nome);
	printf("\nSalario: %.2f", p->salario);
	printf("\nData de Nascimento: %d/%d/%d", p->dt_nascimento.dia, p->dt_nascimento.mes, p->dt_nascimento.ano);
	
	
	
	struct nascimento *p2;
	
	p2 = (struct nascimento *) malloc(sizeof(struct nascimento));
	
	if(p2 != NULL){
		printf("\n\n\n SOMENTE A DATA DE NASCIMENTO: ");
		scanf("%d %d %d", &p2->dia, &p2->mes, &p2->ano);
	}else{
		printf("Nao foi possivel alocar memoria!");
		exit(1);
	}
	
	printf("\nData de Nascimento: %d/%d/%d", p2->dia, p2->mes, p2->ano);
	
	free(p);
	free(p2);
}
