/*4) Fazer um programa que receba um número real e imprima o quadrado e o cubo do valor lido.*/

#include<stdio.h>
int main()
{
	float r, quadrado, cubo;

	printf("Digite um numero real: \n");
	scanf("%f", &r);

	quadrado = r * r;
	cubo = r * r * r;

	printf("O quadrado de %f eh: %f e o cubo eh: %f", r, quadrado, cubo);

	return 0;
}