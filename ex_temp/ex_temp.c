#include <stdio.h>

void leitura(float *p, int tam);
int busca_maior(float *p, int tam);
float media_temp(float *p, int tam);
int inferior_media(float *p, int tam, int *pinf, float m);
void mostra(float *p, int *inf, int qtd);

int main()
{
	float temp[31], media;
	int dias, pos, inf[31], quantidade;
	
	do
	{
		printf("Digite a quantidade de dias: ");
		scanf("%i", &dias);
	}while(dias<1 || dias > 31);
	
	leitura(temp, dias);  //temp é guardada no ponteiro e dias no tam
						  // chamada do ponteiro
						  
	pos = busca_maior(temp, dias);
	
	printf("\n\nA maior temp \x82 %.2f ocorreu no %io dia\n\n", *(temp+pos), pos+1);
	
	media = media_temp(temp, dias);
	printf("\nA temperatura media foi %.2f", media);
	
	quantidade = inferior_media(temp, dias, inf, media);
	
	mostra(temp, inf, quantidade);
	
	return 0;
}

void leitura(float *p, int tam)
{
	int i;
	
	for(i=0; i<tam; i++, p++)
	{
		printf("\nTemperatura do %i\xA7 dia: ", i+1);
		scanf("%f", p);
	}
}

int busca_maior(float*p, int tam)
{
	
	float maior;
	int i, pos;
	
	pos = 0;
	maior = *p;
	
	p++;
	for(i=1; i<tam; i++, p++)
	{
		if(*p > maior)
		{
			maior = *p;
			pos = i;
		}
	}
	return pos;
}

float media_temp(float *p, int tam)
{
	float soma=0;
	int i;
	
	for(i=0; i<tam; i++, p++)
	{
		soma += *p;
	}
	return(soma/tam);
}

int inferior_media(float *p, int tam, int *pinf, float m)
{
	int i, qtd=0;
	
	for(i=0; i<tam; i++, p++)
	{
		if(*p<m)
		{
			qtd++;
			*pinf = i;
			pinf++;
		}
	}
	return qtd;
}

void mostra(float *p, int *pinf, int qtd)
{
	int i;
	for(i=0; i<qtd; i++, pinf++)
	{
		printf("\nA temperatura = %.2f - no dia %i", *(p+*pinf), *pinf+1);
	}
}
