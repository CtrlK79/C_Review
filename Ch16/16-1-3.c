#include <stdio.h>

int main(void)
{
    int score[5][5];
    char * name[4] = {"철희", "철수", "영희", "영수"};

    for(int i = 0; i < 4; i++)
    {
        printf("%s의 국어, 영어, 수학, 국사 점수를 입력해주세요: ", name[i]);
        scanf("%d %d %d %d", &score[i][0], &score[i][1], &score[i][2], &score[i][3]);
        score[i][4] = score[i][0] + score[i][1] + score[i][2] + score[i][3];
        score[4][0] += score[i][0]; score[4][1] += score[i][1]; score[4][2] += score[i][2]; score[4][3] += score[i][3];
    }
    score[4][4] = score[4][0] + score[4][1] + score[4][2] + score[4][3];

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
            printf("%d ", score[i][j]);
        printf("\n");
    }
    printf("\n");

    return 0;
}