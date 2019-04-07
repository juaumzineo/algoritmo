#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int a, b, c, delta, x1, x2;
	printf("\n Digite o valor de A: ");
	scanf("%d", &a);
	printf("\n Digite o valor de B: ");
	scanf("%d", &a);
	printf("\n Digite o valor de C: ");
	scanf("%d", &a);
	
	delta = pow(b,2) - (4 * a) * c;
	printf("\n O valor de delta e: %d", delta);
	x1= (-b + sqrt(delta)) / 2 * a;
	x2= (-b - sqrt(delta)) / 2 * a;
	printf("\n O valor de X1 e: %d", x1);
	printf("\n O valor de X2 e: %d \n", x2);
	system("PAUSE");	
  return 0;
}
