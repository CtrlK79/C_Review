#include <stdio.h>

int main(void)
{
    int num1 = 15; // 00000000 00000000 00000000 00001111
    int num2 = 20; // 00000000 00000000 00000000 00010100
    int num3 = num1 & num2; // AND
    int num4 = num1 | num2; // OR
    int num5 = num1 ^ num2; // XOR
    int num6 = ~num1; // NOT
    int num7 = num1<<2; // SHIFT
    int num8 = num1>>2; // SHIFT

    printf("AND 연산의 결과: %d \n", num3);
    printf("OR 연산의 결과: %d \n", num4);
    printf("XOR 연산의 결과: %d \n", num5);
    printf("NOT 연산의 결과: %d \n", num6);
    printf("SHIFT << 2 연산의 결과: %d \n", num7);
    printf("SHIFT >> 2 연산의 결과: %d \n", num8);

    return 0;
    
}