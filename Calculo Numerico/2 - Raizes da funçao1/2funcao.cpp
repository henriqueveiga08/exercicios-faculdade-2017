#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float f(float x); 

int main(){
	int i, n;
	float a, b, c, contador=1;
	
	do{
		printf ("\tEntre com valores para encontrar o Zero da funcao\nInforme A: \t", a);
		scanf ("%f", &a);
		fflush(stdin);
		printf ("Informe B: \t", b);
		scanf ("%f", &b);
		fflush(stdin);	
		printf ("\n");
		if (f(a) * f(b) > 0){
			system("cls");
			printf ("Valor insuficiente!\n");
		}	
	}while (f(a) * f(b) > 0);
	
	printf("\nInforme o numero de interacoes\t");
	scanf ("%d", &n);
	fflush(stdin);
	printf("\n");
	
	for (i=0;i<n;i++){
		if (f(a) == 0){
			printf ("\nA raiz da funcao eh %2.f\n", a);
			return 0;
		}else if (f(b) == 0){
				printf ("\nA raiz da funcao eh %2.f\n", b);
				return 0;
		}else{
			c = ((a * f(b)) - (b * f(a)))/(f(b) - f(a));
			contador++;
			if (f(c) == 0){
				printf ("\nA raiz da funcao eh %2.f\n", c);
				return 0;
			}else{
				if (f(c) * f(a) < 0){
					b = c;
				}
				else if (f(c) * f(b) < 0){
					a = c;
				}
			} 	
		}
	}
	if (f(c) != 0){
		printf("\n\n\t****Numero de interacoes insuficiente para encontrar a raiz****\n");
		printf ("\nO Zero da funcao esta entre %.2f e %.2f", a, b);
	}
		
	printf ("\nForam feitas %d interacoes\n", contador);
		
	return 0;
}


float f(float x){
	
	return (2*x-4);
}


