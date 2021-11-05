#include <stdio.h>

int GetNum(int * ptr)
{
    printf("10진수 정수 입력: ");
    scanf("%d", ptr);
    return *ptr;
}

void Trans2(int num)
{
    int quetient = num, i = 0;
    int remainder[30];

    while(quetient != 0 )
    {
        remainder[i] = quetient % 2;
        quetient = quetient / 2;
        i++;
    }

    for(int j = 0; j < i; j++)
        printf("%d", remainder[i-j-1]);
    printf("\n");
}

int main(void)
{
    int num;
    GetNum(&num);
    Trans2(num);

    return 0;
}