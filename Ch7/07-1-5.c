#include <stdio.h>

int main(void)
{
    double input = 0.0, avg = 0.0;
    int num = 0, i = 0;
    printf("몇 개의 숫자를 입력하시겠습니까?");
    scanf("%d", &num);

    while(i<num)
    {
        printf("숫자를 입력해주세요: ");
        scanf("%lf", &input);
        avg = avg + input/num;
        i++;
    }
    printf("입력한 숫자들의 평균은 %lf 입니다. \n", avg);

    return 0;
}