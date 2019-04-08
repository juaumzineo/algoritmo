#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float a, qd;
  printf("\n O quadrado de um numero.");
  printf("\n Digite o numero: ");
  scanf("%f", &a);
  qd = a * a;
  printf("\n O quadrado do numero e: %f \n", qd);
  system("PAUSE");
  return 0;
}
