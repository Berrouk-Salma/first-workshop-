#include <stdio.h>

int main(){
  
  int kilometres_par_heure    ;
  float metres_par_seconde;
  printf("saiser la vitesse   : ");
  scanf("%d",&kilometres_par_heure   );
  printf("\n");
metres_par_seconde = kilometres_par_heure  * 0.27778;
  printf("  result en mètres par seconde est : %.2f",metres_par_seconde);

  return 0;
}