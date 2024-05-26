/*Fazer um programa para calcular o novo salário de um funcionário. Sabe-se que o funcionário terá 
aumento de 20%.*/
#include<stdio.h>
int main()
{
	float salario, novosalario; 

	printf("Digite o valor do salario atual: ");
	scanf("%f", &salario);

	novosalario = salario + (0.2 * salario);

	printf("O valor do salario reajustado eh: %.2f\n", novosalario);


	return 0;
}