#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[])
{
    int len = strlen(str);
    str[len-1] = 0;
}

int main(void)
{
    char str1[20];
    char str2[20];
    char str3[40];

    puts("str1 입력: ");
    fgets(str1, sizeof(str1), stdin);
    RemoveBSN(str1);
    puts("str2 입력: ");
    fgets(str2, sizeof(str2), stdin);
    RemoveBSN(str2);

    strncpy(str3, str1, sizeof(str3));
    strncat(str3, str2, strlen(str2));

    puts(str3);

    return 0;
}