#include <stdio.h>
int main(){
	int vetor[4];
	int *pulo;
	int *posicao3;
	vetor[0] = 25;
	vetor[1] = 33;
	vetor[2] = 44;
	vetor[3] = 55;
	vetor[4] = 666;
	pulo = vetor;
	posicao3 = (pulo + 2); // 44; a == true
	printf("\n (a) %d ", posicao3);
	//printf("%d", *primeiraPosicao);
	//posicao3 = *(pulo + 4);//666; b == false;
	//printf("\n (b) %d ", posicao3);
	//printf("\n (c) %d ", pulo + 4);// c == false
	//printf("\n (d) %d ", pulo + 2);// d == true // false
}
