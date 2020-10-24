#include <stdio.h>

//2
/*(2,0) Mostre na tabela abaixo todos os passos (teste de mesa) 
	  e identifique qual será a saída
	  do programa em C, 
	  para os valores lidos (x = 5 e y = 10).
*/
/*	//	   5        10
void func(int *px, int *py) {
 //endereço de memoria de py vai em px;
 printf("ANTES DA ATRIBUICAO \n px = %x \n py = %x \n", px, py);
 px = py;
 printf(" px = %x \n py = %x \n", px, py);
 //valor py = 10 * 10 = 100;
 *py = (*py) * (*px);
 //valor px =  + 1 = 11
 printf("px = %d \n", *px);
 *px = *px + 1;
}
*/
int main(){
	
	float y = 5.6, *py = &y, **ppy = &py;
	printf("%f \n", **ppy);
	//py++;
	//printf("%d \n", py);
	//15
	//**ptx++
	//int x=10, *px=&x, **ppx=&x; 
	/*14
	//int x = 10;
	//int *px = &x;
	
	//printf("%d\n", &x);
	//printf("%d\n", &px);
	//printf("%d\n", *&px);
	*/
	//04
	//int a = 666, b = 6;
	//double c = 66.6;
	//int *pa, *pb = &b;
	//double *pc;
	
	//&pa = &a;//false
	//pb = &a;//true
	//*pc = c;//false
	//printf("%d", *pa);
	//*c = &pc; false
	//a = &pa;
	//*pb = &b; true

	//*pa = 1024; false
	//printf("%d", *pa);
	
	//pa = 1024; false
	//printf("%d", *pa);

	//03
	//programa A
	/*
	int valor[] = {3,7,25,80,99};
	int i = 0, *pValor;
	pValor = valor;
	
	// i = 0; i < 4 = 0 1 2 3 4
	while(i < 4) {
 		
		printf("%d \n",*pValor++);
 		i++;
	}
	*/
	/*
	int valor[] = {3,7,25,80,99};
	int i = 0, *pValor;
	pValor = valor;
	printf("%d\n", *pValor);
	while(i < 4) {
 		printf("%d ",(*pValor)++);
 		i++;
	}*/
	
	/*
	//2
 	int x, y;
 	x = 5;
 	y = 10;
	//scanf("%d",&x);
 	//scanf("%d",&y);
 	func(&x,&y);
 	//x=5   y= 101
 	printf("x = %d, y = %d", x, y);
 	*/
	//01 = d;
	//Qual afirmativa é falsa?
	//a. *pti é igual a 10. true
	//b. pti armazena o endereço de i. true
	//c. ao se executar *pti = 30; i passará a ter o valor 30. true
	//d. ao se alterar o valor de i, pti(endereço de memoria) 
	//   será modificado. false
	//e. nenhuma das anteriores.
	/*
	int *pti;
	int i = 10;
	pti = &i;
	printf("%d\n", *pti);
	printf("%d\n", &i);
	printf("%d\n", pti);
	*pti = 30;
	printf("%d\n", i);
	i = 5;
	printf("%d\n", pti);
	printf("%d\n", *pti);
	*/
}	
