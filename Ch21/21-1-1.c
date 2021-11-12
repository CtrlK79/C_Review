#include <stdio.h>

int main(void)
{
    int ch;

    ch = getchar();
    if('A' <= ch && ch <= 'Z')
        ch += 32;
    else if('a' <= ch && ch <= 'z')
        ch -= 32;
    else
    {
        printf("알파벳이 아닙니다. \n");
    }

    putchar(ch);

    return 0;
}