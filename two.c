#include <stdio.h>

int main(){
  
  int temperature ;
  float result;
  printf("saiser température : ");
  scanf("%d",&temperature);
  
result = temperature + 273.15;
  printf("  result en Kelvin est : %.2f",result);

  return 0;
}