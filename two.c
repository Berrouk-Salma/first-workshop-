#include <stdio.h>

int main(){
  
  float temperature ;
  float result;
  printf("saiser température : ");
  scanf("%f",&temperature);
  printf("\n");
result = temperature + 273.15;
  printf("  result en Kelvin est : %.2f",result);

  return 0;
}