#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (){
	char nome[40], nomecopia[40];
	int contador;
	do{
		//strcpy
		printf ("Digite seu nome ou -1 para sair:\t");
		gets (nome);
		contador = atoi (nome);
		if (contador == -1)
			break;
		system ("cls");
		strcpy (nomecopia, nome);
		printf ("Seu nome =>\t");
		puts (nomecopia);
		
		//strncpy
		contador = strlen (nome);
		printf ("\nSeu nome tem %d letras", contador);
		contador = contador/2;
		strncpy (nomecopia, nome, contador);
		nomecopia[contador]='\0';
		printf ("\nSeu nome pela metade =>\t");
		puts (nomecopia);
		
		//memset
		memset (nomecopia, 'x', sizeof(nomecopia));
		//memset(sString_3, 0, sizeof(sString_3));
		puts (nomecopia);
	}while (contador != -1);

	return 0;
}
