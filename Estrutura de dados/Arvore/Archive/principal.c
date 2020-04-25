/*
 * principal.c
 *
 *  Created on: 29 de dez de 2015
 *      Author: avilapm
 */

#include "arvore.h"

int main(void){

	int escolha;
	int valor;
	node  *node ;

	do {
		printf("\n[1] Criar Arvore");
		printf("\n[2] Inserir número");
		printf("\n[3] Remover número");
		printf("\n[4] Imprimir pre-ordem");
		printf("\n[5] Imprimir em-ordem");
		printf("\n[6] Imprimir pós-ordem");
		printf("\n[0] Sair\n");

		scanf("%d",&escolha);

		switch(escolha){
		case 1:
			makeTree(&node);
			printf("\nArvore criada!");

			break;

		case 2:

			printf("Digite o valor a inserir: ");
			scanf("%d",&valor);
			insertNode(&node,valor);
			break;


		case 3:
			printf("Digite o valor para remover: ");
			scanf("%d",&valor);
			removeNode(&node,valor);
			break;

		case 4:
			preOrder(node);
			break;

		case 5:
			inOrder(node);
			break;

		case 6:
			postOrder(node);
			break;


		}


	} while(escolha != 0);

	destroyTree(node);

	return EXIT_SUCCESS;
}
