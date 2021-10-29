#include <stdio.h>

int main(void)
{
    int i = 0, j = 0, sol = 0;

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++)
        {
            if(i + j == 9)
                printf("A = %d, Z = %d \n", i, j);
        }
    }

    return 0;
}