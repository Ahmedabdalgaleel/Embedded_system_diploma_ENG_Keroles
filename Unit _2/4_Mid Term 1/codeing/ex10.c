#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//1101110
int main()
{
    int r ;
    printf("enter a number");
    scanf("%d",&r);
    int c = 0 ;
    while(r!=0)
        {
            r&=(r<<1) ;
            c++;
        }
    printf("  %d",c  );
}

