#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{   
  float cm, me, dcm, mm;
  printf("\n Escreva a medida em cm:"); 
  scanf("%f", &cm);
  me = cm / 100;
  dcm = cm / 10;
  mm = cm * 10;
  printf("\n O valor em metros e: %f \n", me);
  printf("\n O valor em decimetros e: %f \n", dcm);
  printf("\n O valor em milimetros e: %f \n", mm);
  system("PAUSE");	
  return 0;
}

