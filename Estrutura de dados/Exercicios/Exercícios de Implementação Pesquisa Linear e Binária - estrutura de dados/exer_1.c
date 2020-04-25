/*Implemente um programa em C que crie um vetor de 15 milhões de posições. 
Preencha o vetor com os valores de 0…14.999.999. Utilize o código do arquivo 
time.c (moodle) e verifique o tempo necessário para encontrar o elemento 14.789.980 
utilizando: pesquisa linear e pesquisa binária. Faça o mesmo procedimento e verifique
 o tempo para encontrar o elemento 0.
*/
#include<stdio.h>
#include<stdlib.h>

#define MAX 15000000

int pesquisa (int *vetor);

int main (){
	
	int *vetor, i, a;
	
	vetor = malloc (MAX * sizeof (int)); 
	
	for (i=0;i<MAX;i++){
		vetor [i] = i;
	}
	
	printf ("%d\n%d", vetor [0], vetor[14999999]);
	
	a = pesquisa (vetor);
	
	if (a==1){
		printf ("\nO elemento foi encontrado!");
		return 0;
	}
	if (a==0){
		printf ("\nO elemento nao foi encontrado!");
		return 0;
	}	
	
	
return 0;
}

int pesquisa (int *vetor){
	int i;
	for (i=0;i<MAX;i++){
		if (vetor[i] == 14789980){
			return 1;
		}
	}
	return 0;
}
int binary_search (int * item , int key , int count ){
	int final, inicio , mid;
	
	final =0; inicio = MAX -1;
	
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

	
	
