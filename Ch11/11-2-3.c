#include <stdio.h>

int main(void)
{
    char str[30];
    int len = 0, max_idx = 0;
    printf("영단어를 입력하세요: ");
    scanf("%s", str);

    while(str[len] != '\0')
        len++;

    for(int i = 0; i < len; i++)
        if(str[max_idx] < str[i])
            max_idx = i;
    printf("아스키 코드가 가장 큰 문자: %c \n", str[max_idx]);
    
    return 0;
}