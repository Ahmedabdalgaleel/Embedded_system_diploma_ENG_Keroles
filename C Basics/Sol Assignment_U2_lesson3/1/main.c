#include <stdio.h>
#include <stdlib.h>

//#define ex1
//#define ex2
//#define ex3
//#define ex4
//#define ex5
#define ex6

int main()
{
//////////////////////////////////////////////////////////////////////////////
  #ifdef ex1
                    //EX1:
                    //Write C Program to Print a Sentence
                    //i should see the Console as following:
                    //##########Console-output###
                    //C Programming
                    //###########################

    printf("C Programming\n");

    #endif // ex1
//////////////////////////////////////////////////////////////////////////////
    #ifdef ex2
                    //EX2:
                    //Write C Program to Print a Integer Entered by a User
                    //i should see the Console as following:
                    //##########Console-output###
                    //Enter a integer: 25
                    //You entered: 25

    char x ;

    printf("Enter a integer: ");
    scanf("%d",&x);
    printf("You entered:  %d\n",x);
    #endif // ex2
//////////////////////////////////////////////////////////////////////////////
    #ifdef ex3
                    //EX:3
                    //Write C Program to Add Two Integers
                    //i should see the Console as following:
                    //##########Console-output###
                    //Enter two integers: 12
                    //11
                    //Sum: 23

    int first , second ,sum = 0;
    printf("Enter the first no: ");
    scanf("%d",&first);
    printf("Enter the first no: ");
    scanf("%d",&second);
    sum = first + second ;
    printf("sum = %d",sum);
    #endif // ex3
//////////////////////////////////////////////////////////////////////////////
    #ifdef ex4
                    //EX4:
                    //Write C Program to Multiply two Floating Point Numbers
                    //i should see the Console as following:
                    //##########Console-output###
                    //###########################
                    //Enter two numbers: 2.4
                    //1.1
                    //Product: 2.640000

    float first , second ,Multiply = 0;
    printf("Enter the first no: ");
    scanf("%f",&first);
    printf("Enter the first no: ");
    scanf("%f",&second);
    Multiply = first * second ;
    printf("sum = %f",Multiply);
    #endif // ex4

//////////////////////////////////////////////////////////////////////////////
    #ifdef ex5
                   // EX5:
                   // Write C Program to Find ASCII Value of a Character
                   // #########Console_output######
                   // Enter a character: G
                   // ASCII value of G = 71
    char x ;
    printf("Enter the char that u want to find it's ASCII: ");
    scanf("%c",&x);
    printf("ASCII value of G = %d",x);
    #endif // ex5

//////////////////////////////////////////////////////////////////////////////
    #ifdef ex6
                   // EX6:
                   // Write Source Code to Swap Two Numbers
                   // #########Console_output######
                   // Enter value of a: 1.20
                   // Enter value of b: 2.45

                   // After swapping, value of a = 2.45
                   // After swapping, value of b = 1.2
    float first , second ,temp ;
    printf("Enter the first no: ");
    scanf("%f",&first);
    printf("Enter the second no: ");
    scanf("%f",&second);
    temp = first ;
    first = second ;
    second = temp ;
    printf("Enter the first no: %f\n",first);
    printf("Enter the second no: %f\n",second);

    ////////////////////or///////////
/*
    float first , second;
    printf("Enter the first no: ");
    scanf("%f",&first);
    printf("Enter the second no: ");
    scanf("%f",&second);
    printf("Enter the first no: %f\n",second);
    printf("Enter the second no: %f\n",first);*/
    #endif // ex6
    return 0;
}
