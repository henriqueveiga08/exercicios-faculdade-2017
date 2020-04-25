//Algoritmo 10: Métodos Jacobi e Gauss-Seidel
//
//
//
//// Gauss Seidel
//
//clear;
//
//clc;
//
//function [x, erroFinal]=GaussSeidel(A, b, x)
//
//for k=2:numItera
//
//for i=1:n
//
//x(i,k)=b(i);
//
//for j=1:n
//
//if i<>j
//
//if i>j
//
//x(i,k)=x(i,k)-A(i,j)*x(j,k);
//
//else
//
//x(i,k)=x(i,k)-A(i,j)*x(j,k-1);
//
//end
//
//end
//
//end
//
//x(i,k)=(1/A(i,i))*x(i,k);
//
//erroNovo=abs(x(i,k)-x(i,k-1));
//
//if erroNovo > erro
//
//erro=erroNovo;
//
//end
//
//end
//
//erroFinal(k)=erro;
//
//erro=0;
//
//end
//
//endfunction
//
//
//
//// Jacobi
//
//function [x, erroFinal]=Jacobi(A, b, x)
//for k=2:numItera
//for i=1:n
//x(i,k)=b(i);
//for j=1:n
//if i<>j
//x(i,k)=x(i,k)-A(i,j)*x(j,k-1);
//end
//end
//x(i,k)=(1/A(i,i))*x(i,k);
//erroNovo=abs(x(i,k)-x(i,k-1));
//if erroNovo > erro
//erro=erroNovo;
//end
//end
//erroFinal(k)=erro;
//erro=0;
//end
//endfunction
//
//// Definição da Matriz A
//function A=leMatrizA()
//printf("\n\nEntrada da Matriz A");
//for i=1:n
//for j=1:n
//printf("Entre com o elemento A(%d,%d) :",i,j);
//A(i,j)=input("");
//end
//end
//endfunction
//
//// Definição da Matriz b
//function b=leVetorb()
//for i=1:n
//printf("Entre com o elemento b(%d) :",i);
//b(i)=input("");
//end
//endfunction
//
//// Definição das condições iniciais
//function x=leCondInic()
//printf("\n\nEntrada das condições iniciais");
//for i=1:n
//printf("Entre com o elemento x%d(0)",i);
//x(i,1)=input("");
//end
//endfunction
//
//// Definição da ordem do sistema
//n=input("Entre com a ordem do sistema: ");
//numItera=input("Entre com o número de iterações: ");
//erro=0;
//A = leMatrizA();
//b = leVetorb();
//x = leCondInic();
//i=1;
//while i<>0
//i=input("Entre com valor de i: ");
//select i
//case 1 then
//[x,erroFinal]=Jacobi(A,b,x);
//// Imprime resultados
//printf("\nIter ");
//for i=1:n
//printf("x%d ",i);
//end
//printf("\n");
//for k=1:numItera;
//printf(" %d ",k);
//for i=1:n
//printf("%f ",x(i,k));
//end
//printf("Erro =%.15f\n",erroFinal(k));
////printf("\n");
//end
//case 2 then
//[x,erroFinal]=GaussSeidel(A,b,x);
//// Imprime resultados
//printf("\nIter ");
//for i=1:n
//printf("x%d ",i);
//end
//printf("\n");
//for k=1:numItera;
//printf(" %d ",k);
//for i=1:n
//printf("%f ",x(i,k));
//end
//printf("Erro =%.15f\n",erroFinal(k));
////printf("\n");
//end
//end
//end

////////////////////////////////////////////////
/*Matematica numerica
Claudir Oliveira
Método de Gauss Seidel
*/
/*
<1º passo-Criação de ponteiros e alocação de ponteiros>
<2º passo-Criar ponteiro para arquivos e escrever aquivos>
############################################################
compilar:gcc SeidelModificado.c -o <name>
*/
#include<stdio.h>
#include<math.h>
#include<malloc.h>
double **a, *b, *x;
int i, j, n;

main()
{
 void gauss_Seidel(), aloc_var();
 int s, m, n;
 s = 0;
 while(s==0)
 {
  printf("{FONTE}33[036m");
  printf("{FONTE}33[04m");
  printf("Resolução de SELAs - Gauss-Seidel \n");
  printf("{FONTE}33[00m");
  printf("{FONTE}33[036m");
  printf("\n Forneça as dimensões da matriz A: m n = ");
  printf("{FONTE}33[00m");
  scanf("%d %d", &m, &n);
  aloc_var(m,n);
  gauss_Seidel(m,n);
  printf("{FONTE}33[036m");
  printf("{FONTE}33[05m");
  printf("\n Deseja sair do progrma? (1-Sim, 0-Não)");
  printf("{FONTE}33[00m");
  scanf("%d", &s);
 }
}


void gauss_Seidel(m,n)
 int m, n;
{
 double somat();
 int k, tol;
 printf("{FONTE}33[036m");
 printf("\n Defina a matriz A[%dx%d]\n",m,n);
 printf("{FONTE}33[00m");
 for(i=0; i<= m-1; i++)
 {
  for(j=0; j<=n-1; j++)
  {
   printf("\n a[%d,%d]=  ",i+1,j+1);
   scanf("%lf",&a[i][j]);
  }
 }
 printf("{FONTE}33[036m");
 printf("\n Defina o vetor B(%d)\n",m);
 printf("{FONTE}33[00m");
 for(i=0; i<=m-1; i++)
 {
   printf("\n b[%d]=  ",i+1);
   scanf("%lf",&b[i]);
 }
 printf("{FONTE}33[036m");
 printf("\n Defina o vetor x(%d)\n",n);
 printf("{FONTE}33[00m");
 for(i=0; i<=n-1; i++)
 {
   printf("\n x[%d]=  ",i+1);
   scanf("%lf",&x[i]);
 }
 printf("{FONTE}33[036m");
 printf("\n Defina o número de iterações = ");
 printf("{FONTE}33[00m");
 scanf("%d", &tol);
 k = 0;
 while (k < tol)
 {
  for(i=0; i<=n-1; i++)
  {
   x[i] = (b[i] - somat(i,n) + a[i][i]*x[i])/a[i][i];
  }
  k = k+1;
 }
 printf("{FONTE}33[036m");
 printf("\n O vetor x é = \n");
 printf("{FONTE}33[00m");
 for (i = 0; i <= n-1; i++)
 {
  printf("%g \n", x[i]);
 }
}

double somat(i,n)
 int i, n;
{
 double soma;
 soma = 0.0;
 for(j=0; j<=n-1; j++)
 {
  soma = soma + a[i][j]*x[j];
 }
 return soma;
}
void aloc_var(m,n)
 int m,n;
{
 int i;
printf("\n Valor de m , n = %d,%d\n",m,n);
a=(double **) malloc((m+1)*sizeof(double *));
b=(double *) malloc((m+1)*sizeof(double));
x=(double *) malloc((n+1)*sizeof(double));
 for(i=0;i < n+1;i++)
 {
  a[i]=(double *)malloc((n+1)*sizeof(double));
 }
}
