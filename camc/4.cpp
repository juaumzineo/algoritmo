#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[] ) {
	float n1, n2;
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	printf("Digite o segundo numero: ");
	scanf("%f", &n2);
	if (n1 > n2) {
		printf("O maior numero e n1: %f", n1);
	}
	else {
		printf("O maior numero e n2: %f", n2);
	}
	return 0;
}
