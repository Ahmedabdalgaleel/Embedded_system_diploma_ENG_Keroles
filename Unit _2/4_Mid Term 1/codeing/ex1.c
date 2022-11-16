#include <stdio.h>
#include <stdlib.h>


int sum(int x)
{
    static unsigned short new_x = 0;
    int rew;
    if(x!=0)
    {
        rew = x%10;
        new_x +=rew ;
        sum(x/10);
    }
    else
        return 0;
    return new_x;
}

int main()
{
    int n ;
    printf("enter number \n");
    scanf("%d",&n);
    printf("sum all digits are = %d",sum(n));

}
