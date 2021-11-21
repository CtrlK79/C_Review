#include <stdio.h>
#define PI 3.141595
#define AREA(R) ((R)*(R)*PI)

int main(void)
{
    double rad = 3.513;
    printf("반지름 %g인 원의 넓이: %g \n", rad, AREA(rad));

    return 0;
}