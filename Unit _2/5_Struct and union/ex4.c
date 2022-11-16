#include <stdio.h>
#include <stdlib.h>

void delay(int x);

void get_student_info(void);
void print_student_info(void);


 struct getinfo{
     char name[10];
     int roll ;
     double mark ;
 }student[10];


int main()
{

    get_student_info();
    print_student_info();
}
void get_student_info(void){
    int x;
    for(x=0;x<3;x++)
    {
        printf("for roll Number  \t");
        scanf("%d",&student[x].roll);
        printf("enter student name \t");
        scanf("%s",student[x].name);
        printf("enter student mark \t");
        scanf(" %lf",&student[x].mark);
        printf(" \n");
    }
}

void print_student_info(void)
{
        int x;
    for(x=0;x<3;x++)
    {
        printf("\t  student info  \t\n");
        printf("\t student roll  \t%d\n",student[x].roll);
        printf("\t student name:  \t%s\n",student[x].name);
        printf("\t student mark:  \t%0.2f\n",student[x].mark);
        printf(" \n");
    }

}

