#include <stdio.h>

void Swap3(int * num1, int * num2, int * num3)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    temp = *num3;
    *num3 = *num1;
    *num1 = temp;
}

int main(void)
{
    int num1 = 10, num2 = 20, num3 = 30;
    
    printf("Before : num1 = %d, num2 = %d, num3 = %d \n", num1, num2, num3);
    
    Swap3(&num1, &num2, &num3);

    printf("After : num1 = %d, num2 = %d, num3 = %d \n", num1, num2, num3);

    return 0;
}