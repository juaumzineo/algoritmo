#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float a, per;
  printf("\n Calculo de perimetro.");
  printf("\n Digite o valor do lado: ");
  scanf("%f", &a);
  per = 4 * a;
  printf("\n O valor do perimetro e: %f \n", per);
  system("PAUSE");
  return 0;
}
