#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){
	int n, i, tam, j, k, maior, l;
	float *vetorx, *vetorfx, **A, aux, m, soma, *x, fx;
	
	printf ("Entre com a quantidade de x (n):\t");
	scanf ("%d", &n);
	fflush(stdin);
	tam = n;
	tam++;
	vetorx = (float*) malloc (sizeof(tam));
	vetorfx = (float*) malloc (sizeof(tam));
	x = (float*) malloc (sizeof(tam));
	
	printf ("Informe o fx que deseja encontrar:\t");
	scanf ("%f", &fx);
	fflush(stdin);
	
	for (i=1;i<=n;i++){
		printf ("Entre com x\t");
		scanf ("%f", &vetorx[i]);
		fflush(stdin);
	}
	system("cls");
	for (i=1;i<=n;i++){
		printf ("Vetorx[%d] -> %2.f\n", i , vetorx[i]);
	}
	printf ("\n\tEntre com os valores de f(x):\n");
	for (i=1;i<=n;i++){
		printf ("Para f(%.2f) = ", vetorx[i]);
		scanf ("%f", &vetorfx[i]);
	}
	for (i=1;i<=n;i++){
		printf ("\nVetorfx[%d] -> %2.f", i , vetorfx[i]);
	}
	
	A = (float**) malloc (tam * sizeof(float));
	for (i = 0; i < tam; ++i)
      A[i] = (float*) malloc (tam * sizeof (float));
	
	if (A==NULL)
		printf("Erro");
	
	
	for (i=1;i<=n;i++){
		tam = n-1;
		for (j=1;j<=n;j++){
			A[i][j] = (pow(vetorx[i], tam));
			tam = tam -1;
		}
	}
	printf("\n\tMatriz:\n");
	for (i=1;i<=n;i++){
		for (j=1;j<=n;j++){
			printf ("Matriz [%d][%d] -> %2.f\n", i, j, A[i][j]);
		}
	}
	
	
	for (k=1;k<=(n-1);k++){
		maior = A[k][k];
		l=k;
		for(i=(k+1);i<=n;i++){
			if (abs(A[i][k])>abs(maior) || maior == 0){
				maior = A[i][k];
				l=i;
			}
		}
		if(l!=k){
			for (j=k;j<=n;j++){
				aux = A[k][j];
				A[k][j]=A[l][j];
				A[l][j]=aux;
			}
			aux = vetorfx[k];
			vetorfx[k]=vetorfx[l];
			vetorfx[l]=aux;
		}
			
		for(i=(k+1);i<=n;i++){
			m = - A[i][k]/A[k][k];
			A [i][k] = 0;
			for (j=(k+1);j<=n;j++)
				A[i][j]=A[i][j]+m*A[k][j];
			vetorfx[i] = vetorfx[i] + m * vetorfx[k];
		}
	}

	for (i=n;i>=1;i--){
		soma = 0;
		for (j=(i+1);j<=n;j++)
			soma = soma + A[i][j] * x[j];
		x[i] = (vetorfx[i]-soma)/A[i][i];
	}
	
	printf ("\n\nA solucao da matriz eh\n");
	for (i=1;i<=n;i++)
		printf ("%.2f\n", x[i]);
		
	soma = 0;
	k=n;
	tam = n-1;
	printf ("\ntam = %d\n", tam);
	for (i=1;i<=k;i++){
		soma = x[i] * (pow(fx, tam));
		printf ("\n1soma = %f\n", soma);
		soma = soma + soma;
		printf ("\n2soma = %f\n", soma);
		tam = tam -1;
	}
	
	printf ("\n\nf(%.2f) =\t%.2f", fx, soma);
	
	/*	for (i=1;i<=n;i++){
		tam = n-1;
		for (j=1;j<=n;j++){
			A[i][j] = (pow(vetorx[i], tam));
			
		}
	}*/
	
	return 0;
}






