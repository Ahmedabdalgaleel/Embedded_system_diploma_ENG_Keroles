#include <stdio.h>
#include <stdlib.h>

//#define ex1 //sum 2d array
//#define ex2
//#define ex3
//#define ex4
//#define ex5
#define ex6
//#define ex7

int main()
{

    #ifdef ex1

    float first_mat[2][2];
    float second_mat[2][2];
    float sum_mat[2][2];

    printf("\nenter the element of the first matrix\n");
    int i ,x ;
    for(x=0;x<2;x++)
    {
        for(i=0;i<2;i++)
        {
            printf("first matrix %d %d \t",x+1,i+1);
            scanf("%2f",&first_mat[x][i]);
        }
    }
    printf("\nenter the element of the second matrix\n");
    for(x=0;x<2;x++)
    {
        for(i=0;i<2;i++)
        {
            printf("second matrix %d %d \t",x+1,i+1);
            scanf("%2f",&second_mat[x][i]);
        }
    }

    for(x=0;x<2;x++)
    {
        for(i=0;i<2;i++)
        {
            sum_mat[x][i] = first_mat[x][i]+second_mat[x][i] ;
        }
    }

    for(x=0;x<2;x++)
    {
        for(i=0;i<2;i++)
        {
            printf(" \nSummation matrix %d %d = %0.2f ",x+1,i+1,sum_mat[x][i]);
         }
    }
    #endif // ex1


    #ifdef ex2
    float array_ave[10];
    int x , y  ;
    float sum=0.0;
    printf(" enter number of element\t");
    scanf(" %d",&y);
    for(x=0;x<y;x++)
    {
        printf(" %d Enter Number =\t",1+x);
        scanf(" %f",&array_ave[x]);
    }
    for(x=0;x<y;x++)
    {
        sum += array_ave[x];
    }
    printf(" average of th numbers entered is = %0.2f ",(sum/y));
    #endif // ex2

    #ifdef ex3
    int row  , colume ;
    printf(" enter matrix size row  and colume \n");
    scanf(" %d %d",&row,&colume);
    printf(" \n enter matrix size row  %d \t",row);
    printf(" \n enter matrix size colume  %d \t",colume);

    float mat[row][colume];

    printf("\nenter the element of the matrix\n");
    int i ,x ;
    for(x=0;x<row;x++)
    {
        for(i=0;i<colume;i++)
        {
            printf(" matrix %d %d \t",x+1,i+1);
            scanf("%2f",&mat[x][i]);
        }
    }
    printf("\n --------------------------------");
    printf("\n element of the matrix Entered\n");

    for(x=0;x<row;x++)
    {
        for(i=0;i<colume;i++)
        {
            printf(" %0.1f \t" , mat[x][i]);
        }
        printf("\n");
    }
    printf("\n --------------------------------");
    printf("\n transpos \n");
    for(x=0;x<colume;x++)
    {
        for(i=0;i<row;i++)
        {
            printf(" %0.1f \t" , mat[i][x]);
        }
        printf("\n");
    }

    #endif // ex3



    #ifdef ex4
    int array_in[50 ];
    int no ;
    printf("enter no of element  \n");
    scanf("%d",&no);
    int i ,x ;
    for(x=0;x<no;x++)
    {
         printf("numbers Entered  %d= \t",x+1);
         scanf("%d",&array_in[x]);
    }
    int EX_no ;
    printf("enter Number you want to add  \n");
    scanf("%d",&EX_no);
    int loc ;
    printf("enter the Location  \n");
    scanf("%d",&loc);
    for(x=no;x>=loc;x--)
    {
        array_in[x]= array_in[x-1] ;
        if(x==loc)
        {
            array_in[loc-1]= EX_no ;
        }

    }
    printf(" adding  Number = %d  in index = %d \n",EX_no,loc);
   for(x=0;x<no+1;x++)
    {
         printf("numbers Entered  %d \t",x+1);
         printf("%d\n",array_in[x]);
    }
    #endif // ex4


    #ifdef ex5
    int array_in[50 ];
    int no ;
    printf("enter Number of elements  \n");
    scanf("%d",&no);
    int x ;
    for(x=0;x<no;x++)
    {
         printf("numbers Entered  %d = \t",x+1);
         scanf("%d",&array_in[x]);
    }
    printf("Enter the Element to be Searched  \n");
    int number ;
    scanf("%d",&number);
    for(x=0;x<no;x++)
    {
        if(number==array_in[x])
            printf("Number Found at location %d",x+1);
    }
    #endif // ex5



    return 0;
}
