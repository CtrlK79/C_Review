#include <stdio.h>

int main(void)
{
    FILE * des = fopen("mystory.txt", "wt");

    if(des == NULL)
    {
        puts("파일오픈 실패!");
        return -1;
    }
    
    fputs("#이름: 윤성우 \n", des);
    fputs("#주민번호: 900208-1012589 \n", des);
    fputs("#전화번호: 010-1111-2222 \n", des);

    fclose(des);
    return 0;
}