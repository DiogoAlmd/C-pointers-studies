#include <stdio.h>
#include <stdlib.h>

void leitura(float *p,int q);
int busca_maior(float *p,int q);
void imprime(float *p,int pos);

main()
{
int qtde,pos;
float vet[10];
do{
	printf("\nQtde de elementos - max.10: ");
	scanf("%i",&qtde);
	fflush(stdin);
  }while(qtde<1 || qtde>10);
leitura(vet,qtde);
pos=busca_maior(vet,qtde);
imprime(vet,pos);
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

int busca_maior(float *p,int q)
{
int i,pos;
float maior=*p;   //conteudo do 1 elemento
pos=0;            //posicao do 1 elemento
p++;              //ponteiro no 2 elemento
for(i=1;i<q;i++,p++)
  if(*p>maior)
   {
   	 maior=*p;
   	 pos=i;
   }//if
return pos;
}//busca_maior

void imprime(float *p,int pos)
{
printf("\nO maior valor = %.2f - posicao = %i\n\n\n",*(p+pos),pos);
system("pause");
}//imprime

