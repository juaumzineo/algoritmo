#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
  float peso, altura, imc;
  printf("\n Calculo de IMC.");
  printf("\n Digite o seu peso: ");
  scanf("%f", &peso);
  printf("\n Digite a sua altura: ");
  scanf("%f", &altura);
  imc = peso /  (altura * altura );
  printf("\n Seu IMC e igual a: %2.2f \n", imc);
  printf("Tecle enter para sair do DOS \n");
  system("PAUSE");
  return 0;
}
