#include <stdio.h>
#include <stdlib.h>

void leitura(float *p, int q);
int busca_maior(float *p, int q);

main()
{	
	int qtde;
	float valor[10];
	
	printf("Digite a quantidade de elementos a serem observados: ", qtde);
	scanf("%i", &qtde);
	
	leitura(valor, qtde);

	return 0;	
}

void leitura(float *p, int q)
{
	int i;
		
	for(i=0; i<q; i++, p++)
	{
		printf("vet[%i]: ", i);
		scanf("%f", p);
		fflush(stdin);
	}
}

int busca_maior(float *p, int q)
{
	
	
}
