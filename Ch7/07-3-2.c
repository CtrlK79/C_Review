#include <stdio.h>

int main(void)
{
    int num = 0, sum = 0;

    do
    {
        sum += num;
        num++;num++;
    } while(num<=100);
    
    printf("0이상 100이하 짝수의 합: %d \n", sum);

    return 0;
}