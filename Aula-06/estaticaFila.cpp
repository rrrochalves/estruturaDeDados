//FILA ESTATICA (VETOR)

//LIFO(Pilha) Last in First out
//FIFO(Fila) First in Firt out


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAXTAM 10

int inicio, fim;
int Fila[MAXTAM];

//inicializar;
void contruir();

bool vazia();
bool cheia();

bool inserir(int valor);
bool pop(int &valor);
int get();
int tamanho();

int main(){
	int valor;
	
	contruir();
	
	inserir(25);
	inserir(23);
	inserir(33);
	inserir(44);
	inserir(55);
	inserir(76);
	inserir(67);
	inserir(87);
	inserir(87);
	inserir(98);
	inserir(918);
	inserir(666);
	printf("\nTamanho: %d", tamanho());
	printf("\nInicio: %d", get());
	
	while(pop(valor)){
		printf("\n Valor Retirado: %d", valor);
	}
	
	printf("\nInicio: %d", get());
	
	/*
	if(pop(valor)){
		printf("Valor: %d", valor);
	}else{
		printf("\n Fila Vazia");
	}*/
		
}


void contruir(){
	inicio = 0;
	fim = -1;
}

bool vazia(){
	if(inicio > fim){
		return true;
	}else{
		return false;
	}
	
	//return frente>tras;
}

bool cheia(){
	/*if(fim==MAXTAM-1){
		return true;
	}else {
		return false;
	}*/
	return fim==MAXTAM-1;
}

bool inserir(int valor){
	if(cheia()){
		printf("\n Fila Cheia, valor: %d nao inserido", valor);
		return false;
	}else{
		fim++;
		Fila[fim] = valor;
		return true;
	}
}

bool pop(int &valor){
	if(vazia()){
		return false;
	}else{
		valor = Fila[inicio];
		inicio++;
		return true;
	}
}

int get(){
	int aux;
	if(vazia()){
		printf("\nFila Vazia!");
		return 0;
	}else{
		aux = Fila[inicio];
		return aux;
	}
}

int tamanho(){	
	return (fim - inicio) + 1;
}

