/*Modifique o programa de forma que um ponteiro p para float seja declarado na fun��o main. Fa�a
p para apontar para o endere�o da vari�vel price, e ent�o, passe-o para fun��o discount().*/

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


