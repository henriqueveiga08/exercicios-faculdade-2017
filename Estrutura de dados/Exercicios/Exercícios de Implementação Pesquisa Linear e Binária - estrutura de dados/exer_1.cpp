/*Implemente um programa em C que crie um vetor de 15 milh�es de posi��es. 
Preencha o vetor com os valores de 0�14.999.999. Utilize o c�digo do arquivo 
time.c (moodle) e verifique o tempo necess�rio para encontrar o elemento 14.789.980 
utilizando: pesquisa linear e pesquisa bin�ria. Fa�a o mesmo procedimento e verifique
 o tempo para encontrar o elemento 0.
*/
#include<stdio.h>
#include<stdlib.h>

int main (){
	
	int vetor [150000], i;
	
	for (i=0;i<150000;i++){
		vetor [i] = i;
	}
	printf ("%d\n%d", vetor [1], vetor[149999]);
	
	
return 0;
}
