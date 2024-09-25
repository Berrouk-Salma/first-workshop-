#include <stdio.h>

int main(){
 float nombre_1 , nombre_2 ,nombre_3 ; 
 float p1 = 2, p2 = 3, p3 =5;
 float sommepe, moyennepe;
  printf("saiser le nombre 1: ");
  scanf("%f",&nombre_1 );
  printf("saiser le nombre 2 : ");
  scanf("%f",&nombre_2 );
  printf("saiser le nombre 3 : ");
  scanf("%f",&nombre_3 );

 sommep = p1 + p2 + p3;
moyennepe = (nombre_1 * p1 + nombre_2 * p2 + nombre_3 * p3 )/10;

printf("la Moyenne est : %.2f ",moyennepe);

  return 0;
}