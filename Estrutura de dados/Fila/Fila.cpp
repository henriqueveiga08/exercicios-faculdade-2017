#include<stdio.h>
#include<stdlib.h>
#define n 10

struct Fila {
	int vetor [n];
	int inicio=0;
	int fim=0;
}fila;

void menu();
void remover();
void inserir();
void mostrar();
void esvasiar();

int main (){

	//	printf ("fila->vetor[%d] -> %d\n\n", fila.fim-1, elem);
		
	menu();

	return 0;
}

void menu(){
	
	int op;
	
	printf("\tPILHA\n\nEscolha a opcao:\n1-Inserir\n2-Remover\n3-Esvasiar\n4-Mostrar\n5-Sair\n");
	scanf ("%d", &op);
	fflush(stdin);
	
	switch (op){
		case 1:
			inserir ();
		break;
		case 2:
			remover ();
		break;
		case 3:
			esvasiar ();
		break;
		case 4:
			mostrar ();
		break;
		case 5:
			printf ("\nPrecione Entrer para sair\n");
		break;
		default:
			system("cls");
			printf ("Opcao invalida !!\n\n");
			menu ();
		break;		
	}
}

void inserir (){
	
	int elem;
	system("cls");
	if (fila.inicio == (n-1)){
		printf ("Pilha Cheia!!");
	}else{
		printf ("Entre com um numero para a fila\n");
		scanf ("%d", &elem);
		fflush(stdin);
		fila.vetor[fila.fim] = elem;
		fila.fim++;
	}
	////fila cheia ??

	
	menu();
	
}
  3   9 7 
void remover (){
	
	int aux;
	// fila vazia ??
//	aux = fila.vetor[0];
	
	

	for (i=0;i<fila.vetor;i++){
		aux = fila.vetor[i];
		fila.vetor[i] = fila.vetor[i+1];
	}
	
	menu();	
}

void esvasiar(){
	
	fila.fim = 0;
	fila.inicio = 0;
	
	menu();	
}

void mostrar(){
	
	
	menu();	
}

/*
restriçoes para fila "redonda"
1 - if (fila == tamanho) fila = 0
  if (inicio == tam) i =0

2 - quantidade =


*/






