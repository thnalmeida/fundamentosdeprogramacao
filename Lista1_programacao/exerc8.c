/*Fazer um programa para calcular a área de um círculo.*/

#include<stdio.h>
#define PI 3.1415
int main()
{
	float r, area;

	printf("Digite o valor do raio do circulo: ");
	scanf("%f", &r);

	area = r * r * PI;

	printf("O valor da area do circulo eh: %f", area);

	return 0;
}