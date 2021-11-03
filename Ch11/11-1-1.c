#include <stdio.h>

int main(void)
{
    int arr[5];
    int i, max_idx = 0, min_idx = 0, sum = 0;
    
    printf("5개의 정수를 입력해주세요: ");
    scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    for(i = 0; i < 5; i++)
    {
        if(arr[max_idx] < arr[i])
            max_idx = i;

        if(arr[min_idx] > arr[i])
            min_idx = i;

        sum += arr[i];
    }
    printf("최댓값은 %d, 최솟값은 %d, 총 합은 %d 입니다. \n", arr[max_idx], arr[min_idx], sum);

    return 0;
}