#include <stdio.h>
int MaxAmong3Num(int num1, int num2, int num3);

int main(void)
{
    int num1, num2, num3;
    printf("3개의 정수를 입력하세요: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("%d, %d, %d 중 가장 큰 수는 %d 입니다. \n", num1, num2, num3, MaxAmong3Num(num1, num2, num3));

    return 0;
}

int MaxAmong3Num(int num1, int num2, int num3)
{
    int max;
    max = num1;
    if(num2>max)
        max = num2;
    if(num3>max)
        max = num3;

    return max;
}