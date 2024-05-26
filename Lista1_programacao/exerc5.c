/*5) Fazer um programa que receba um número real e imprima a quinta parte desse número.*/


#include<stdio.h>

int main()
{
	float r, quinta;

	printf("Digite um numero real: ");
	scanf("%f", &r);

	quinta = r / 5; 

	printf("A quinta parte de %f eh: %f", r, quinta);

	return 0;
}