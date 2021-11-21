#include <stdio.h>

/*
int FileSize(FILE * fp)
{
    int i = 0;
    long starting_point = ftell(fp);

    while(fgetc(fp) != EOF)
        i++;
    
    fseek(fp, starting_point, SEEK_SET);

    return i;
}
*/

long FileSize(FILE * fp)
{
    long fpos;
    long fsize;

    fpos = ftell(fp);
    fseek(fp, 0, SEEK_END);
    fsize = ftell(fp);
    fseek(fp, fpos, SEEK_SET);
    
    return fsize;
}

int main(void)
{
    FILE * fp = fopen("text.txt", "rt");

    printf("File size: %li \n", FileSize(fp));

    fclose(fp);
    return 0;
}