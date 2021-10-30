#include <stdio.h>
char IsPrimeNumber(int num);

int main(void)
{
    int num = 2, cnt = 0;;
    while(cnt<10)
    {
        if(IsPrimeNumber(num))
            cnt++;
        num++;
    }
    printf("\n");

    return 0;
}

char IsPrimeNumber(int num)
{
    for(int i = 2; i < num; i++)
        if(num%i == 0)
            return 0;
    printf("%d ", num);
    return 1;
}