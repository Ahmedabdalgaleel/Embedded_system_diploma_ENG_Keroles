#include <stdio.h>
#include <stdlib.h>


void get_complex(void);
void sum_complex(void);


 struct complex_no{
     int real ;
     int imag ;
 }complex1,complex2,sum;


int main()
{
    get_complex();
    sum_complex();
}
void get_complex(void){
    printf("     for first Number \n");
    printf("  enter real part \t");
    scanf("%d",&complex1.real);
    printf("  enter imaginary part \t");
    scanf("%d",&complex1.imag);

    printf("\n     for second Number \n");
    printf("  enter real part \t");
    scanf("%d",&complex2.real);
    printf("  enter imaginary part \t");
    scanf("%d",&complex2.imag);
}

void sum_complex(void)
{
    sum.real=complex1.real + complex2.real;
    sum.imag=complex1.imag + complex2.imag;
    printf("  the summation of two complex numbers are  \n");
    printf("\n\tsum = %d + %di\n",sum.real,sum.imag);


}

