/*

codico Binaria para encontrar 0

*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define MAX 15000000

typedef struct est_produto {
	int id_produto;
	float quantidade;
}produtos;

int binary_search (produtos * item , int key , int count );
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
	
	binary_search (vetor_produto, 0, MAX);

	time_elapsed_nanos = timer_end(initialTime);
	
	printf("Para encontrar 0, levou %ld nanosegundos\n", time_elapsed_nanos);
	return 0;
}

int binary_search ( produtos *item , int key , int count ){
	int low ,high ,mid;
	low =0; high = count -1;
	while (low <= high ){
		mid =( low+ high )/2;
		if (key < item [mid].id_produto){
			high =mid -1;
		} else if (key > item [mid].id_produto){
			low =mid +1;
		} else {
			printf("Valor foi encontrado!!\n");
			return mid;
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
