#include<stdio.h>
#include<stdlib.h>

struct cel {
	int valor;
	cel *pro;
};

typedef struct {
	cel *inicio;
	cel *fim;
	int tam=0;
}Fila;

void menu(Fila *fila);
void remover(Fila *fila);
void inserir(Fila *fila);
void mostrar(Fila *fila);
void esvasiar(Fila *fila);

int main (){
	
	Fila *fila;
	
	Fila.inicio = NULL;
	fila.fim = NULL;
	fila.tam = 0;
	
	
	menu(fila);
	
	return 0;
}

void menu(Fila *fila){
	
	int op;
	
	printf("\tPILHA\n\nEscolha a opcao:\n1-Inserir\n2-Remover\n3-Esvasiar\n4-Mostrar\n5-Sair\n");
	scanf ("%d", &op);
	fflush(stdin);
	
	switch (op){
		case 1:
			inserir (fila);
		break;
		case 2:
			remover (fila);
		break;
		case 3:
			esvasiar (fila);
		break;
		case 4:
			mostrar (fila);
		break;
		case 5:
			printf ("\nPrecione Entrer para sair\n");
		break;
		default:
			system("cls");
			printf ("Opcao invalida !!\n\n");
			menu (fila);
		break;	
	}
}

void inserir (Fila *fila){
	int elem;
	system("cls");

	cel *novo = (cel*) malloc (sizeof(cel));
	
	 //
	
	if (novo==NULL)
		printf ("Impossivel inserir\n");
	
	

//	if (fila.inicio == (n-1)){
//		printf ("Pilha Cheia!!");
//	}else{
		printf ("Entre com um numero para a fila\n");
		//scanf ("%d", &elem);
		//fflush(stdin);
//		fila.vetor[fila.fim] = elem;
//		fila.fim++;
//	}
//	////fila cheia ??

	
	Fila.tam++;
	printf ("tam = %d", fila->tam);
	menu(fila);
}

void remover (Fila *fila){
	system("cls");
//	int aux;
//
//	
//	
//
//	for (i=0;i<fila.vetor;i++){
//		aux = fila.vetor[i];
//		fila.vetor[i] = fila.vetor[i+1];
//	}
	
	menu(fila);	
}

void esvasiar(Fila *fila){
	system("cls");
//	fila.fim = 0;
//	fila.inicio = 0;
	
	menu(fila);	
}

void mostrar(Fila *fila){
	system("cls");
	
	menu(fila);	
}







