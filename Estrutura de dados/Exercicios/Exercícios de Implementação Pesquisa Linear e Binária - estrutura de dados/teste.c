#include<stdio.h>
#include<stdlib.h>

int main (){
		
	int *vetor, i, a;
	
	vetor = malloc (15000000 * sizeof (int)); 
	
	for (i=0;i<15000000;i++){
		vetor [i] = i;
	}
	
	printf ("%d\n%d", vetor [0], vetor[14999999]);
	
	for (i=0;i<15000000;i++){
		if (vetor[i] == 14.789.980){
			printf ("\nO elemento foi encontrado");
			return 0;
		}
	}
	
	
return 0;
}
