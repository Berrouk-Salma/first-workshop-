#include <stdio.h>

int main()
{
  int a, b;
  printf("saiser le nombre a : ");
  scanf("%d", &a);
  printf("saiser le nombre b : ");
  scanf("%d", &b);

  printf(" la some %d\n", a + b);
  printf(" subtraction %d\n", a - b);
  printf(" multiplication %d\n", a * b);
  if (b != 0)
  {
    printf("%d\n", a / b);
  }
  else
  {
    printf("devision de %d sur %d 2est imposible", a ,b);
  }

  return 0;
}