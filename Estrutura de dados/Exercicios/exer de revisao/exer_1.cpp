/*1. Escreva a função somaPares que recebe um vetor de n inteiros e retorna a soma destes inteiros
que são números pares positivos. Por exemplo, para v = {5,3,-2,2,8,1,7,4}, somaPares retorna 14.*/
#include <stdio.h>
#include <stdlib.h>

void somaPares (int *vetor, int tam);

int main (){
	
	int *vetor, tam, a, i;
	do {
		a=0;
		printf("Informe a quantidade de numeros\t");
		scanf ("%d", &tam);
		fflush(stdin);
		if (tam<=0){
			printf ("\nA quantidade tem que ser maior que 0 !!\n\n");
			a=1;
		}
	}while (a==1);

	vetor = (int*)malloc(tam * sizeof(int*));
	printf("\nInforme o(s) valores\n");
	for (i=0;i<tam;i++){
		scanf ("%d", &vetor[i]);
		fflush(stdin);
	}
	printf("\nVoce digitou:\n");
	for (i=0;i<tam;i++){
		printf("%d ", vetor[i]);
	}
	
	somaPares (vetor, tam);
	
	
	return 0;
}

void somaPares (int *vetor, int tam){
	int i, soma = 0;

	for (i=0;i<tam;i++){
		if (vetor[i]%2==0 && vetor [i] >=0)
			soma = soma + vetor [i];
	}
	printf("\nA soma dos numeros pares eh => %d", soma);
}



