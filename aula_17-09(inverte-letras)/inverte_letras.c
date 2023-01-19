#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostra_invertido(char *p);

int main()
{
	char frase[80];
	
	printf("Imprime a frase invertida\n");
	
	printf("Digite a frase: ");
	gets(frase);	
	fflush(stdin);
	
	mostra_invertido(frase);
	
	return 0;
}

void mostra_invertido(char *p)
{
	int tam, i;
	tam = strlen(p);
	
	p = p + tam - 1; //ponteiro mais o tamanho da string = posiciona o ponteiro na ultima letra, subtrai 1, ponteiro fica na penultima letra
	for(i=0; i<tam; i++, p--)
	{
		printf("%c", *p);
	}
printf("\n\n");
system("pause");
}
