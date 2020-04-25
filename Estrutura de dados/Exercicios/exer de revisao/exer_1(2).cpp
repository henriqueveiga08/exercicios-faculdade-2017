/*1. Escreva a função somaPares que recebe um vetor de n inteiros e retorna a soma destes inteiros
que são números pares positivos. Por exemplo, para v = {5,3,-2,2,8,1,7,4}, somaPares retorna 14.*/
#include <stdio.h>
#include <stdlib.h>

int somaPares (int *vetor, int tam);

int main (){
	
	int *vetor, tam, a, i, soma;
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
	printf("\n");
	for (i=0;i<tam;i++){
		printf("%d ", vetor[i]);
	}
	
	soma = somaPares (vetor, tam);
	
	printf("\nSoma = %d", soma);
	
	return 0;
}

int somaPares (int *vetor, int tam){
	int i, soma = 0;
		if (tam == 0)
			return 0;
		if (vetor[tam-1]%2==0 && vetor [tam-1] >=0){
			soma = soma + vetor[tam-1];
		}
		
		soma = soma + somaPares (vetor, tam-1);
		
		return soma;
}


