/*

codico sequencial para encontrar 14789980

*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define MAX 15000000

typedef struct est_produto {
	int id_produto;
	float quantidade;
}produtos;

int seq_search (produtos * item , int key , int count );
struct timespec timer_start();
long timer_end(struct timespec start_time);

int main() {
	int i;
	struct timespec initialTime;
	produtos *vetor_produto;
	long time_elapsed_nanos;
	
	vetor_produto = (produtos*) malloc (MAX * sizeof(produtos));
	
	for (i=0;i<MAX;i++){
		vetor_produto[i].id_produto = i;
		vetor_produto[i].quantidade = i%10000;
	}
	
	initialTime = timer_start(); 
	
	seq_search (vetor_produto, 0, MAX);

	time_elapsed_nanos = timer_end(initialTime);
	
	printf("Para encontrar 0, levou %ld nanosegundos\n", time_elapsed_nanos);
	return 0;
}

int seq_search (produtos * item , int key , int count ){
	int t ;
	for ( t =0; t < count ; t ++){
		if( key == item[t].id_produto){
			printf("Valor encontrado!!\n");
			return t ;
		}		
	}
return -1;
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
