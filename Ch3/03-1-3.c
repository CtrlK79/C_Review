#include <stdio.h>

int main(void)
{
    int num, result;
    
    printf("num: ");
    scanf("%d", &num);

    result = num * num;

    printf("%d \n", result);
    return 0;
}