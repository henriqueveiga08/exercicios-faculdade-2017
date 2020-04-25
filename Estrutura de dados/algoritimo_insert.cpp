#include<stdio.h>
#include<stdlib.h>

int main (){
	int i, j, eleito, vetor[4] = {4,2,3,1}, k;
	
	for(i=1;i<4;i++){
		eleito = vetor[i];
		j=i-1;
		
		printf("\nEleito = %d\n", eleito);
		
		while (j>=0&& vetor[j]>eleito){
			printf("\n1\n");
			for (k=0;k<4;k++){
				printf("%d ", vetor [k]);
			}
			vetor [j+1] = vetor [j];
			j=j-1;
			printf("\n2\n");
			for (k=0;k<4;k++){
				printf("%d ", vetor [k]);
			}
		}
		vetor[j+1]=eleito;
	}
	printf("\nVetor ordemado:\n");
	for (i=0;i<4;i++){
		printf("%d ", vetor [i]);
	}
	
return 0;
}


