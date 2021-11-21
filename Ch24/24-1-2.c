#include <stdio.h>

int main(void)
{
    FILE * des = fopen("mystory.txt", "at");

    if(des == NULL)
    {
        puts("파일오픈 실패!");
        return -1;
    }
    
    fputs("#즐겨먹는 음식: 짬뽕, 탕수육 \n", des);
    fputs("#취미: 축구 \n", des);

    fclose(des);
    return 0;
}