#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){

	int A[3][3]={1,2,3,4,5,6,7,8,9}, i ,j, aux, y=0, y1=1;
	for (i=0;i<3;i++){
		printf("\n");
		for (j=0;j<3;j++)
		printf ("%d ", A[i][j]);	
	}
	//troca de coluna y=0 (coluna 0) pela y1=0 (coluna 1)
	for (i=0;i<3;i++){
		aux = A[i][y];
		A[i][y] = A[i][y1];
		A[i][y1] = aux;
	}

	printf("\n");
	for (i=0;i<3;i++){
		printf("\n");
		for (j=0;j<3;j++)
		printf ("%d ", A[i][j]);	
	}




return 0;
}
	
