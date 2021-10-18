#include <stdio.h>

int main(void)
{
    int num1 = 10;
    int num2 = 12;
    int result1, result2, result3, result4;

    result1 = (num1==num2);
    result2 = (num1<=num2);
    result3 = (num1>=num2);
    result4 = (num1<num2<num1); // 연산 방향이 왼쪽->오른쪽, 참
    
    printf("result1: %d \n", result1);
    printf("result2: %d \n", result2);
    printf("result3: %d \n", result3);
    printf("result4: %d \n", result4);
    return 0;
}