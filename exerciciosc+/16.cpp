#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int a, b, c;
	printf("\n Insira o valor de A: ");
	scanf("%d", &a);
	printf("\n Insira o valor de B: ");
	scanf("%d", &b);
	c = a;
	a = b;
	b = c;
	printf("\n O novo valor de A e: %d", a);
	printf("\n O novo valor de B e: %d \n", b);
	system("PAUSE");	
  return 0;
}
