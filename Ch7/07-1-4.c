#include <stdio.h>

int main(void)
{
    int dan = 0, i = 0;

    printf("단을 입력해주세요: ");
    scanf("%d", &dan);

    while(i<9)
    {
        printf("%dx%d=%d \n", dan, (9-i), dan*(9-i));
        i++;
    }
    return 0;
}