#include <stdio.h>

int main(void)
{
    int i = 0, j = 0;

    while(i<5){
        while(j<i){
            printf("o");
            j++;
        }
        printf("*\n");
        j = 0;
        i++;
    }
    return 0;
}