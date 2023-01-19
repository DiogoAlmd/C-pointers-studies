#include <stdio.h>
#include <stdlib.h>

void leitura(float *p,int q);
void ordena(float *p,int q);
void imprime(float *p,int q);

main()
{
int qtde;
float vet[10];
do{
	printf("\nQtde de elementos - max.10: ");
	scanf("%i",&qtde);
	fflush(stdin);
  }while(qtde<1 || qtde>10);
leitura(vet,qtde); 
ordena(vet,qtde);  
printf("\nVetor ordenado");
imprime(vet,qtde); 
}//main

void leitura(float *p,int q)
{
int i;
for(i=0;i<q;i++,p++)
  { 
    printf("\nvet[%i]= ",i);
  	scanf("%f",p);
  	fflush(stdin);
  }//for
}//leitura

void ordena(float *p,int q)
{
int i,j;
float aux,*p1;

for(i=0;i<q;i++,p++)
 {
   p1=p+1;	
   for(j=i+1;j<q;j++,p1++)
     if(*p>*p1)
      {
       aux=*p;
       *p=*p1;
       *p1=aux;
	  }//if
 }//for
}//ordena

void imprime(float *p,int q)
{
int i;
for(i=0;i<q;i++,p++)	
  printf("\nvet[%i]= %.2f",i,*p);
printf("\n\n");
system("pause");
}//imprime
