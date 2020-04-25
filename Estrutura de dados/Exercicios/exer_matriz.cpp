#include<stdio.h>
#include<stdlib.h>

int main (){

	int a [3][3] = {1,2,3,4,5,6,7,8,9}, i, j, soma;
	
	for (i=0;i<3;i++){
		printf("\n");
		for (j=0;j<3;j++){
			printf("%d ", a[i][j]);
			if (j>=i)
				soma = soma + a[i][j];
		}
	}
	
	printf ("\n\nSoma = %d", soma);

	return 0;
}
