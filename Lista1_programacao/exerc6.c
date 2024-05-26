#include<stdio.h>
int main()
{
	float b, h, area;

	printf("Digite os valores de base e altura: ");
	scanf("%f %f", &b, &h);

	area = b * h / 2;

	printf("O valor da area do triangulo eh: %f", area);
	
	return 0;
}