#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{   
  float n1, n2, n3, n4, med;
  char nome [6];
  printf("\n Calculo da media anual");
  printf("\n Qual o seu nome?") ;
  scanf("%s", &nome);
  printf("\n Qual sua nota do primeiro bimestre? ");
  scanf("%f", &n1);
  printf("\n Qual sua nota do segundo bimestre? ");
  scanf("%f", &n2);
  printf("\n Qual sua nota do terceiro bimestre? ");
  scanf("%f", &n3);
  printf("\n Qual sua nota do quarto bimestre? ");
  scanf("%f", &n4);
  med = (0 + n1 + n2 + n3 + n4) / 4;
  if (med>6)
  printf("\n Parabens, sua media anual e: %f \n", med); 
  else
  printf("\n Voce nao passou, %s", nome);
  printf("\n sua media anual e: %f \n", med);
  system("PAUSE");	
  return 0;
}

