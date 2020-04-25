#include<stdio.h>
#include<stdlib.h>

int topo=0;

int push (int elem, int *pilha);//empilha
int pop ();//desempilha
int mostra ();//printa
int main(){
	int n=0, op=0, *pilha;
	printf("topo=%d\n", topo);
	printf("Informe o numero para empilhar\n");
	scanf ("%d", &n);
	fflush(stdin);
	push (n, pilha);
	printf("\n\nDeseja empilhar outro numero ? (1 para sim e 0 e para nao)\n");
	scanf ("%d", &op);
	fflush(stdin);
	if (op == 1)
		main();
	else
	return 0;
}

int push (int elem, int *pilha){
	static int *vetor, foi=0;
	int i, aux;
	if (foi != 0){
		realloc (pilha, topo);
		realloc (vetor, topo);
	}else {
		pilha = (int *) malloc(topo*sizeof(int));
		vetor = (int *) malloc(topo*sizeof(int));		
	}

	pilha [topo] = elem;
	
	for (i=0; i<=topo; i++){
		vetor [i] = pilha [i];
	}
	
	for (i=0; i<=topo; i++){
		printf ("\nPilha[%d] -> %d\tVetor[%d] -> %d", i, pilha[i], i, vetor [i]);
	}

	topo++;
	return 0;	
}

int pop (){
	
	
	return 0;
}

int mostra (){
	
	
	
	return 0;
}
