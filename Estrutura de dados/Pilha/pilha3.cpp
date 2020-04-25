#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int num;
	struct Node *prox;
}Pilha;

int menu(Pilha *pilha);
void inserir (Pilha *pilha);
void excluir (Pilha *pilha);
void esvaziar (Pilha *pilha);
void visualizar (Pilha *pilha);
//void sair (Pilha *pilha);

int main(){
	
	Pilha *pilha = (Pilha*) malloc(sizeof(Pilha));
	
	if (pilha == NULL){
		printf("\n\t***Erro***\n");
		return 0;
	}
	
	// inicia pilha
	pilha->prox = NULL;
	
	menu(pilha);
	
	return 0;	
}

int menu(Pilha *pilha){
	
	int op;
	
	printf("\tPILHA\n\nEscolha a opcao:\n1-Inserir\n2-Excluir\n3-Esvasiar\n4-Visualizar\n5-Sair\n");
	scanf ("%d", &op);
	fflush(stdin);
	
	switch (op){
		case 1:
			inserir (pilha);
		break;
		case 2:
			excluir (pilha);
		break;
		case 3:
			esvaziar (pilha);
		break;
		case 4:
			visualizar (pilha);
		break;
		case 5:
			exit (1);
		break;
		default:
			system("cls");
			printf ("Opcao invalida !!\n\n");
			menu (pilha);
		break;		
	}
	return 0;
}

void inserir (Pilha *pilha){
	system("cls");
	
	Pilha *novo = (Pilha*) malloc (sizeof(Pilha));
	
	if(novo == NULL){
		printf("Sem memoria disponivel!\n");
		exit(1);
	}else{
		printf("Informe o numero para empilhar\n");
		scanf ("%d", &novo->num);
		fflush(stdin);
	}
	
	novo->prox = NULL;
	
	if (pilha->prox == NULL){
		pilha->prox = novo;
	}else{
		Pilha *aux = pilha->prox;
		while(aux->prox != NULL)
			aux = aux->prox;
		aux->prox = novo;
	}
	system("cls");
	printf ("Numero  salvo = %d\n\n", novo->num);
	menu (pilha);
	
}

void excluir (Pilha *pilha){
	system("cls");
	if(pilha->prox == NULL)
		printf("Pilha vazia\n\n");
	else {
		Pilha *ultimo = pilha->prox, *penultimo = pilha;
		while(ultimo->prox != NULL){
			penultimo = ultimo;
			ultimo = ultimo->prox;
		}
		penultimo->prox = NULL;
		printf("Retirado: %d\n\n", ultimo->num);
	}
	menu (pilha);
}

void esvaziar (Pilha *pilha){
	system("cls");
	
	if(pilha->prox != NULL){
		Pilha *proxNode, *atual = pilha->prox; 
		while(atual != NULL){
			proxNode = atual->prox;
			free(atual);
			atual = proxNode;
		}
		printf ("Pilha esvaziada\n\n");
	}else{
		printf ("Pilha ja esta vazia\n\n");
	}
	
	main();
	
}

void visualizar (Pilha *pilha){
	system("cls");
	int i=0;
	if(pilha->prox == NULL){
		printf("Pilha Vazia\n");
		menu (pilha);	
	}else{
		Pilha *tmp = pilha->prox;
		printf("\tPILHA:\n");
		while( tmp != NULL){
			printf("Pilha [%d] -> %d\n", i, tmp->num);
			tmp = tmp->prox;
			i++;
		}
		printf("\n");
		menu (pilha);
	}
	menu (pilha);
}
/*
void sair (Pilha *pilha){
	
	if(pilha->prox != NULL){
		Pilha *proxNode,  *atual;
		atual = pilha->prox;
	  	while(atual != NULL){
		   proxNode = atual->prox;
		   free(atual);
		   atual = proxNode;
		}
	}
	
}
*/


