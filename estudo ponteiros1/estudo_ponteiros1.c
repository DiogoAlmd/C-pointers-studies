#include <stdio.h>
#include <stdlib.h>

void leitura(float *pont, int ele);

int main()
{
	
	int elementos;
	float vetor[10];
	
	printf("Digite a quantidade de elementos (<10): ");
	scanf("%i", &elementos);
	
	leitura(vetor, elementos);
	
	system("pause");
	return 0;
}

void leitura(float *pont, int ele)
{
	
	int i;
	
	for(i=0; i<ele; i++, pont++)
	{
		printf("Digite o elemento[%i]:", i);
		scanf("%f", pont);
		fflush(stdin);
	}
	
}
