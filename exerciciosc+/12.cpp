#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	float s, hr, min;
	printf("\n Escreva o tempo em segundos:");
	scanf("%f", &s);
	min = s / 60;
	hr= s / 3600;
	printf("\n O tempo em minutos e: %f", min);
	printf("\n O tempo em horas e: %f \n", hr);
	system("PAUSE");	
  return 0;
}
