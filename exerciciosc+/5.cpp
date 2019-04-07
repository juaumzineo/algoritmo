#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{   
  float dep, vhr, hrt, brt, liq;
  printf("\n Quantos dependentes voce possui? ");
  scanf("%f", &dep);
  printf("\n Quanto voce recebe por hora? ");
  scanf("%f", &vhr);
  printf("\n Quantas horas voce trabalhou no mes? ");
  scanf("%f", &hrt);
  brt = vhr * hrt;
  liq = dep * 300 + brt;
  printf("\n Seu salario bruto e: %f", brt);
  printf("\n Seu salario liquido e: %f \n", liq);
  system("PAUSE");	
  return 0;
}
