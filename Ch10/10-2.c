#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("두 개의 숫자를 입력해주세요: ");
    scanf("%d %d", &num1, &num2);
    for(int i = (num1>num2 ? num2 : num1); i <= (num1>num2 ? num1 : num2); i++)
    {
        printf("\n%d단 시작!\n", i);
        for(int j = 2; j < 10; j++)
            printf("%d x %d = %d \n", i, j, i*j);
    }

    return 0;
}