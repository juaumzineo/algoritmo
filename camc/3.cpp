#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[] ) {
	float n1, n2, som;
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	printf("Digite o segundo numero: ");
	scanf("%f", &n2);
	som = n1 + n2;
	if (som>25) {
		printf("A soma dos numeros e maior que 25");
	}
	else {
		printf("A soma e: %f", som );
	}
	return 0;
}
