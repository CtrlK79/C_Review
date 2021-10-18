#include <stdio.h>

int main(void)
{
    int num1 = 10;
    int num2 = (num1--)+2; // --는 다음 줄로 넘어가야 적용된다.

    printf("num1: %d \n", num1);
    printf("num2: %d \n", num2);
    return 0;
}