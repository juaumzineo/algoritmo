#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
float a, b, c, delta, x1, x2;
	
	printf("\n Digite o valor de A: ");
	scanf("%f", &a);
	printf("\n Digite o valor de B: ");
	scanf("%f", &b);
	printf("\n Digite o valor de C: ");
	scanf("%f", &c);
	
	delta = pow(b,2) - (4 * a) * c;
	printf("\n O valor de delta e: %f", delta);
	x1= (-b + sqrt(delta)) / 2 * a;
	x2= (-b - sqrt(delta)) / 2 * a;
	printf("\n O valor de X1 e: %f", x1);
	printf("\n O valor de X2 e: %f \n", x2);
	return 0;
}
