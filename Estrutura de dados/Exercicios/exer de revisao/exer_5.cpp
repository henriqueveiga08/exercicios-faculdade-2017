/*Modifique o programa de forma que um ponteiro p para float seja declarado na função main. Faça
p para apontar para o endereço da variável price, e então, passe-o para função discount().*/

#include <stdio.h>

void discount(float *a);

int main(){

    float price = 42.99, *p;
	p = &price;
    printf("O preco do item eh %.2f\n", price);
    discount(p);
    printf("Com o desconto, fica => %.2f\n", price);

    return 0;
}

void discount(float *a){
    *a = *a * 0.90;
}


