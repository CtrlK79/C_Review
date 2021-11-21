#include <stdio.h>

void AddFun(void)
{
    static int num; // 이 함수 내부에서만 접근 가능, 0으로 초기화
    printf("num = %d \n", num);
    num++;
}

int main(void)
{
    AddFun();
    AddFun();
    AddFun();
    // printf("num = %d \n", num); // error

    return 0;
}