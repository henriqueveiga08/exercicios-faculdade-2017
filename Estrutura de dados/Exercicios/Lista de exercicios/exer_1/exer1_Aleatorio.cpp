/*1. Execute o algoritmo buble Sort com os seguintes valores: 3 x 106 , 5x106, 7x106, 9x106,
11x106, 13,x106, 15x106, 17x106, 19x106, 21x106. Gere os gráficos de tempo para vetor
ordenador crescente, vetor ordenado decrescente e vetor com números aleatórios.*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define NUM 3000
#define MAX 30000

struct timespec timer_start();
long timer_end(struct timespec start_time);
void bubbleMelhorado (int * item ,int count );

int main() {
	srand((unsigned int)time(NULL));
	int *vetor, r, i;
	struct timespec initialTime;
	long time_elapsed_nanos;

	initialTime = timer_start(); 
	
	vetor = (int*)malloc (MAX * sizeof (int)); 
	
	for(i=0;i<MAX;i++){
		r=rand()%NUM;
		vetor[i] = r;
	}
	
	bubbleMelhorado (vetor, MAX);
	
	time_elapsed_nanos = timer_end(initialTime);
	
	printf("\ntempo (nanosegundos): %ld\n", time_elapsed_nanos);
	return 0;
}

void bubbleMelhorado (int * item ,int count ){
	int n =1 ,i , troca =1 , aux ;
	while (n <= count && troca == 1){
		troca = 0;
		for( i =0; i < count -1; i ++){
			if( item [ i ] < item [ i +1]){
				troca = 1;
				aux = item [ i ];
				item [ i ] = item [ i +1];
				item [ i +1] = aux ;
			}
		}
		n = n +1;
	}
	printf("\nvetor ordenado");
}

struct timespec timer_start(){
    struct timespec start_time;
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &start_time);
    return start_time;
}

long timer_end(struct timespec start_time){
    struct timespec end_time;
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end_time);
    long diffInNanos = end_time.tv_sec - start_time.tv_sec;//tirei o n e o tempo ficou em segundo
    return diffInNanos;
}
