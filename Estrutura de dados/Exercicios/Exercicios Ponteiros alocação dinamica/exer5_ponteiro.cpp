#include<stdio.h>
#include<stdlib.h>

float *inverte_vetor(float *v, int tam);
void imprime_vetor(float *v, int tam);
void LerVetor(float *v, int tam);


int main(){
	
	int tm;
	float *v;	
	printf("digite o tamanho do vetor\n");
	scanf("%d", &tm);
	v = (float *) malloc (sizeof(float)*tm);
    LerVetor(v, tm);
    inverte_vetor(v, tm);
    imprime_vetor(v, tm);
	return 0;
}

float *inverte_vetor(float *v, int tam){

    int i, j;
    float aux;

    for(i = 0, j = (tam - 1); i < j; i++, j--){
        aux = *(v + i);
        *(v + i) = *(v + j);
        *(v + j) = aux;
    }

    return v;
}

void imprime_vetor(float *v, int tam){

    int i;

    for(i = 0; i < tam; i++){
        printf("vetor[%d] %.2f\n", i, v[i]);
    }
}

void LerVetor(float *v, int tam){

    int i;

    for(i = 0; i < tam; i++){
    	printf("vetor[%d] -> ", i);
        scanf("%f", v + i);
        fflush(stdin);
    }
}
