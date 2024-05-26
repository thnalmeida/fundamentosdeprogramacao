/*7) Fazer um programa para calcular a área de um trapézio.(B+b) * h / 2 */

#include<stdio.h>
int main()
{
	float B, b, altura, area;

	printf("Digite os valores da base maior, base menor, e altura do trapezio: ");
	scanf("%f %f %f", &B, &b, &altura);
	
	area = (B + b) * altura / 2;

	printf("O valor da area do trapezio eh: %f", area);

	return 0;
}