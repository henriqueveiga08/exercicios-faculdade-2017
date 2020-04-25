#include<stdio.h>
#include<stdlib.h>

int main (){
	
	float A [10][10], b[10], x[10], soma;
	int i, j, n;
	
	printf ("Entre com a ordem do sistema\n");
	scanf ("%d", &n);
	printf("\nEntre com a matriz dos coeficientes\n");
	for (i=1;i<=n;i++){
		for (j=1;j<=n;j++){
			printf ("Posicao [%d][%d]\t", i, j);
			scanf ("%f", &A[i][j]);
		}
	}
	system("cls");
	printf("Coeficientes:\n");
	for (i=1;i<=n;i++){
		printf ("\n");
		for (j=1;j<=n;j++){
			printf ("%.2f ", A[i][j]);
		}
	}
	printf ("\n\nEntre com o vetor dos termos independentes\n");
	for (i=1;i<=n;i++){
		printf ("Posicao [%d]\t", i);
		scanf ("%f", &b[i]);
	}
	printf("\nTermos independentes\n");
	for (j=1;j<=n;j++){
		printf ("\n%.2f ", b[j]);
	}
	for (i=n;i>=1;i--){
		soma = 0;
		for (j=(i+1);j<=n;j++)
			soma = soma + A[i][j] * x[j];
		x[i] = (b[i]-soma)/A[i][i];
	}
	
	printf ("\n\nA solucao do sistema eh\n");
	for (i=1;i<=n;i++)
		printf ("%.4f\n", x[i]);
	
	return 0;
}



