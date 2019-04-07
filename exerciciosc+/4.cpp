#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	float ppc, juros, trms;
	printf("\n Conta poupanca");
	printf("\n Qual quantia foi depositada? ");
	scanf("%f", &ppc);
	printf("\n Qual a taxa de juros ao mes? ");
	scanf("%f", &juros);
	trms = ppc + ((ppc/100) * juros);
	trms = trms + ((trms / 100) * juros);
	trms = trms + ((trms / 100) * juros);
	printf("\n Apos tres meses o saldo virou R$ %f \n", trms);
	system("PAUSE");	
  return 0;
}
