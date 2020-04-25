#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define NUM 7

void QuickSort (int * item, int left, int right);

typedef struct est_produto {
	int id_produto;
	float quantidade;
}produtos;

struct timespec timer_start();
long timer_end(struct timespec start_time);

int main() {
	int vetor [NUM] = {5,1,4,2,6,3,7}, i;
	struct timespec initialTime;
	long time_elapsed_nanos;
	
	for (i=0;i<NUM;i++)
		printf("Vetor [%d] -> %d\n", i, vetor[i]);
	
	initialTime = timer_start(); 
	
	QuickSort (vetor, 0, 6);
	
	time_elapsed_nanos = timer_end(initialTime);
	
	printf("\nTempo para ordenacao %ld nanosegundos\n\n", time_elapsed_nanos);
	
	for (i=0;i<NUM;i++)
		printf("Vetor [%d] -> %d\n", i, vetor[i]);
	
	return 0;
}

void QuickSort (int * item, int left, int right){
	int i, j;
	int pivo, temp;
	
	i = left;
	j = right;
	pivo = item [(left+right)/2];
	
	do{
		while (item[i] < pivo && i<right) i++;
		while (pivo<item[j] && j>left) j--;
	
		if(i<=j){
			temp = item [i];
			item [i] = item [j];
			item [j] = temp;
			i++;
			j--;
		}
	}while(i<=j);
	
	if (left<j)
		QuickSort (item, left, j);
	if (i<right)
		QuickSort (item, i, right);
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
