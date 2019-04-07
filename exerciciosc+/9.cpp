#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{   
  float b, h, a;
  printf("\n Calculo de area do triangulo"); 
  printf("\n Digite a base: ");
  scanf("%f", &b);
  printf("\n Digite a altura: ");
  scanf("%f", &h);
  a = (b * h) / 2;
  printf("\n A area do triangulo e: %f \n", a);
  system("PAUSE");	
  return 0;
}

