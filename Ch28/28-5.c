#include <stdio.h>

int main(void)
{
    char c1, c2;
    FILE * str1 = fopen("28-5_1.txt", "rt");
    FILE * str2 = fopen("28-5_2.txt", "rt");

    while(1)
    {
        c1 = fgetc(str1);
        c2 = fgetc(str2);
        if(c1 != c2)
        {
            printf("두 개의 파일은 일치하지 않습니다. \n");
            break;
        }
        
        if((c1 == EOF) && (c2 == EOF))
        {
            printf("두 개의 파일은 완전히 일치합니다. \n");
            break;
        }
    }

    return 0;
}