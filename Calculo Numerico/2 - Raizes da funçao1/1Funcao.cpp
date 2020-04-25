#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float f(float x); 

int main(){
	int i, n;
	float a, b, media=1, contador=1;
	
	do{
		printf ("\tEntre com valores para encontrar o Zero da funcao\nInforme A: \t");
		scanf ("%f", &a);
		fflush(stdin);
		printf ("Informe B: \t");
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
			//printf ("\nO Zero da funcao esta entre %.2f e %.2f", a, b);
			media = (a+b)/2;
			contador ++;
			if (f(media) == 0){
				printf ("\nA raiz da funcao eh %2.f\n", media);
				return 0;
			}else{
				if (f(media) * f(a) < 0){
					b = media;
				}
				else if (f(media) * f(b) < 0){
					a = media;
				}
			} 	
		}
	}
	if (f(media) != 0){
		printf("\n\n\t****Numero de interacoes insuficiente para encontrar a raiz****\n");
		printf ("\nO Zero da funcao esta entre %.2f e %.2f", a, b);
	}
		
		
	return 0;
}


float f(float x){
	
	return (x-4);
}


