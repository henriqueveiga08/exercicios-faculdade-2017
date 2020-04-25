/* strncpy.c */
 
#include <stdio.h>
#include <string.h>
 
int main(void)
{
   char sString_1[]="123456789\0";
   char sString_2[4];
   char sString_3[4];
 
   /* copia os 3 primeiros caracteres de sString_1 */
   strncpy(sString_2, sString_1, 3);
 
   printf("\nsString_1 = [%s]", sString_1);
   printf("\nsString_2 = [%s]", sString_2);
 
   /* É necessário sempre acrescentar o \0 ao final da string, pois a função 
      strncpy copia até o número de caracteres indicados, e, nenhum dos 
      caracteres pode ser o \0 ocasionando em resultados “não controlados”. */
   sString_2[3]='\0';
   printf("\nsString_2 = [%s]", sString_2);
 
   /* Uma alternativa, é utilizar o comando memset gravar \0 em todo o espaço
      de memória da string */
   memset(sString_3, 0, sizeof(sString_3));
   strncpy(sString_3, sString_1, 3);
   printf("\nsString_3 = [%s]", sString_3);
   return 0;
}
