#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float r, area;
  printf("\n Calculo de area do circulo.");
  printf("\n Digite o valor do raio: ");
  scanf("%f", &r);
  area = 3.14 * ( r * r);
  printf("\n O valor da area e: %f \n", area);
  system("PAUSE");
  return 0;
}
