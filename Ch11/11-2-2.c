#include <stdio.h>

int main(void)
{
    char str1[30], str2[30];
    int len = 0;
    printf("영단어를 입력하세요: ");
    scanf("%s", str1);

    while(str1[len] != '\0')
        len++;
    for(int i = 0; i < len; i++)
        str2[i] = str1[len-i-1];
    str2[len] = '\0';

    printf("뒤집힌 단어: %s \n", str2);

    return 0;
    
}