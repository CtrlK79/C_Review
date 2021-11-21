#include <stdio.h>
#define ADD(X,Y,Z) ((X)+(Y)+(Z))
#define MUL(X,Y,Z) ((X)*(Y)*(Z))

int main(void)
{
    int num[3];

    printf("3개의 정수를 입력하세요: ");
    scanf("%d %d %d", num, num+1, num+2);
    printf("%d + %d + %d = %d \n", num[0], num[1], num[2], ADD(num[0], num[1], num[2]));
    printf("%d * %d * %d = %d \n", num[0], num[1], num[2], MUL(num[0], num[1], num[2]));

    return 0;
}