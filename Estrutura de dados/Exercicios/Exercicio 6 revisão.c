#include <stdio.h>

int **matriz=NULL;
int linha,coluna;
int menu();

void criamatriz();
void excluimatriz();
void imprime();
void zerarlinha();
void zerarcoluna();
void imprimelinha();
void imprimecoluna();
void trocalinha();
void trocacoluna();

int main()
{
	menu();
}



int menu()
{
	int op;
	do
	{
		printf("\n1-Criar uma matriz de acordo com as linhas e colunas informadas pelo usuário:");
		printf("\n2- Excluir uma matriz:");
		printf("\n3- Informar todos os valores da matriz:");
		printf("\n4- Informar determinada linha e então zerar os valores da linha:");
		printf("\n5- Informar determinada coluna e então zerar os valores da coluna;");
		printf("\n6- Informar os valores de determinada linha:");
		printf("\n7- Informar os valores de determinada coluna:");
		printf("\n8- Trocar 2 linhas de posição:");
		printf("\n9- Trocar 2 colunas de posição:");
		printf("\n10- Sair");
		printf("\nDigite uma opcao:");
		scanf("%d", &op);
		
		
		switch 	(op)
	{
		case 1:
			criamatriz();
		break;
		
		case 2:
			excluimatriz();
		break;
		
		case 3:
			imprime();
		break;
		
		case 4:
			zerarlinha();
		break;
		
		case 5:
			zerarcoluna();
		break;
		
		case 6:
			imprimelinha();
		break;
		
		case 7:
			imprimecoluna();
		break;
		
		case 8:
			trocalinha();
		break;
		case 9:
			trocacoluna();
		break;
		case 10:
			printf("Voce saiu!!!");
		break;
		default:
		printf("O numero digitado e invalido, tente novamente!\n");
		break;
	
	}
	
	}while (op!=10);
	
	return menu;
}


void criamatriz()
{
	int i,j;

	printf("Digite a quantidade de linhas:");
	scanf("%d", &linha);
	printf("Digite a quantidade de colunas:");
	scanf("%d", &coluna);	
	matriz= malloc(sizeof (int*) *linha);
	
	for(i=0; i<linha; i++)
	{
		for (j=0; j<coluna;j++)
		{
			matriz [i]= malloc( sizeof (int) *coluna);
		}
	}
	printf("A matriz foi criada com sucesso!!!");
	
	for (i=0; i<linha; i++)
	{
		for(j=0; j<coluna; j++)
		{
			printf("\nDigite os valores da matriz criada anteriormente %i %i:", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
}

void excluimatriz()
{
	int i;
	
	if (matriz==NULL)
	{
	printf("A matriz ainda nao existe!");
	}
	else
	{
		for( i=0 ; i<linha; i++)
	{
		free (matriz[i]);
	}
		free (matriz);
	printf("A matriz foi excluida com sucesso!!");
	}
}

void imprime()
{
	int i, j;
	
	if (matriz==NULL)
	{
		printf("A matriz esta vazia");
	}
	else
	{
	
		for (i=0; i<linha; i++)
		{
			for(j=0; j<coluna; j++)
			{
				printf("\nO valor da matriz em %i %i = %d", i, j, matriz[i][j]);
			}	
		}
	}
}

void zerarlinha()
{
	int i,j, linhazerar;
	
	if (matriz==NULL)
	{
		printf("A matriz esta vazia");
	}
	else
	{
		printf("Escolha uma linha para ser zerada:");
		scanf("%d", &linhazerar);
	
		for (j=0; j<coluna; j++)
		{
			matriz[linhazerar][j]=0;
		}
	
		for (i=0; i<linha; i++)
		{
			for(j=0; j<coluna; j++)
			{
				printf("\nO valor da matriz com linhas zeradas %i %i = %d", i, j, matriz[i][j]);
			}
		}
	}
	
}

void zerarcoluna()
{
int i,j, colunazerar;
	
	if (matriz==NULL)
	{
		printf("A matriz esta vazia");
	}
	else
	{
		printf("Escolha uma coluna para ser zerada:");
		scanf("%d", &colunazerar);
	
		for (i=0; i < linha; i++)
		{
			matriz[i][colunazerar]=0;
		}
	
		for (i=0; i<linha; i++)
		{
			for(j=0; j<coluna; j++)
			{
				printf("\nO valor da matriz com colunas zeradas %i %i = %d", i, j, matriz[i][j]);
			}
		}
	}
}

void imprimelinha()
{
	int linhaexibe,j;
	
	if (matriz==NULL)
	{
		printf("A matriz esta vazia");
	}
	else
	{
		printf("Informe a linha a ser exibida:");
		scanf("%d", &linhaexibe);
		
		printf("Os valores da linha sao:");
		for (j=0;j<coluna;j++)
			{
				printf(" %d", matriz [linhaexibe][j] );
			}
	}
	
	
}

void imprimecoluna()
{

int colunaexibe,i;
	
	if (matriz==NULL)
	{
		printf("A matriz esta vazia");
	}
	else
	{
		printf("Informe a coluna a ser exibida:");
		scanf("%d", &colunaexibe);
		
		printf("Os valores da coluna sao:");
		for (i=0;i<linha;i++)
			{
				printf(" %d", matriz [i][colunaexibe] );
			}
	}
}

void trocalinha()
{
	int origem, destino, j, aux;
	
	if (matriz==NULL)
	{
		printf("A matriz esta vazia");
	}
	else
	{
		printf("Digite a linha de origem:");
		scanf("%d", &origem);
		printf("Digite a linha de destino:");
		scanf("%d", &destino);
	
		for (j=0; j<coluna; j++)
		{
			aux = matriz [destino] [j];
			matriz [destino] [j] = matriz [origem] [j];
			matriz [origem] [j] = aux;
		}
	}
}

void trocacoluna()
{
	int origem, destino, i, aux;
	
	if (matriz==NULL)
	{
		printf("A matriz esta vazia");
	}
	else
	{
		printf("Digite a coluna de origem:");
		scanf("%d", &origem);
		printf("Digite a coluna de destino:");
		scanf("%d", &destino);
	
		for (i=0; i<linha; i++)
		{
			aux = matriz [i] [destino];
			matriz [i] [destino] = matriz [i] [origem];
			matriz [i] [origem] = aux;
		}
	}
}
