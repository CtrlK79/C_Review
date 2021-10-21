#include <stdio.h>

int main(void)
{
    double num1, num2;

    printf("두 실수를 입력하세요: ");
    scanf("%lf %lf", &num1, &num2);
    printf("%lf + %lf = %lf \n", num1, num2, num1+num2);
    printf("%lf - %lf = %lf \n", num1, num2, num1-num2);
    printf("%lf * %lf = %lf \n", num1, num2, num1*num2);
    printf("%lf / %lf = %lf \n", num1, num2, num1/num2);

    return 0;
}