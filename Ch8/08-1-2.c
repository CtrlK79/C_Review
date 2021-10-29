#include <stdio.h>

int main(void)
{
    int num1, num2, result;
    printf("두 정수를 입력하세요: ");
    scanf("%d %d", &num1, &num2);

    result = num1>num2 ? num1-num2 : num2-num1;
    printf("큰 수에서 작은수를 뺀 값은 %d \n", result);

    return 0;
}