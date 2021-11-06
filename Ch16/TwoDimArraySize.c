#include <stdio.h>

int main(void)
{
    int arr1[3][4];
    int arr2[7][9];
    printf("세로3, 가로4: %lu \n", sizeof(arr1));
    printf("세로7, 가로9: %lu \n", sizeof(arr2));
    

    return 0;
}