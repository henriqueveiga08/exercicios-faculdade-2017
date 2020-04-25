#include <stdio.h>
#include <stdlib.h>

int strtam (char*s);
char vetor [50];
int contador, linha;

int main(){

puts ("Digite algo para ser copiado, maximo 50 caracter.");
gets (vetor);



printf ("\ncontador =%d", strtam (vetor));


return 0;
}

int strtam (char*s){
	for (linha=0;s[linha]!='\0';linha++){
		if (s[linha] != ' '){
		
			contador++;
		}
}
return contador;
}
