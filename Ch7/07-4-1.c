#include <stdio.h>

int main(void)
{
    int min, max, sum = 0;
    printf("큰 정수를 입력하세요: ");
    scanf("%d", &max);
    printf("작은 정수를 입력하세요: ");
    scanf("%d", &min);

    for(int i = min; i < max + 1 ; i++)
    {
        sum += i;
    }

    printf("결과: %d \n", sum);

    return 0;
}