#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int procura(char *p, int tam, char *proc);
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

int procura(char *p, int tam, char *proc)
{
	int i, achou = 0;
	
	while(i<tam && achou == 0)
	{
		if(*(p+i) == *proc)
		{
			achou = 1;
		}
		else
		{
			i++;
		}
	}
	return achou;
}
