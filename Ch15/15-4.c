#include <stdio.h>

int GetString(char str[])
{
    int len = 0;

    printf("문자열 입력: ");
    scanf("%s", str);
    
    while(str[len] != '\0')
        len++;

    return len;
}

int PalOrNot(char str[], unsigned int len)
{
    for(int i = 0; i < len/2; i++)
    {
        if(str[i] != str[len-i-1])
        {
            printf("회문이 아닙니다.\n");
            return 0;
        }
    }
    printf("회문 입니다.\n");
    return 1;
}

int main(void)
{
    char str[30];
    int len = GetString(str);
    PalOrNot(str, len);

    return 0;
}