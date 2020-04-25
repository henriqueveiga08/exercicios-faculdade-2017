//pesquisa linear  14.789.980

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX 15000000

// call this function to start a nanosecond-resolution timer
struct timespec timer_start();

// call this function to end a timer, returning nanoseconds elapsed as a long
long timer_end(struct timespec start_time);

int seq_search (int * item , int key , int count ){
	int t ;
	for ( t =0; t < count ; t ++){
		if( key == item [ t ])
			return t ;
	}
	return -1;
}

int main() {
	int i, *vet;
	struct timespec initialTime;
	long time_elapsed_nanos;

	vet = malloc (15000000 * sizeof(int));

	for (i=0; i<MAX; i++) {
		vet[i] = i;
	}
	
	
	initialTime = timer_start(); 
	
	
	
	///////////////////////////////////
	/*
		coloque seu código aqui!!!
	*/
	seq_search(vet, 14789980, 15000000);
	
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


pesquisa linear 0

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX 15000000

// call this function to start a nanosecond-resolution timer
struct timespec timer_start();

// call this function to end a timer, returning nanoseconds elapsed as a long
long timer_end(struct timespec start_time);

int seq_search (int * item , int key , int count ){
	int t ;
	for ( t =0; t < count ; t ++){
		if( key == item [ t ])
			return t ;
	}
	return -1;
}

int main() {
	int i, *vet;
	struct timespec initialTime;
	long time_elapsed_nanos;

	vet = malloc (15000000 * sizeof(int));

	for (i=0; i<MAX; i++) {
		vet[i] = i;
	}
	
	
	initialTime = timer_start(); 
	
	
	
	///////////////////////////////////
	/*
		coloque seu código aqui!!!
	*/
	seq_search(vet, 0, 15000000);
	
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


----------------------


pesquisa binária 14789980

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX 15000000

// call this function to start a nanosecond-resolution timer
struct timespec timer_start();

// call this function to end a timer, returning nanoseconds elapsed as a long
long timer_end(struct timespec start_time);

int binary_search (int * item , int key , int count ){
	int low , high , mid ;
	low =0; high = count -1;
	while ( low <= high ){
		mid =( low + high )/2;
		if( key < item [ mid ]){
			high = mid -1;
		} else if( key > item [ mid ]){
			low = mid +1;
		} else {
			return mid ;
		}
	}
	return -1;
}

int main() {
	int i, *vet;
	struct timespec initialTime;
	long time_elapsed_nanos;

	vet = malloc (15000000 * sizeof(int));

	for (i=0; i<MAX; i++) {
		vet[i] = i;
	}
	
	
	initialTime = timer_start(); 
	
	
	
	///////////////////////////////////
	/*
		coloque seu código aqui!!!
	*/
	binary_search(vet, 14789980, 15000000);
	
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


pesquisa binária 0

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX 15000000

// call this function to start a nanosecond-resolution timer
struct timespec timer_start();

// call this function to end a timer, returning nanoseconds elapsed as a long
long timer_end(struct timespec start_time);

int binary_search (int * item , int key , int count ){
	int low , high , mid ;
	low =0; high = count -1;
	while ( low <= high ){
		mid =( low + high )/2;
		if( key < item [ mid ]){
			high = mid -1;
		} else if( key > item [ mid ]){
			low = mid +1;
		} else {
			return mid ;
		}
	}
	return -1;
}

int main() {
	int i, *vet;
	struct timespec initialTime;
	long time_elapsed_nanos;

	vet = malloc (15000000 * sizeof(int));

	for (i=0; i<MAX; i++) {
		vet[i] = i;
	}
	
	
	initialTime = timer_start(); 
	
	
	
	///////////////////////////////////
	/*
		coloque seu código aqui!!!
	*/
	binary_search(vet, 0, 15000000);
	
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

