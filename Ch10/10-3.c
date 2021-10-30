#include <stdio.h>

int GCD(int num1, int num2);

int main(void)
{
    int num1, num2;
    printf("두 자연수를 입력하세요: ");
    scanf("%d %d", &num1, &num2);
    printf("%d와 %d의 최대공약수는 %d \n", num1, num2, GCD(num1, num2));

    return 0;
}

int GCD(int num1, int num2)
{
    if(num1==0 || num2==0)
        return (num1>num2 ? num1 : num2);
    else{
        if(num1>num2)
            return GCD(num1-num2, num2);
        else
            return GCD(num1, num2-num1);
    }
}