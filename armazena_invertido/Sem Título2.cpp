#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void invertido(char *pf, char *pi);
char maiuscula(char letra);
char minuscula(char letra);

int main()
{
	char frase[80], inv[80];
	
	printf("Imprime a frase invertida\n");
	
	printf("Digite a frase: ");
	gets(frase);	
	fflush(stdin);
	
	invertido(frase, inv);
	printf("\nA frase invertida: %s", inv);
	//maiuscula(frase);
	//minuscula(inv);
	
	//printf("\nA frase invertida: %s", inv);
	
	return 0;
} //main

void invertido(char *pf, char *pi)
{
	int tam, i;
	tam = strlen(pf);	//qtde de letras na frase
	
	pf = pf + tam - 1;
	
	for(i=0; i<tam; i++, pi++, pf--)
	{
		*pi = minuscula(*pf);
		if(i==0)
			*pi = maiuscula(*pf);
		if(*pf == ' ')
			i++;
			pi++;
			pf--;
			
			*pi = maiuscula(*pf);
	}
	*pi = '\0';
}

char maiuscula(char letra)
{
	if(letra >='a' && letra <= 'z')
		return(letra - 32);
	
	else
		return letra;
}
char minuscula(char letra)
{
	if(letra >= 'A' && letra <= 'Z')
		return(letra + 32);
	
	else
		return letra;
}
