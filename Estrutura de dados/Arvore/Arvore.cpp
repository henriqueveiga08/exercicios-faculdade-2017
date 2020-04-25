/*
ARVORE
*/
#include<stdio.h>
#include<stdlib.h>

typedef struct no{
	float valor;
	struct no *esquerda;
	struct no *direita;
}arvore;

void fazerArvore (arvore **no);
void inserirArvore (arvore **raiz, float elemento);
void menu (arvore **raiz);
void imprimeArvore (arvore **raiz);
void removerArvore (arvore **raiz);
void preOrder ( arvore * raiz );

int main (){
	
	arvore *no;

	fazerArvore (&no);
	
	menu (&no);
	
	return 0;
}

void fazerArvore (arvore **raiz){
	
	*raiz = NULL;
	
	
}

void menu (arvore **raiz){
	
	float elemento;
	int op;
	
	printf("\tArvore\n\nEscolha a opcao:\n1-Inserir elemento\n2-Remove\n3-Visualizar\n4-Sair\n");
	scanf ("%d", &op);
	fflush(stdin);
	
	switch (op){
		case 1:
			system("cls");
			printf ("\tInserir\nInforme o Elemento:\t");
			scanf("%f", &elemento);
			fflush(stdin);
			inserirArvore (raiz, elemento);
		break;
		case 2:
			removerArvore (raiz);
		break;
		case 3:
			imprimeArvore (raiz);
		break;
		case 4:
			printf ("\nPrecione Entrer para sair\n");
			exit (0);
		break;
		default:
			system("cls");
			printf ("Opcao invalida !!\n\n");
			menu (raiz);
		break;		
	}
}

void inserirArvore (arvore **raiz, float elemento){
	
	if (*raiz == NULL){
		*raiz = (arvore*) malloc(sizeof(arvore));
		(*raiz)->esquerda = NULL;
		(*raiz)->direita = NULL;
		(*raiz)->valor = elemento;
	}else{
		if (elemento < (*raiz)->valor)
			inserirArvore (&(*raiz)->esquerda, elemento);
		if (elemento > (*raiz)->valor)
			inserirArvore (&(*raiz)->direita, elemento);
	}
	menu (raiz);
}

void removerArvore (arvore **raiz){
	float num;
	printf ("Informe o numero que deseja remover:\t");
	scanf ("%f", &num);
	
}

void imprimeArvore (arvore **raiz){
	
	
	
}

void preOrder ( arvore **raiz ){
	if (! raiz )
		return ;
	if(raiz->valor){
		printf ("%f ", raiz->valor );
	}
	preOrder (raiz->esquerda);
	preOrder (raiz->direita);
}



