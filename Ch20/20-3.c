#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arr[5];
    int i;
    for(i=0;i<5;i++)
    {
        arr[i] = rand()%100;
        printf("%d번째 숫자는 %d입니다. \n", i+1, arr[i]);
    }

    return 0;
}