#include <stdio.h>
#include <stdlib.h>

int main()
{
	float peixe, multa;
	printf("Digite a quantidade de peixe em kg: ");
	scanf("%f", &peixe);
	if (peixe > 50) {
		multa = (peixe - 50) * 4;
		printf("O valor total da multa e: %f", multa);
	}
	else {
		printf("Sua pesagem esta dentro da lei.");
	}
}
