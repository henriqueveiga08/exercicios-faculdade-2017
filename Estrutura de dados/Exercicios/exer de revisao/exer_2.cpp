/*2. Escreva a função somaDigitos que recebe um número inteiro n e retorna a soma dos seus dígitos.
Por exemplo, a soma dos dígitos de 365 é 14 e de 3651 é 15*/
#include<stdio.h>
#include<stdlib.h>

int main (){
	int n, q=0, num;
	printf("Digite um numero inteiro:\n");
	scanf("%d", &n);
	fflush(stdin);
	if (n<0)
		n = n * -1;
	
	do{
		q = q + (n%10);
		n = n/10;
	}while (n>1);
	
	
	printf ("\nA soma dos digitos eh => %d", q);
	
	return 0;
}
