#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int x , y  ;
    printf(" enter number of element\t");
    scanf("%d",&y);
    int array[y];
    for(x=0;x<y;x++)
    {
        printf(" %d Enter Number =\t",1+x);
        scanf("%d",&array[x]);
    }
    for(x=y-1;x>=0;x--)
    {
        printf(" %d Enter Number =\t  %d \n",1+x,array[x]);
    }
}

