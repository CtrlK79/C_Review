#include <stdio.h>

int main(void)
{
    int i = 0, num = 0;
    printf("양의 정수를 입력해주세요: ");
    scanf("%d", &num);
    while(i<num)
    {
        printf("%d \n", 3 * (i + 1));
        i++;
    }

    return 0;
}