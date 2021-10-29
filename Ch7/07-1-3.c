#include <stdio.h>

int main(void)
{
    int num = 1, sum = 0;

    while(num!=0)
    {
        printf("숫자를 입력해주세요: ");
        scanf("%d", &num);
        sum += num;
    }
    printf("합은 %d 입니다. \n", sum);
    return 0;
}