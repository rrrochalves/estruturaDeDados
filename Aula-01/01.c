/*
    Alocação Estática X Dinâmica

    A alocação estática ocorre em tempo de compilação, ou seja, no momento
em que se deine uma variável ou estrutura é necessário que se deinam seu tipo
e tamanho. Nesse tipo de alocação, ao se colocar o programa em execução, a
memória necessária para utilizar as variáveis e estruturas estáticas precisa ser
reservada e deve icar disponível até o término do programa (rotina ou função).

    A alocação dinâmica ocorre em tempo de execução, ou seja, as variáveis e
estruturas são declaradas sem a necessidade de se deinir seu tamanho, pois nenhuma memória
será reservada ao colocar o programa em execução. Durante a
execução do programa, no momento em que uma variável ou parte de uma estrutura
precise ser utilizada, sua memória será reservada e, no momento em que não
for mais necessária, deve ser liberada. Isso é feito com o auxílio de comandos ou
funções que permitem, por meio do programa, reservar e/ou liberar memória.

    Malloc, Calloc, Realloc e free

    void * malloc(int qty_bytes_alloc);
    void * calloc(int qty, int size);
    void * realloc(void * pointer, int new_size);
    free( void * pointer);

    A função malloc permite que seja feita a alocação de uma nova área de
memória para uma estrutura. A função calloc tem a mesma funcionalidade de
malloc, exceto que devem ser fornecidos o tamanho da área e a quantidade de
elementos. A função realloc permite que uma área previamente alocada seja aumentada
ou diminuída e a função free libera uma área alocada previamente com
a função malloc, calloc ou realloc.

    void * (ponteiro generico);
*/


#include <stdio.h>

int main(){

	//alocação estatica;
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
	
	//Declaração de vetor como poteiro:
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
        mas calloc() inicializa todos os BITS dos espaço alocado com 0's(zero)
    */
    return 0;
}
