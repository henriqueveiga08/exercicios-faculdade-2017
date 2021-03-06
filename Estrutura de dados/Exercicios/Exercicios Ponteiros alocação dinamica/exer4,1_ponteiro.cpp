#include <stdio.h>
#include <stdlib.h>

int **alocarMatriz(int linhas, int colunas);


int main(){

    int nLinhas, nColunas, **matriz, i, j, linhaOrigem, linhaDestino, aux;

    printf("Digite o numero de linhas e colunas da matriz -> ");
    scanf("%d %d", &nLinhas, &nColunas);
    fflush(stdin);

    matriz = alocarMatriz(nLinhas, nColunas);

    for(i = 0; i < nLinhas; i++){
        for(j = 0; j < nColunas; j++){
            printf("matriz[%d][%d] -> ", i, j);
            scanf("%d", &matriz[i][j]);
            fflush(stdin);
        }
    }

    printf("\nInforme uma linha de origem e uma linha de destino -> ");
    scanf("%d %d", &linhaOrigem, &linhaDestino);
    fflush(stdin);

    for(j = 0; j < nColunas; j++){
        aux = matriz[linhaDestino][j];
        matriz[linhaDestino][j] = matriz[linhaOrigem][j];
        matriz[linhaOrigem][j] = aux;
    }

    printf("Nova matriz:\n");
    for(i = 0; i < nLinhas; i++){
        for(j = 0; j < nColunas; j++){
            printf("%d\t", matriz[i][j]);
        }
    printf("\n");
    }

    return 0;
}

int **alocarMatriz(int linhas, int colunas){
    int **matriz;
    int i;

    //alocar linhas
    matriz = (int**)malloc(linhas * sizeof(int*));
    if(matriz == NULL) 
		return(NULL);

    //alocar colunas
    for(i = 0; i < linhas; i++){
        matriz[i] = (int*)malloc(colunas * sizeof(int));
        if(matriz[i] == NULL)
			return(NULL);
    }

    return matriz;
}
