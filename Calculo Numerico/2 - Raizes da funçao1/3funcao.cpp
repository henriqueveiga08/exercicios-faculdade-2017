#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float f(double x); 
float f1(double x);

int main(){
	int i, interacoes;
	double x0, erro, x1, x2, erro_p;
	
	
	printf ("\tEntre com valores para encontrar o Zero da funcao\nInforme X0: \t");
	scanf ("%lf", &x0);
	fflush(stdin);
	printf ("Informe as interacoes: \t");
	scanf ("%d", &interacoes);
	fflush(stdin);
	printf ("Informe o erro \t");
	scanf ("%lf", &erro);
	fflush(stdin);
	
	do {
		
		x1 = x0 - (f(x0)/f1(x0));
		
		//printf ("\nx1 = %f\n", x1);
		
		if(f(x1)<erro){
			printf("\nZero da raiz e %lf\n", x1);
			exit (1);
		}
		
		erro_p = abs(x1 - x0);
		
		//printf ("erro_p =%lf\n", erro_p);
		/*
		if (erro_p<erro){
			printf ("\nX1 = %.2f\nInteracoes = %d", x1, interacoes);
			exit (2);
		}
		*/
		
		x0 = x1;
		
		interacoes--;
		
	}while (interacoes != 0);

	printf ("\nQuando X = %f,  funcao = %f", x1, f(x1) );
	
	return 0;
}


float f(double x){
	
	return (2*x-5);
}

float f1(double x){
	
	return 2;
}
