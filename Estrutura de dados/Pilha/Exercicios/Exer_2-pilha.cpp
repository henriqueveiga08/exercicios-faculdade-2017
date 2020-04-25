#include<stdio.h>
#include<stdlib.h>

int topo=0;

void menu (int *pilha);
void entraCarro (int *pilha);
void saiCarro (int *pilha);
void carrosEstacionados (int *pilha);
void inicializa (int *pilha);
int main (){
	
	int *pilha = (int*) malloc (sizeof(int));
	
	inicializa (pilha);
	
	menu (pilha);
	
	return 0;
}

void menu (int *pilha){
	
	int op;
	
	printf("\tESTACIONAMENTO DE BASHEMIN\n\nEscolha uma das opcoes:\n1-Entrada de carro\n2-Saida de carro\n3-Carros estacionados\n4-Sair\n");
	scanf ("%d", &op);
	fflush(stdin);
	
	switch (op){
		case 1:
			entraCarro (pilha);
		break;
		case 2:
			saiCarro (pilha);
		break;
		case 3:
			carrosEstacionados (pilha);
		break;
		case 4:
			exit (1);
		break;
		default:
			system("cls");
			printf ("Opcao invalida !!\n\n");
			menu (pilha);
		break;		
	}
	
}

void entraCarro (int *pilha){
	
	system("cls");
	
	if (topo<10){
		printf ("Informe o numero da placa do veiculo:\t");
		scanf ("%d", &pilha[topo]);
		fflush(stdin);
		system("cls");
		printf ("Veiculo de placa %d, estacionar na posicao Pilha [%d].\n\n", pilha[topo], topo);
		topo++;
		menu(pilha);
	}else{
		printf ("Estacionamento sem vagas !!\n");
		menu(pilha);
	}

	
}

void saiCarro (int *pilha){
	int pilha_aux [10], placa, i, posicao;
	system("cls");
	printf ("Infome a placa do carro que saira do estacionamento:\t");
	scanf ("%d", &placa);
	fflush(stdin);
	
	for (i=0;i<topo;i++){
		if (pilha[i] == placa){
			posicao = i;
			break;
		}
	}
	
	printf ("\nCarro de placa %d encontrado na posicao Pilha [%d]\n", placa, i);
	
	for (i=0;i<topo;i++){
		if (pilha [i] == 0){
			pilha [i] == pilha [i+1];
		}
	}
	
	topo--;
	menu (pilha);
		
}

void carrosEstacionados (int *pilha){
	
	int i;
	system("cls");
	if (pilha [0] == NULL){
		printf ("Estacionamento vazio!!");
		menu (pilha);
	}
	
	printf ("\tCarros estacionados:\n");
	for (i=0;i<topo;i++){
		printf ("Pilha [%d] -> %d\n", i, pilha[i]);
	}
	
	menu (pilha);
	
}

void inicializa (int *pilha){
	
	for (int i;i<10;i++){
		pilha [i] == 0;
	}
	
}




