#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* subString (char* entrada, int inicio, int fim, char* dest)
{
	int tam = fim - inicio;
	int tamanhoEntrada = strlen(entrada);
	
	if (fim > tamanhoEntrada){
		puts("ERRO");
		return NULL;
	}
		
	strncpy (dest, entrada + inicio, tam);
	strcat(dest,"\0");
	return dest;
}

main () {
	
	char dest[100];
	char palavra[] = "123456789\0";
	
	if (subString (palavra, 2, 7, dest)){
		printf ("%d - %s\n", strlen(dest), dest);
	}

}
