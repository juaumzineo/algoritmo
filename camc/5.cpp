#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[] ) {
	int n1, n2, dif;
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	if (n1 > n2) {
		printf("O maior numero e n1");
		dif = n1 - n2;
		printf("\nA diferenca entre o maior (n1) e menor (n2) e: %d", dif);
	}
	else {
		printf("O maior numero e n2");
		dif = n2 - n1;
		printf("\nA diferenca entre o maior (n2) e menor (n1) e: %d", dif);
	}
	return 0;
}
