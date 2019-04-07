#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{   
  int anas, age, agef;
  printf("\n Qual ano voce nasceu? "); 
  scanf("%d", &anas);
  age = 2019 - anas;
  printf("\n Sua idade e: %d", age);
  agef = age + 31;
  printf("\n Sua idade no ano de 2050 sera: %d \n", agef);
  
  system("PAUSE");	
  return 0;
}

