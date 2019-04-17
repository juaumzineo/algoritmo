#include <stdio.h>
#include <stdlib.h>

int main()
{
	int anasc, ano, idade;
	printf("Digite o ano atual: ");
	scanf("%d", &ano);
	printf("Digite seu ano de nascimento: ");
	scanf("%d", &anasc);
	idade = ano - anasc;
	if (idade >= 18) {
		printf("Voce e maior de idade.");
	}
	else {
		printf("Voce e menor de idade.");
	}
}
