/*Fazer um programa que receba três valores, que podem ser inteiros ou reais, e mostre a soma desses 
valores. */

#include<stdio.h>
int main()
{
	float a, b, c, soma;

	printf("Digite três valores: "); 
	scanf("%f %f %f", &a, &b, &c);

	soma = a + b + c;
	printf("A soma dos tres valores eh: %f\n", soma);


	return 0;
}