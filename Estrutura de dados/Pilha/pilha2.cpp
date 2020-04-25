#include<stdio.h>
#include<stdlib.h>

struct pilhas{
	int *pilha,
	topo=0;
}pilha;

void menu();
void push ();//empilha
void pop ();//desempilha
void mostra ();//printa
void excluir (); // free pilha

int main(){
	int n, op;

	pilha.pilha = (int *) malloc(0*sizeof(int));
	
	menu();
	
	return 0;
}

void menu(){
	
	int op;
	
	printf("\tPILHA\n\nEscolha a opcao:\n1-Inserir\n2-Excluir ultimo inserido\n3-Excluir pilha\n4-Mostrar\n5-Sair\n");
	scanf ("%d", &op);
	fflush(stdin);
	
	switch (op){
		case 1:
			push ();
		break;
		case 2:
			pop ();
		break;
		case 3:
			excluir ();
		break;
		case 4:
			mostra ();
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

void push (){
	
	int n;
	
	system("cls");
	printf("Informe o numero para empilhar\n");
	scanf ("%d", &n);
	fflush(stdin);
	
	pilha.topo ++;
	
	realloc (pilha.pilha, pilha.topo);

	pilha.pilha[pilha.topo] = n;
	
	menu();

}

void pop (){
	system("cls");
	pilha.topo --;
	menu();
}

void excluir (){
	pilha.topo = 0;
	system("cls");
	printf("Pilha Excluida!!\n");
	menu();
}

void mostra (){
	int i;
	system("cls");
	if (pilha.topo == 0)
		printf("Pilha Vazia!!\n");
	for (i=1; i<=pilha.topo; i++)
		printf ("Pilha[%d] ->  %d\n", i, pilha.pilha[i]);
	printf("\n");
	menu();
}

