#include <stdio.h>

int main(){
  
  float C;
 
  printf("saiser C  : ");
  scanf("%f",&C  );
  
if (C < 0)
{
   printf("  l'état de l'eau est : Solide");
}else if(C>=0 && C <100 ) {
  printf("  l'état de l'eau est : Liquide");
}else if (C>= 100){
  printf("  l'état de l'eau est : Gaz");
}



  return 0;
}