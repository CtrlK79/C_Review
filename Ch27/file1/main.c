#include <stdio.h>
extern void Increment(void);
extern int GetNum(void);

int main(void)
{
    printf("num: %d \n", GetNum());
    Increment();
    printf("num: %d \n", GetNum());
    Increment();
    printf("num: %d \n", GetNum());

    return 0;
}

// gcc -o [FileName] main.c func.c num.c 이런식으로 컴파잃 해주어야 한다.