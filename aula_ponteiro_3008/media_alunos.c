#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "portuguese");
	
	float A[100], B[100], C[100], *p_a, *p_b, *p_c;
	
	int q, i;
	
	p_a = A;
	p_b = B;
	
	do
	{
		printf("Digite a quantidade de elementos: ");
		scanf("%i", &q);
		
	}while(q<=0 || q>100);
	
	printf("Lendo os elementos do vetor A: \n");
	
	for(i=0; i<q; i++)
	{
		printf("%io elemento: ", i+1);
		scanf("%f", p_a++);
	}
	
	printf("Lendo os elementos do vetor B:\n");
	
	for(i=0;i<q;i++)
	{
		printf("%io elemento: ", i+1);
		scanf("%f", p_b++);
	}
	
	p_a = A;
	p_b = B;
	p_c = C;
	
	for(i=0;i<q;i++)
	{
		*p_c++ = *(p_a++) + *(p_b++);
	}
	
	p_c = C;
	
	printf("Imprime os elementos do vetor C: ");
	
	for(i=0; i<q; i++, *p_c++)
	{
		printf("\n%i elemento = %.2f", i+1, *p_c);
		
	}
	return 0;
}
