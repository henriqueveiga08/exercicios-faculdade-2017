#include <stdio.h>
#include <stdlib.h>

void LerVetor (float *v, int qtd);
float ProcuraPeloMaior (float *v, int qtd);


int main(){
	int qtd, i;
    float *v;
    printf("Informe o tamanho do vetor\n");
	scanf("%d", &qtd);
	v = (float *) malloc (sizeof(float)*qtd);
	LerVetor(v, qtd);
	printf("O maior valor que vc digitou eh %.2f", ProcuraPeloMaior(v, qtd));
return 0;
}

void LerVetor (float *v, int qtd){
	int i;
	printf("Digite %d numeros: \n", qtd);
	for (i = 0; i < qtd; i++){
		printf("vetor[%d]", i);
		scanf("%f", &v[i]);
	}	
}

float ProcuraPeloMaior (float *v, int qtd){
	int i;
	float maior = *v;
	for (i = 0; i < qtd; i++){
		if (v[i] > maior){
        	maior = v[i];
    	}
	}
	return maior;
}
