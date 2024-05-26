/*Fazer um programa que leia a distância (km) percorrida por um veículo e o tempo gasto (h), mostrando 
como resposta a sua velocidade média: Vm = s / t.*/

#include<stdio.h>
int main()
{
	float km, hora, vel;

	printf("Digite a distancia percorrida em km: ");
	scanf("%f", &km);

	printf("Digite o tempo gasto em horas: ");
	scanf("%f", &hora);

	vel = km / hora; 

	printf("A velocidade media foi %f km/h", vel);

	return 0;
}