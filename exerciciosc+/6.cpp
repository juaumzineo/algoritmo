#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{   
  float b, h, a;
  printf("\n Calculo de area do retangulo");
  printf("\n Digite a base: ");
  scanf("%f", &b);
  printf("\n Digite a altura: ");
  scanf("%f", &h);
  a = b * h;
  printf("\n A area e: %f \n", a);
  system("PAUSE");	
  return 0;
}

