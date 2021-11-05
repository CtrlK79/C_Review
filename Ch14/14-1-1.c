#include <stdio.h>

double CallByVal(double num)
{
    return num * num;
}

void CallByRef(double * ptr)
{
    *(ptr) *= *(ptr);
}

int main(void)
{
    double num = 14.2;
    printf("call-by-value : num = %lf, return of function = %lf \n", num, CallByVal(num));
    printf("Before call call-by-reference function: num = %lf \n", num);
    CallByRef(&num);
    printf("Aefore call call-by-reference function: num = %lf \n", num);

    return 0;
}