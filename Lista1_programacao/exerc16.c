/*Fazer um programa que receba três números e mostre como resposta a soma dos quadrados desses 
números. */

#include<stdio.h>
int main()
{
	float a, b, c, resposta;

	printf("Digite tres numeros: ");
	scanf("%f %f %f", &a, &b, &c);

	resposta = (a*a) + (b*b) + (c*c);

	printf("A soma dos quadrados desses numeros eh: %f", resposta);




	return 0;
}