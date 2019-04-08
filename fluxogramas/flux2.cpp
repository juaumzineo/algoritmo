#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float a, b, soma;
  printf("\n Soma de dois numeros.");
  printf("\n Digite o valor de A: ");
  scanf("%f", &a);
  printf("\n Digite o valor de B: ");
  scanf("%f", &b);
  soma = a + b;
  printf("\n O valor da soma e: %f \n", soma);
  system("PAUSE");
  return 0;
}
