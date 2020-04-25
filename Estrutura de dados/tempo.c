#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX 150000

// call this function to start a nanosecond-resolution timer
struct timespec timer_start();

// call this function to end a timer, returning nanoseconds elapsed as a long
long timer_end(struct timespec start_time);

int main() {
	int i;
	struct timespec initialTime;
	long time_elapsed_nanos;


	initialTime = timer_start(); 
	
	///////////////////////////////////
	/*
		coloque seu código aqui!!!
	*/
	for (i = 0; i < MAX; i++);
	
	///////////////////////////////////
	
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
