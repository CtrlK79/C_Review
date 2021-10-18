#include <stdio.h>

int main(void)
{
    int num1, num2, num3, result;
    
    printf("num1: ");
    scanf("%d", &num1);
    printf("num2: ");
    scanf("%d", &num2);
    printf("num3: ");
    scanf("%d", &num3);

    result = num1 * num2 + num3;

    printf("%dx%d+%d=%d \n", num1, num2, num3, result);
    return 0;
}