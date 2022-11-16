#include <stdio.h>
#include <stdlib.h>

void delay(int x);

void get_student_info(void);
void print_student_info(void);


 struct getinfo{
     char name[10];
     int roll ;
     double mark ;
 }student;


int main()
{
    get_student_info();
    print_student_info();
}
void get_student_info(void){

    printf("enter student name \t");
    scanf("%s",student.name);
    delay(500);
    printf("enter student roll \t");
    scanf("%d",&student.roll);
    delay(500);
    printf("enter student mark \t");
    scanf(" %lf",&student.mark);
}

void print_student_info(void)
{
    printf("\t student info  \t\n");
    printf("\t student name  \t%s\n",student.name);
    printf("\t student roll  \t%d\n",student.roll);
    printf("\t student mark  \t%0.2f\n",student.mark);

}

void delay(int x)
{
    int c ;
    for(c=0;c<x;c++)
    {

    }
}
