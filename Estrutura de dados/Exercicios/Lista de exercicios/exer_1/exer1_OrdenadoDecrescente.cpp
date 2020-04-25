/*1. Execute o algoritmo buble Sort com os seguintes valores: 3 x 106 , 5x106, 7x106, 9x106,
11x106, 13,x106, 15x106, 17x106, 19x106, 21x106. Gere os gráficos de tempo para vetor
ordenador crescente, vetor ordenado decrescente e vetor com números aleatórios.*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define MAX 9000

struct timespec timer_start();
long timer_end(struct timespec start_time);
void bubbleV1 (int * item , int numElemento );

int main() {
	srand((unsigned int)time(NULL));
	int *vetor, i;
	struct timespec initialTime;
	long time_elapsed_nanos;

	vetor = (int*)malloc (MAX * sizeof (int)); 
	
	for(i=0;i<MAX;i++){
		vetor[i] = MAX - i;
	}
	
	printf("vetor[0] => %d\n", vetor[0]);
	printf("vetor[1] => %d\n", vetor[1]);
	
	printf("MAX => %d\n", MAX);
	
	initialTime = timer_start(); 
	
	bubbleV1 (vetor, MAX);
	
	time_elapsed_nanos = timer_end(initialTime);

	printf("tempo (nanosegundos): %ld\n", time_elapsed_nanos);
	
	printf("vetor[0] => %d\n", vetor[0]);
	printf("vetor[1] => %d\n", vetor[1]);
	return 0;
}

void bubbleV1 (int * item , int numElemento ){
	int n ,i , aux ;
	for ( n =1; n <= numElemento ; n ++) {
		for( i =0; i < numElemento -1; i ++){
			if( item [ i ] > item [ i +1]){
				aux = item [ i ];
				item [ i ] = item [ i +1];
				item [ i + 1] = aux ;
			}
		}
	}
}
struct timespec timer_start(){
    struct timespec start_time;
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &start_time);
    return start_time;
}

long timer_end(struct timespec start_time){
    struct timespec end_time;
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end_time);
    long diffInNanos = end_time.tv_nsec - start_time.tv_nsec;
    return diffInNanos;
}
