#include <stdio.h>
#include <stdlib.h>

//declaração das funções
void le_vetor(float *num, int quant);
int retorna(float *num, int quant);
void imprime(float *num, int posicao);

int main()
{
	int qtde, posicao;
	float vet[10];
	
	printf("Type how much elements will be analised: ");
	scanf("%i", &qtde);
	
	//inicialização das funções
	le_vetor(vet, qtde);
	posicao = retorna(vet, qtde);
	imprime(vet, posicao);
}


//inicio das funções
void le_vetor(float *num, int quant)
{
	int i=0;
	
	for(i=0; i<quant; i++, num++)
	{
		printf("\nvet[%i]= ", i);
		scanf("%f", num);
		fflush(stdin);
	}
}

int retorna(float *num, int quant)
{
	int i, posicao;
	float maior = *num;
	posicao=0;
	
	num++;
	for(i=1; i<quant; i++, num++)
	{
		if(*num>maior)
		{
			maior = *num;
			posicao = i;
		}
	}
	return posicao;
}

void imprime(float *num, int posicao)
{
	printf("\nThe biggest value is %.2f and is in %ith position\n\n", *(num + posicao), posicao);
	system("pause");
}
