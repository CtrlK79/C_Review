#include <stdio.h>

int main(void)
{
    int sec;
    printf("초(second) 입력: ");
    scanf("%d", &sec);
    printf("[h:%d, m:%d, s:%d \n", sec/3600, (sec%3600)/60, sec%60);

    return 0;
}