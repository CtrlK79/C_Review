#include <stdio.h>

int main(void)
{
    //char str[7];
    char *str;
    int i;

    for(i = 0; i < 3; i++)
    {
        //fgets(str, sizeof(str), stdin);
        fgets(str, 7, stdin);
        printf("Read %d: %s \n", i+1, str);
    }

    return 0;
}