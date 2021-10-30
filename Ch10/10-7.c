#include <stdio.h>

int main(void)
{
    int n, k = 0;
    int m;
    printf("상수 n 입력: ");
    scanf("%d", &n);
    m = n;
    
    while(m/2)
    {
        m /= 2;
        k++;
    }

    printf("공식을 만족하는 k의 최댓값은 %d \n", k);

    return 0;
}