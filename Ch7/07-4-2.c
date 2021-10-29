#include <stdio.h>

int main(void)
{
    int n, result = 1;
    printf("자연수를 입력하세요: ");
    scanf("%d", &n);

    for(int i = 0; i < n + 1; i++)
    {
        result *= i;
    }
    
    printf("n! = %d", result);

    return 0;
}