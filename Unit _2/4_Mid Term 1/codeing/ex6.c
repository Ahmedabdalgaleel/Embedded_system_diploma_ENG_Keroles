#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//all element of array are duplicated except one a^c^b^x^a^b^c =x
int main()
{
    int size ,c ;
    int unique_number = 0;
    printf("enter array size should be odd \n ");
    scanf("%d",&size);
    int arr[size];
    //printf("\n enter array numbers  ");
    for(c=0;c<size;c++)
    {
        printf("\n enter array numbers  %d=    ",c+1);
        scanf("%d",&arr[c]);
    }
    //check the unique number
    for(c=0;c<size;c++)
    {
        unique_number = unique_number^arr[c];
    }
    printf("\n the unique number in the array is   = %d    \n",unique_number);
}
