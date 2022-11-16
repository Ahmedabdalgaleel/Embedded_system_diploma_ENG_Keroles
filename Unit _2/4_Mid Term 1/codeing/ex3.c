#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{

    int start , end ;
    int re ;
    int c,v;
    printf("enter first number and the last number in the interval \n");
    scanf("%d %d",&start,&end);
    for(v=start ;v<end;v++)
    {
        int out=0 ;
        for(c=2;c<v;c++)
        {
            if(v%c==0)
                {
                //printf(" %d not  prime number \n",v);
                out=1;
                break;
                }
        }
        if(out==0)
        printf(" %d  prime number \n",v);

    }
}
