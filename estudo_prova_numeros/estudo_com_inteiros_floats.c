#include <stdio.h>
#include <stdlib.h>

int soma(int num1, int num2);

int main(){
	
	int n1, n2, resultado;
	
	printf("Digite os dois numeros que vc quer somar: ");
	scanf("%i %i", &n1, &n2);
	
	resultado = soma(n1, n2);
	
	printf("Valor = %i", resultado);
	
	return 0;
}

int soma(int num1, int num2){
	
	int result;
	
	result = num1 + num2;
	
	return result;
	
}
