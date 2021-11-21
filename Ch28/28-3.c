#include <stdio.h>
#include <stdlib.h>

typedef struct complex
{
    double real, img;
} Com;

Com * Add(const Com c1, const Com c2)
{
    Com * result = (Com *)malloc(sizeof(Com));
    
    result->real = c1.real+c2.real;
    result->img = c1.img+c2.img;

    return result;
}

Com * Mul(const Com c1, const Com c2)
{
    Com * result = (Com *)malloc(sizeof(Com));

    result->real = c1.real*c2.real - c1.img*c2.img;
    result->img = c1.real*c2.img + c1.img*c2.real;

    return result;
}

int main(void)
{
    int i;
    Com arr[2];
    Com * add;
    Com * mul;
    for(i = 0; i < 2; i++)
    {
        printf("복소수%d 입력[실수 허수]: ", i+1);
        scanf("%lf %lf", &arr[i].real, &arr[i].img);
    }
    add = Add(arr[0], arr[1]);
    mul = Mul(arr[0], arr[1]);
    printf("합의 결과] 실수: %g, 허수 %g \n", add->real, add->img);
    printf("곱의 결과] 실수: %g, 허수 %g \n", mul->real, mul->img);

    return 0;
}
