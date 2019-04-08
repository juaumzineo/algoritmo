#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
	float tempo, vel, dist, li;
	printf("\n Insira o tempo gasto na viagem em horas: ");
	scanf("%f", &tempo);
	printf("\n Insira a velociade media em km/h: ");
	scanf("%f", &vel);
	dist = tempo * vel;
	li = dist / 12;
	printf("\n A distancia percorrida foi: %f", dist);
	printf("\n A quantidade de litros gasta foi: %f \n", li);
	system("PAUSE");	
  return 0;
}
	
