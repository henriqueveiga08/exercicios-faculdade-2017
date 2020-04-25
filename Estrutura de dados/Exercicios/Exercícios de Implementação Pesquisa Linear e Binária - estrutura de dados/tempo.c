#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX 15000000

// call this function to start a nanosecond-resolution timer
struct timespec timer_start();

// call this function to end a timer, returning nanoseconds elapsed as a long
long timer_end(struct timespec start_time);

int main() {
	int i, *vetor, a=0;
	struct timespec initialTime;
	long time_elapsed_nanos;

	initialTime = timer_start(); 
	
	
	vetor = malloc (MAX * sizeof (int)); 
	
	for (i=0;i<MAX;i++){
		vetor [i] = i;
	}
	
	//conferir vetor
	//printf ("%d\n%d\n\n", vetor [0], vetor[14999999]);
	
	for (i=0;i<MAX;i++){
		if (vetor[i] == 14789980){
			printf("\nValor encontrado!\n");
			a=1;
			break;
		}
	}
	if (a==0)
		printf ("\nValor nao encontrado!\n");

	
	time_elapsed_nanos = timer_end(initialTime);
	
	printf("tempo (nanosegundos): %ld\n", time_elapsed_nanos);
	return 0;
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
