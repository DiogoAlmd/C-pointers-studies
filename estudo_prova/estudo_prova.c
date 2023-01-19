#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprime(char *p, int tam);

int main(){
	
	char palavra[80];
	int tam_frase;
	
	printf("Digite a palavra que quer q seja impressa: ");
	gets(palavra);
	fflush(stdin);
	
	tam_frase = strlen(palavra);
		
	imprime(palavra, tam_frase);
	
	return 0;
	system("pause");
}

void imprime(char *p, int tam){
	
	int i;
		
	for(i=0; i<tam; i++, p++){
		
		printf("%c", *p);
		
	}
	
}
