#include <stdio.h>

#include <stdio.h>

int main(){
  char prenom[20], nom[20], sexe[20], adressemail[30] ;
  int age ;
printf("----------------Start program ---------------------");
printf("\n");
  printf("saiser votre nom :\n ");
  scanf("%s",nom);
  printf("saiser votre prenom :\n ");
  scanf("%s", &prenom);
  printf("saiser votre sexe :\n ");
  scanf("%s",&sexe);
  printf("saiser votre age :\n ");
  scanf("%d",&age);
  printf("saiser votre adressemail :\n ");
  scanf("%s",&adressemail);

  nom[1] = 'd';

printf("---------------information -------------\n");
printf("\n");
printf("votre nom est : %s \n",nom);
  printf("votre nom est : %c \n",nom[1]);
  printf("votre prenom est : %s \n",prenom);
  printf("votre sexe est : %s \n",sexe);
  printf("votre age est : %d \n",age);
  printf("votre age est : %s \n",adressemail);
  printf("\n");
printf("-----------------fin program ---------------------");
  return 0;
}

   