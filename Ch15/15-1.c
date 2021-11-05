#include <stdio.h>

void OddPrint(const int ptr[], unsigned int len)
{
    int i;
    printf("홀수 출력: ");
    for(i = 0; i < len; i += 2)
        printf("%d ", *(ptr+i));
    printf("\n");
}

void EvenPrint(const int ptr[], unsigned int len)
{
    int i;
    printf("짝수 출력: ");
    for(i = 1; i < len; i += 2)
        printf("%d ", *(ptr+i));
    printf("\n");
}

int main(void)
{
    int arr[10];
    int i;
    
    for(i = 0; i < 10; i++)
    {
        printf("입력: ");
        scanf("%d", &arr[i]);
    }
    OddPrint(arr, sizeof(arr)/sizeof(int));
    EvenPrint(arr, sizeof(arr)/sizeof(int));

    return 0;
}