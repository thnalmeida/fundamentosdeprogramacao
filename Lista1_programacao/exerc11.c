/* Fazer um programa para converter um ângulo de graus para radianos.(graus * pi /180) */

#include<stdio.h>
#define PI 3.1415

int main()
{
	float graus, rad;

	printf("Digite o valor do angulo em graus: ");
	scanf("%f", &graus); 

	rad = graus * (PI /180);

	printf("O valor do angulo em radianos eh: %f", rad);


	return 0;
}