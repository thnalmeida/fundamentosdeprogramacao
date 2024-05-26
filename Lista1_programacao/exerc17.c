#include<stdio.h>

int main()
{
	double a, b, c, resposta;

	printf("Digite tres valores: ");
	scanf("%lf %lf %lf", &a, &b, &c);

	resposta = (a + b + c) * (a + b + c);

	printf("Quadrado da soma: %lf", resposta);





	return 0;
}