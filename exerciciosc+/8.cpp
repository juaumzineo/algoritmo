#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	float x, n, res;
    
    printf("\n O quadrado de um valor X e N.");
    printf("\n Digite o valor de X: ");
    scanf("%f", &x);
    printf("\n Digite o valor de N: ");
    scanf("%f", &n);
    res = (x * n);
    res = res * res;
    printf("\n O resultado e: %f \n", res);
    system("PAUSE");	
  return 0;
}
