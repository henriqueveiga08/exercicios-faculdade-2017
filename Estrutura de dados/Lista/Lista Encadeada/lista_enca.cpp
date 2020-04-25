#include<stdio.h>
#include<stdlib.h>

typedef struct c{
	int valor;
	struct c *proximo;
	struct c *anterior;
}cel;

typedef struct{
	cel *inicio;
	cel *fim;
	int tam;
}Lista;

void iniciaLista (Lista *L);
void menu(Lista *L);
void insereInicio (Lista *L);
void insereFim (Lista *L);
int remove (Lista *L);
void imprimiLista (Lista *L);



int main (){
	
	Lista *L = (Lista*) malloc(sizeof(Lista));
	
	if (L == NULL){
		printf("Erro ao criar LISTA!!\n");
		return 0;
	}
	
	iniciaLista(L);	
	menu(L);
	
	return 0;
}

void menu(Lista *L){
	
	int op;
	
	printf("\tLista Encadeada\n\nEscolha a opcao:\n1-Inserir elemento no inicio\n2-Inserir elemento no fim\n3-Remove\n4-Visualizar\n5-Sair\n");
	scanf ("%d", &op);
	fflush(stdin);
	
	switch (op){
		case 1:
			insereInicio (L);
		break;
		case 2:
			insereFim (L);
		break;
		case 3:
			remove (L);
		break;
		case 4:
			imprimiLista (L);
		break;
		case 5:
			printf ("\nPrecione Entrer para sair\n");
			exit (0);
		break;
		default:
			system("cls");
			printf ("Opcao invalida !!\n\n");
			menu (L);
		break;		
	}
	
}

void insereInicio (Lista *L){
	system("cls");

	cel *novo = (cel*) malloc(sizeof(cel));
	
	if(novo == NULL){
		printf("Sem memoria disponivel!\n");
		exit(1);
	}else{
		printf("Informe o numero para inserir no inicio da Lista:\n");
		scanf ("%d", &novo->valor);
		fflush(stdin);
	}
	novo->anterior = NULL;
	novo->proximo = NULL;
	
	if (L->inicio == NULL){
		L->inicio = novo;
		L->fim = novo;
	}else{
		novo->proximo = L->inicio;
		L->inicio->anterior = novo;
		L->inicio = novo;
	}
	
	system("cls");
	printf ("Numero  salvo = %d\n\n", novo->valor);
	L->tam++;
	menu (L);
	
}

void insereFim (Lista *L){
	system("cls");
	cel *novo = (cel*) malloc(sizeof(cel));
	if (novo == NULL){
		printf ("\t**ERRO AO INSERIR***\n");
		exit(2);
	}else{
		printf ("Informe o numero para inserir no fim da Lista:\t");
		scanf ("%d", &novo->valor);
		fflush(stdin);
	}
	novo->anterior = NULL;
	novo->proximo = NULL;
	if (L->inicio == NULL){
		L->inicio = novo;
		L->fim = novo;
	}else{
		novo->anterior = L->fim;
		L->fim->proximo = novo;
		L->fim = novo;
	}
	
	L->tam++;
	menu (L);
}

int remove (Lista *L){
	system("cls");
	int num, qtd=0, i=0;
	cel *aux;
	cel *ant;
	if (L->inicio == NULL){
		printf ("Fila vazia\n");
		exit (3);
	}
	printf ("Informe o numero para excluir:\t");
	scanf ("%d", &num);
	fflush(stdin);
	
	aux = L->inicio;
	ant = NULL;
	
	while (aux != NULL){
		if (aux->valor == num){
			qtd++;
			L->tam--;
			if (aux == L->inicio){
				L->inicio = aux->proximo;
				free (aux);
				i++;
				aux = L->inicio;
			}else if(aux==L->fim){
				ant->proximo = NULL;
				L->fim = ant;
				free (aux);
				i++;
				aux = NULL;
			}else{
				ant->proximo = aux->proximo;
				free (aux);
				i++;
				aux = ant->proximo;
			}
		}else{
			ant = aux;
			aux = aux->proximo;
		}
	}
	
	system("cls");
	
	if (i == 0)
		printf ("O numero %d nao foi encontrado!\n", num);
	else 
		printf ("O numero %d foi excluido\n", num);
	
	menu (L);
	return 0;
}

void imprimiLista (Lista *L){
	system("cls");
	int i=0;
	if(L->inicio == NULL){
		printf("Lista Vazia\n");
		menu (L);	
	}else{
		cel *tmp = L->inicio;
		printf("\tLista:\n");
		while( tmp != NULL){
			printf("Fila [%d] -> %d\n", i, tmp->valor);
			tmp = tmp->proximo;
			i++;
		}
		printf("\n");
		menu (L);
	}
	menu (L);
	
	
}

void iniciaLista (Lista *L){
	L->inicio = NULL;
	L->fim = NULL;
	L->tam = 0;
}
