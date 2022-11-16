#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
  int n, c, k;
  int  counter = 0;

  printf("Enter an integer in decimal number system\t");
  scanf("%d", &n);

  for (c = 15; c >= 0; c--)
  {
    k = n >> c;

    if (k & 1)
       counter ++ ;

  }

  printf(" total number of ones in %d are  =  %d\n",n,counter);

  return 0;
}
