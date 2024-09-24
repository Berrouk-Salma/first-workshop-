#include <stdio.h>

int main(){
 int a , b ; 
  printf("saiser le nombre a : ");
  scanf("%d",&a  );
  printf("saiser le nombre b : ");
  scanf("%d",&b  );

  printf("%d\n",a+b);
  printf("%d\n",a-b);
  printf("%d\n",a*b);
  printf("%d\n",a/b);

  if(b != 0 ){
 printf("%.2f",(float) a / (float)b);
  }else printf("devision de 0 est imposible");
  



  return 0;
}