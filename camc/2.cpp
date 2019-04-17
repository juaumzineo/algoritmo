#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[] ) {
	int n;
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	if (n % 2 == 0 ) {
		printf("O numero e par.");
	}
	else {
		printf("O numero e impar.");
	}
}
