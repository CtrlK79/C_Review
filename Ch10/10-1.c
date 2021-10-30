#include <stdio.h>

int main(void)
{
    int num;
    printf("숫자를 입력해주세요: ");
    scanf("%d", &num);
    printf("10진수 %d의 16진수 표현은 %x 입니다. \n", num, num);

    return 0;
}