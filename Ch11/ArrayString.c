#include <stdio.h>

int main(void)
{
    char str[] = "Good morning!";
    printf("배열 str의 크기: %lu \n", sizeof(str));
    printf("널 문자 문자형 출력: %c \n", str[13]);
    printf("널 문자 정수형 출력: %d \n", str[13]);

    str[12] = '?';
    printf("문자열 출력: %s \n", str);

    return 0;
}