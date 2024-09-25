#include <stdio.h>
#include <math.h>

int main(){
 double x1,y1,z1;
 double x2,y2,z2;
 double distance;

 printf("...........start the program.................");
printf("\n");
 printf("calculate  x1 \n " ) ;
 scanf("%d",&x1);
 printf("calculate y1 \n");
 scanf("%d",&y1);
 printf("calculate z1 \n ");
 scanf("%d",&z1);
 printf("calculate x2 \n");
 scanf("%d",&x1);
 printf("calculate y2 \n");
 scanf("%d",&y1);
 printf("calculate z2 \n");
 scanf("%d",&z1);
 printf("calculate distance \n");


printf("..............write the value.............");
printf("\n");
printf("calculate %d : \n ",x1);
printf("calculate %d : \n ",y1);
printf("calculate %d : \n ",z1);
printf("calculate %d : \n ",x2);
printf("calculate %d : \n ",y2);
printf("calculate %d : \n ",z2);



distance = sqrt((x2-x1)*2 + (y2-y1)*2 + (z1-z2)*2 );
printf("calculate %d : \n ",distance);


printf("..............the end.............");




  return 0;
}