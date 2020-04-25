#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){
	
	float A [10][10], b[10], x[10], soma, m, maior, aux;
	int i, j, n, k, l, y[10], c;
	
	printf ("Entre com a ordem do sistema\n");
	scanf ("%d", &n);
	printf("\nEntre com a matriz dos coeficientes\n");
	for (i=1;i<=n;i++){
		for (j=1;j<=n;j++){
			printf ("Posicao [%d][%d]\t", i, j);
			scanf ("%f", &A[i][j]);
			fflush(stdin);
		}
	}

	printf ("\n\nEntre com o vetor dos termos independentes\n");
	for (i=1;i<=n;i++){
		printf ("Posicao [%d]\t", i);
		scanf ("%f", &b[i]);
		fflush(stdin);
	}
	
	system("cls");
	printf("Coeficientes:\n");
	for (i=1;i<=n;i++){
		printf ("\n");
		for (j=1;j<=n;j++){
			printf ("%.2f ", A[i][j]);
		}
	}
	
	printf("\n\nTermos independentes\n");
	for (j=1;j<=n;j++){
		printf ("\n%.2f ", b[j]);
	}
	
	for (i=1;i<=n;i++){
		y[i]=i;
	}
	
	for (k=1;k<=(n-1);k++){
		maior = A[k][k];
		l=k;
		c=k;
		for (i=k;i<=n;i++)
			for(j=k;j<=n;j++)
				if (abs(A[i][k])>abs(maior) || maior == 0){
					maior = A[i][k];
					l=i;
					c=j;
				}
		//troca linha
		if(l!=k){
			for (j=k;j<=n;j++){
				aux = A[k][j];
				A[k][j]=A[l][j];
				A[l][j]=aux;
			}
			aux = b[k];
			b[k]=b[l];
			b[l]=aux;
		}
		//trocar coluna
		if(c!=k){
			for (j=k;j<=n;j++){
				aux = A[k][j];
				A[k][j]=A[l][j];
				A[l][j]=aux;

			}
			aux = y[c];
			y[c]= y[k];
			y[k]=aux;
		}	
		for(i=(k+1);i<=n;i++){
			m = - A[i][k]/A[k][k];
			A [i][k] = 0;
			for (j=(k+1);j<=n;j++)
				A[i][j]=A[i][j]+m*A[k][j];
			b[i] = b[i] + m * b [k];
		}
	}
	
	printf("\n\nCoeficientes triangulares:\n");
	for (i=1;i<=n;i++){
		printf ("\n");
		for (j=1;j<=n;j++){
			printf ("%.2f ", A[i][j]);
		}
	}
	
	printf("\n\nTermos independentes\n");
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
		printf ("%.2f\n", x[(y[i])]);

	return 0;
}



