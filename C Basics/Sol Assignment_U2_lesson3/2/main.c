#include <stdio.h>
#include <stdlib.h>


//#define ex1
//#define ex2
//#define ex3
//#define ex4
//#define ex5
//#define ex6
//#define ex7
#define ex8

int main()
{

 ////////////////////////////////////////////////////////////
                //EX1
                //:write a program to check odd or even
    #ifdef ex1
    int x , y ;
    printf("\n Enter an integer you want to check = ");
    scanf("%d",&x);
    y = x % 2 ;
    if(y==0)
        printf("\n %d is even ",x);
    else
        printf("\n %d is odd ",x);

    #endif // ex1

///////////////////////////////////////////////////////////
                //EX2:
                //vowels  a / e / i / o / u
    #ifdef ex2
    char x ;
    printf("\n Enter a alphabet  you want to check = ");
    scanf("%c",&x);
    switch(x)
    {
        case 'a' :
        case 'A' :
        printf("\n %c is a Vowels ",x);
        break ;

        case 'e' :
        case 'E' :
        printf("\n %c is a Vowels ",x);
        break ;

        case 'i' :
        case 'I' :
        printf("\n %c is a Vowels ",x);
        break ;

        case 'o' :
        case 'O' :
        printf("\n %c is a Vowels ",x);
        break ;

        case 'u' :
        case 'U' :
        printf("\n %c is a Vowels ",x);
        break ;

        default :
        printf("\n %c is a Consonant  ",x);
        break ;
    }
    #endif // ex2
///////////////////////////////////////////////////////////
                //EX3:
                //
    #ifdef ex3
    float first , second , third ,larger;
    printf("Enter the first no: ");
    scanf("%f",&first);
    printf("Enter the second no: ");
    scanf("%f",&second);
    printf("Enter the third no: ");
    scanf("%f",&third);
    larger = (first>second)?first:second ;
    if(larger > third)
         printf(" Largest Number is =  %0.2f",larger);
    else
        printf(" Largest Number is =  %0.2f",third);


    #endif // ex3
///////////////////////////////////////////////////////////
                //EX4:
                //
    #ifdef ex4
    int Number ;

    printf("Enter your no: ");
    scanf("%d",&Number);
    if(Number  > 0)
            printf("You Entered a +ve number = %d",Number);
    else if(Number  < 0)
            printf("You Entered a -ve number = %d",Number);
    else
            printf("You Entered a Zero");

    #endif // ex4
///////////////////////////////////////////////////////////
                //EX6:
                //
    #ifdef ex5
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c is an alphabet.", c);
    else
        printf("%c is not an alphabet.", c);

    return 0;

    #endif // ex5
///////////////////////////////////////////////////////////
                //EX6:
                //Sum
    #ifdef ex6
    int c ,Number;
    int sum = 0;
    printf("Enter a character: ");
    scanf("%d", &Number);
    int temp = Number ;
    for (c = 1;c<=Number;c++)
    {
        sum+=temp;
        temp--;
    }

    printf("Sum =  %d",sum);

    #endif // ex6

///////////////////////////////////////////////////////////
                //EX7:
                //Factorial
    #ifdef ex7
    int c ,Number ,temp;
    int Fact = 1;
    printf("Enter a character: ");
    scanf("%d", &Number);
    if(Number < 0)
        printf("Error Factorial of Negative Number Doesn's Exist. \n");
    else if (Number == 0)
        printf("Factorial =  1");
    else
        {
            temp = Number ;
            for(c=1;c<=Number;c++)

               {
                Fact *= temp ;
                temp -- ;
               }
             printf("Factorial =  %d",Fact);
        }
    #endif // ex7

///////////////////////////////////////////////////////////
                //EX8:
                //
    #ifdef ex8
    float first , second  ,Result;
    char operator1 ;
    printf("Enter the first no: ");
    scanf("%f",&first);
    printf("Enter the operator + or - or / or * : ");
    scanf("  %c",&operator1);
    printf("Enter the second no: ");
    scanf("  %f",&second);

    switch(operator1)
    {
        case '*':
        Result = first*second ;
        printf("\n \t%0.2f %c %0.2f  = %0.2f \n",first , operator1 ,second,Result);
        break;

        case '/':
        Result = first/second ;
        printf("\n \t%0.2f %c %0.2f  = %0.2f \n",first , operator1 ,second,Result);
        break;

        case '+':
        Result = first+second ;
        printf("\n \t%0.2f %c %0.2f  = %0.2f \n",first , operator1 ,second,Result);
        break;

        case '-':
        Result = first-second ;
        printf("\n \t%0.2f %c %0.2f  = %0.2f \n \t",first , operator1 ,second,Result);
        break;

        default :
        printf("\n \tWrong operator \n \t");
        break ;
    }





    #endif // ex8
    return 0;
}
