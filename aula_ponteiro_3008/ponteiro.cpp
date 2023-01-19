#include <stdio.h>
#include <stdlib.h>
int main()
{
	int q, i, num[5], *p_num;
	
	p_num = num; //inicialização
	
	do
	{
		printf("Digite a quantidade de elementos: ");
		scanf("%i", &q);
	}while(q<=0 || q>5);
	
	printf("Lendo os elementos do vetor:\n");
	
	for(i=0;i<q;i++)
	{
		printf("%i\xA7 elemento - end %u: ", i+1);
		scanf("%i", p_num++);
	}
		
	p_num=num;
	printf("Imprimindo os elementos do vetor\n");
	
	for(i=0;i<q;i++, p_num++)
	{
		printf("%i\xA7 elemento - end %i = %i\n", i+1,p_num,*p_num);
	}
	
	system("pause");
	return 0;
}
