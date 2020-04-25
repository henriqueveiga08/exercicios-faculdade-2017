#include <stdio.h>
#include <stdlib.h>

void strcopy (char*d,char*o);
char inicio [20], fim [20];
int linha;


int main(){


puts ("Digite algo para ser copiado, maximo 20 caracter.");
gets (inicio);


strcopy(inicio, fim);


printf ("fim=");
puts (fim);

return 0;
}

void strcopy (char*d,char*o){
	
	for (linha=0;linha<20;linha++){
		fim[linha] = inicio[linha];
	}
	
}
