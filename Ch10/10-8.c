#include <stdio.h>
unsigned int Power2(int num);

int main(void)
{
    int num;
    printf("정수 입력: ");
    scanf("%d", &num);
    printf("2의 %d승은 %d \n", num, Power2(num));

    return 0;
}

unsigned int Power2(int num)
{
    if(num == 0)
        return 1;
    else
        return 2 * Power2(num-1);
}