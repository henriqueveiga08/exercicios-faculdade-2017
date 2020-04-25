#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define NUM 100

int main (){
	srand((unsigned int)time(NULL));
	int *vetor, r, i;
	
	vetor = malloc (3000000 * sizeof (int)); 
	
	for(i=0;i<3000000;i++){
		r = rand () % NUM;
		//printf("%d\n",r);
		vetor[i] = r;
	}
	
	
return 0;
}



int main (){

	
//	for(i=0;i<3000000;i++){
//		vetor[i] = i;
//		printf ("%d ", vetor[i]);
//	}

	
	
return 0;
}
