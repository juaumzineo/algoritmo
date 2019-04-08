#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
  float celsius, kelvin;
  printf("\n Digite a temperatura em Celsius: ");
  scanf("%f", &celsius);
  kelvin = celsius + 273.15;
  printf("\n O valor em kelvin e: %2.2f", kelvin);
  printf("\n Tecle enter para sair do DOS \n");
  system("PAUSE");
  return 0;
}
