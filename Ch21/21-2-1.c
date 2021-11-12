#include <stdio.h>


int main(void)
{   
    int i = 0, sum = 0;
    char str[30];

    puts("문자열을 입력하세요: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        if('0' <= str[i] && str[i] <= '9')
        {
            sum += (str[i]-48);
            // putchar(str[i]); : // debugging code
        }
        i++;
    }

    printf("문자열 중 숫자의 총 합은 %d 입니다. \n", sum);

    return 0;
}