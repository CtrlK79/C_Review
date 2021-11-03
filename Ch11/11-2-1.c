#include <stdio.h>

int main(void)
{
    char str[30];
    int len = 0;
    
    printf("영단어를 입력해주세요: ");
    scanf("%s", str);

    while(str[len] != '\0')
        len++;
    printf("%s의 길이는 %d 입니다. \n", str, len);

    return 0;
}