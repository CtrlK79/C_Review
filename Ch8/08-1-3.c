#include <stdio.h>

int main(void)
{
    int kor, eng, mat;
    double avg;
    printf("국어, 영어, 수학 점수를 차례대로 입력하세요:");
    scanf("%d %d %d", &kor, &eng, &mat);

    avg = ((double)kor + eng + mat)/3;
    printf("평균은 %lf \n", avg);

    return 0;
}