#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float f(double x); 


int main(){
	int interacoes;
	double x0, erro, x1, x2, erro_p;
	
	
	printf ("\tEntre com valores para encontrar o Zero da funcao\nInforme X0: \t");
	scanf ("%lf", &x0);
	fflush(stdin);
	printf ("Informe X1: \t");
	scanf ("%lf", &x1);
	fflush(stdin);
	printf ("Informe as interacoes: \t");
	scanf ("%d", &interacoes);
	fflush(stdin);
	printf ("Informe o erro \t");
	scanf ("%lf", &erro);
	fflush(stdin);
	
	do {
		
		x2 = ((x0 * f(x1))-(x1*f(x0)))/(f(x1)-f(x0));
		
		printf ("\nx2 = %lf\n", x2);
		
		erro_p = x2 - x1;
		printf ("erro_p = %lf\n", erro_p);
		erro_p = abs(erro_p);
		printf ("erro_p = %lf\n", erro_p);
		if(f(x2)<erro){
			printf("\nZero da raiz e %lf", x2);
			exit (1);
		}
		
		printf ("erro_p = %lf\n", erro_p);
		
		if (erro_p<erro){
			printf ("\nX1 = %.2f\nInteracoes = %d", x1, interacoes);
			exit (2);
		}
		
		
		x0 = x1;
		x1 = x2;
		
		interacoes--;
		
	}while (interacoes != 0);

	printf ("\nQuando X = %f,  funcao = %f", x1, f(x1) );
	
	return 0;
}


float f(double x){
	
	return (exp(x) - sin(x) - 2);
}


