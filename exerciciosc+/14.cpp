#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
	float vol, r;
	printf("\n Calculo de volume da esfera a partir do raio.");
	printf("\n Digite o raio da esfera: ");
	scanf("%f", &r);
	vol = (4 * 3.14 * pow(r, 3)) / 3;
	printf("\n O volume da esfera e: %f \n", vol);
	system("PAUSE");	
  return 0;
}
