/*3. Escreva a fun��o divideComSubtracao(int n1, int n2) que recebe dois n�meros e devolve o
inteiro que representa o inteiro da divis�o n1 por n2. A fun��o deve utilizar subtra��o para realizar a
divis�o. Por exemplo: 12/5 = 2.*/
#include<stdio.h>
#include<stdlib.h>

int main (){
	int n1=12, n2=5, resultado=0, a, b=0, c=0;
	printf("Digite o dividendo\n");
	scanf("%d", &n1);
	fflush(stdin);
	printf("Digite o divisor\n");
	scanf("%d", &n2);
	fflush(stdin);	
	//testando se � positivo
	if (n1<0){
		n1 = n1 * -1;
		b=1;
	}	
	if (n2<0){
		n2 = n2 * -1;
		c=1;
	}
	//fazendo a opera�ao
	if (n1<n2)
		resultado = 0;
	else{
		do{
			a = n1 - n2;
			n1 = a;
			resultado ++;
		}while (n1>=n2);
	}
	//dando o resultado de acordo com os sinais (- e +)
	if (b==1 && c==1){
		printf ("O resultado da divisao eh => %d", resultado);
		return 0;
	}else{
		resultado = resultado * -1;
		printf ("O resultado da divisao eh => %d", resultado);
		return 0;
	}	
}
