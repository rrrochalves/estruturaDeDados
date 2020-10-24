/*
    Aloca��o Est�tica X Din�mica

    A aloca��o est�tica ocorre em tempo de compila��o, ou seja, no momento
em que se deine uma vari�vel ou estrutura � necess�rio que se deinam seu tipo
e tamanho. Nesse tipo de aloca��o, ao se colocar o programa em execu��o, a
mem�ria necess�ria para utilizar as vari�veis e estruturas est�ticas precisa ser
reservada e deve icar dispon�vel at� o t�rmino do programa (rotina ou fun��o).

    A aloca��o din�mica ocorre em tempo de execu��o, ou seja, as vari�veis e
estruturas s�o declaradas sem a necessidade de se deinir seu tamanho, pois nenhuma mem�ria
ser� reservada ao colocar o programa em execu��o. Durante a
execu��o do programa, no momento em que uma vari�vel ou parte de uma estrutura
precise ser utilizada, sua mem�ria ser� reservada e, no momento em que n�o
for mais necess�ria, deve ser liberada. Isso � feito com o aux�lio de comandos ou
fun��es que permitem, por meio do programa, reservar e/ou liberar mem�ria.

    Malloc, Calloc, Realloc e free

    void * malloc(int qty_bytes_alloc);
    void * calloc(int qty, int size);
    void * realloc(void * pointer, int new_size);
    free( void * pointer);

    A fun��o malloc permite que seja feita a aloca��o de uma nova �rea de
mem�ria para uma estrutura. A fun��o calloc tem a mesma funcionalidade de
malloc, exceto que devem ser fornecidos o tamanho da �rea e a quantidade de
elementos. A fun��o realloc permite que uma �rea previamente alocada seja aumentada
ou diminu�da e a fun��o free libera uma �rea alocada previamente com
a fun��o malloc, calloc ou realloc.

    void * (ponteiro generico);
*/


#include <stdio.h>

int main(){

	//aloca��o estatica;
	int nota;
    int idade[10];
    int quadrado[2][2];

    //cria um arry de 50 inteiros (200 bytes) int = 4 bytes;
    int *v = malloc(200);
    //cria um array de 200 char (200 bytes) char = 1 byte;
    char *c = malloc(200);
    
    //malloc();
    int *v4 = malloc(200);
	int *v5 = malloc(50 * sizeof(int)); //sizeof(int) 4
    int *v2 = (int *) malloc(50 * sizeof(int));
    char *c2 = (char *) malloc(50 * sizeof(char));


	int *p;
	//   void * malloc(int qty_bytes_alloc);
	//   int * malloc(int qty_bytes_alloc);
	p = (void *) malloc(4 *sizeof(int));
	p = (char *) malloc(4 * sizeof(char));
	
	//Declara��o de vetor como poteiro:
    int *aVetor;
    aVetor = (int *) malloc(10 * sizeof(int *));

    //Declaracao de Matriz como ponteiro (2x3):
    int **aM;
    aM = (int **) malloc(2 * sizeof(int *)); // 2 linhas
        for(int i = 0; i < 2; i++){
            aM[i] = (int *) malloc( 2 * sizeof(int)); // 2 colunas
        }


    //Calloc
    int *v_ = (int *) calloc(50,4);
    char *c_ = (char*) calloc(200,1);

    int *v_1 = (int *) calloc(50,sizeof(int));
    char *c_2 = (char*) calloc(50,sizeof(char));

    /*
        malloc() x calloc(): ambas servem para alocar memoria,
        mas calloc() inicializa todos os BITS dos espa�o alocado com 0's(zero)
    */
    return 0;
}
