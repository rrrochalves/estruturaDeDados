#include <stdio.h>
#include <stdlib.h>

int main(){
	/*10
	int x1 = 1, x2 = 2, *px1;
	
	px1 = &x1;//1
	printf("x1: %d | x2: %d  | *px1: %d \n", x1, x2, *px1);
	x1 = 5;//5
	printf("x1: %d | x2: %d  | *px1: %d \n", x1, x2, *px1);
	x2 = (*px1) + 10;//15
	printf("x1: %d | x2: %d | *px1: %d \n", x1, x2, *px1);
	x1 = 9;//9						//9	15   	9			
	printf("x1: %d | x2: %d | *px1: %d \n", x1, x2, *px1);
	*/
	
	/*9
	int i = 6, j = 5;
	int *p, *q;
	p = &i;
	q = &j;
	double a = 4 / 5;
	float b = *p - a;
	float c = b + 5;
	
	printf("a: %d", (p == &i));//verdadeiro
	printf("\nb: %d", (*p - *q));//1
	printf("\n a: %f, b = %f, c = %f", a, b, c);//-0,2
	printf("\nexe: %d", 6-4/5+5);*/
	/*8
	int x = 10;
	int *px = &x;
	printf("endereco de memoria de x: %d", &x);	
	
	int resultado = *px/5;
	printf("\nvalor de px: %d", resultado);
	*/
	/* Exer.3
	int ch = 1;
	
	int *indica = &ch;
	
	printf("ch :       %d", ch);
	printf("\nindica:  %d", indica); //valor ponteiro / endereço de memoria;
	printf("\n*indica: %d", *indica);//valor da memoria apontada;
	*/
	/*
	printf("%d", 2 == 2); 1 = true
	printf("\n%d", 1 == 2); 0 = false
	*/
	
	/*Exer.5
	int num = 1;
	int *pnum = &num;
	
	
	//printf("\n%d", (num ==  &pnum));
	printf("\n%d", (num ==  *pnum));
	//printf("\n%d", (pnum == *num));
	printf("\n%d", (pnum == &num));
	*/
	
	//7
	/*
	int j, *pj;
	j = 3;
	pj = &j;
	
	printf("%d", *pj);*/

	
}
