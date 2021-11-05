#include <stdio.h>

void GetNum(int arr[])
{
    for(int i = 0; i < 10; i++)
    {
        printf("입력: ");
        scanf("%d", &arr[i]);
    }
}

void PrintOddEven(int arr[])
{
    for(int i = 0; i < 10; i++)
    {
        if(arr[i]%2 != 0)
            printf("%d ", arr[i]);
    }
    for(int i = 0; i < 10; i++)
    {
        if(arr[i]%2 == 0)
            printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void)
{
    int arr[10];
    GetNum(arr);
    PrintOddEven(arr);

    return 0;
}