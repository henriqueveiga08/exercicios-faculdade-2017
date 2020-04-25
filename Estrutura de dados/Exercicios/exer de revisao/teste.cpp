#include <stdio.h>

void discount(float *a);

int main(){

    float price = 42.99, *p;
	p = &price;
    printf("Os custos do item %.2f\n", price);
    discount(p);
    printf("Com o desconto, fica %.2f\n", price);

    return 0;
}

void discount(float *a){
    *a = *a * 0.90;
}
