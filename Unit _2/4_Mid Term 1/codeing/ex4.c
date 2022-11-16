#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int rec(int x);
int main()
{
    int n ;
    int reminder ;
    printf("enter number  ");
    scanf("%d",&n);
    rec(n);



}
int v  ;


int rec(int x)
{
    v=x%10;
    if(x>=9)
    {
        printf("number reversed    ");
        printf("%d",v);
        rec(x/10);
    }
    else
        printf("%d",x);

}

