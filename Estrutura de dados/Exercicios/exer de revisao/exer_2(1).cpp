/*2. Escreva a fun��o somaDigitos que recebe um n�mero inteiro n e retorna a soma dos seus d�gitos.
Por exemplo, a soma dos d�gitos de 365 � 14 e de 3651 � 15*/
#include<stdio.h>
#include<stdlib.h>

int somaDigitos (int n);

int main (){
	int n=356, q=0, num;
	printf("Digite um numero inteiro:\n");
	scanf("%d", &n);
	fflush(stdin);
	
	if (n<0)
		n = n * -1;
	
	printf ("\nA soma dos digitos eh => %d", somaDigitos (n));
	
	return 0;
}

int somaDigitos (int n){
	int q=0, b;
	
		q = q + (n%10);
		b = (n - q)/10;
		if (b <= 0)
			return q;
		else		
			return q + somaDigitos(b);
	
}


