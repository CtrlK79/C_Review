#include <stdio.h>

void MaxAndMin(int arr[], int ** maxdPtr, int ** mindPtr)
{
    *maxdPtr = &arr[0];
    *mindPtr = &arr[0];

    for(int i = 1; i < 5; i++)
    {
        if(**maxdPtr < arr[i])
            *maxdPtr = &arr[i];
        if(**mindPtr > arr[i])
            *mindPtr = &arr[i];
    }
}

int main(void)
{
    int * maxPtr = 0;
    int * minPtr = 0;
    int arr[5] = {5, 7, 1, 9, 2};
    
    MaxAndMin(arr, &maxPtr, &minPtr);

    printf("max: %d, min: %d \n", *maxPtr, *minPtr);

    return 0;
}