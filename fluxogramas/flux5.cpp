#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	float a, b, m;
	printf("\n Media de dois valores.");
	printf("\n Digite um valor para a variavel A: ");
	scanf("%f", &a);
	printf("\n Digite um valor para a variavel B: ");
	scanf("%f", &b);
	m = (a + b) / 2;
	printf("\n A media e: %f \n", m);
	system("PAUSE");
	return 0;
}
	
