#include <stdio.h>

int main(void)
{
    int i, j;
    for(i = 2; i<10; i++){
        if(i%2 != 0)
            continue;
        for(j = 1; j<i+1; j++)
            printf("%dx%d=%d\n", i, j, i*j);
    }

    return 0;
}