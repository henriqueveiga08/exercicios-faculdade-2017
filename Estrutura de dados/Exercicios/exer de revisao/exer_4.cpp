/*4. De acordo com a linguagem C, arr[0] é uma sintaxe alternativa para *(arr+0). Escreva um
programa que mostra todos os elementos de um vetor de inteiros através desse tipo de notação.*/
#include<stdio.h>
#include<stdlib.h>

int mostraVetor (int * vetor);

int main (){
	int vetor [4] = {4,2,1,3}, i;
	
	for (i=0;i<4;i++)
		printf("%d\n", vetor[i]);
	printf("\n");
	
	mostraVetor (vetor);
	
	return 0;
}

int mostraVetor (int * vetor){
	static int i=3;
	
	if(i<0)
		return 0;

	i--;
	printf("%d ", *vetor);
	
    return mostraVetor(vetor+1);
	
	return 0;
}

