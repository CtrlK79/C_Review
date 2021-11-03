#include <stdio.h>

int main(void)
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int* ptr1 = arr;
    int* ptr2 = &arr[5];
    int temp;

    for(int i = 0; i < 3; i++)
    { 
        temp = *(ptr1+i);
        *(ptr1+i) = *(ptr2-i);
        *(ptr2-i) = temp;
    }
    for(int i = 0; i < 6; i++)
        printf("%d ", arr[i]);
    printf("\n");
    
    return 0;
}