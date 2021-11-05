#include <stdio.h>

int* DesSort(int arr[], const unsigned int len)
{
    int temp;
    
    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < len-i-1; j++)
        {
            if(arr[j] < arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    return arr;
}

void PrintIntArray(const int arr[], unsigned int len)
{
    for(int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(void)
{
    int arr[] = {3, 2, 4, 1};
    int * arr_des;

    printf("정렬 전: ");
    PrintIntArray(arr, sizeof(arr)/sizeof(int));
    
    arr_des = DesSort(arr, sizeof(arr)/sizeof(int));

    printf("After des sort: ");
    PrintIntArray(arr_des, sizeof(arr)/sizeof(int));

    return 0;
}