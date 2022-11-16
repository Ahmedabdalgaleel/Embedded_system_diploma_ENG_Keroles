#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sum_fun(int n);
int main()
{
  int x =sum_fun(5);
  printf("the summation are = %d  ",x);
}
int sum = 0 ;
int sum_fun(int n)
{
    if(n>0)
    {
        sum_fun(n-1);
        sum  =sum + n;
    }
}
