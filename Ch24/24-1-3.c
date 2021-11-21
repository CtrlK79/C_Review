#include <stdio.h>

int main(void)
{
    FILE * src = fopen("mystory.txt", "rt");
    char txt;

    if(src == NULL)
    {
        puts("파일오픈 실패!");
        return -1;
    }

    while((txt = fgetc(src)) != EOF)
    {
        putc(txt, stdout);
    }

    if(feof(src) != 0)
        puts("출력 완료!");
    else
        puts("출력 실패!");
    
    fclose(src);
    return 0;
}