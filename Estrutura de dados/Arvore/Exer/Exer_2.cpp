#include<stdio.h>
#include<stdlib.h>


int folhas (Arv* a)
{
    if (arv_vazia(a->esq) && arv_vazia(a->dir)) 
        return 1;
    else if (!arv_vazia(a->esq) && arv_vazia(a->dir))   
        return folhas(a->esq);
    else if (arv_vazia(a->esq) && !arv_vazia(a->dir))     
        return folhas(a->dir);
    return folhas(a->esq) + folhas(a->dir);
}
