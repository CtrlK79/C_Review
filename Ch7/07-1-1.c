#include <stdio.h>

int main(void)
{
    int num = 0;
    printf("몇 번 반복할까요? ");
    scanf("%d", &num);

    while(num>0)
    {
        printf("Hello world! \n");
        num--;
    }
    return 0;
}