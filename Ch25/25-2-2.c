#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    int * arr = (int*)malloc(sizeof(int)*5);

    i = 0;
    do
    {
        printf("정수를 입력하세요(-1 입력시 종료): ");
        scanf("%d", &arr[i]);
        if((i != 1) && (i%3 == 1))
            arr = (int*)realloc(arr, sizeof(arr)+sizeof(int)*3);
        i++;
    }while(arr[i-1] != -1);

    for(j = 0; j < i; j++)
        printf("%d ", arr[j]);
    printf("\n");

    free(arr);
    return 0;
}