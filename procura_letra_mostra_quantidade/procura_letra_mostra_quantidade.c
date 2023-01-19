#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void s_minuscula(char *p, int tam);
char minuscula(char l);

int main()
{
	char frase[80], letra;
	
	printf("Digite uma frase: ");
	gets(frase);
	s_minuscula(frase, strlen(frase));
	fflush(stdin);
	
	printf("Procura pela letra: ");
	scanf("%c", &letra);
	letra = minuscula(letra);
	
	if(procura(frase, strlen(frase), &letra) == 1)
	{
		printf("Resultado: O caractere %c foi encontrado", letra);
	}
	
	else
	{
		printf("Resultado: O caratere %c nao foi encontrado", letra);
	}
	
	quantidade(frase, letra);
	printf("A quantidade de vezes que ela repetiu é: %i", quantidade);
	
	return 0;
}

void s_minuscula(char *p, int tam)
{
	int i=0;
	
	for (i=0; i<tam; i++, p++)
	{
		if(*(p+i)>='A' && *(p+i)<='Z')
		{
			*(p+i) += 32;
		}
	}
}

char minuscula(char l)
{
	if(l>='A' && l<='Z')
	{
		return l+32;
	}
}

