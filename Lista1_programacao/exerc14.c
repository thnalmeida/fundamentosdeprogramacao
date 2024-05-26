/* Fazer um programa que leia o valor de um produto e imprima o valor final com desconto, sabendo que o 
desconto foi de 12%. */

#include<stdio.h>

int main()
{
	float valor, valorfinal;

	printf("Digite o valor do produto: ");
	scanf("%f", &valor);

	valorfinal = valor - (valor * 0.12);

	printf("O valor do produto com desconto eh: %.2f\n", valorfinal);

	return 0;
}