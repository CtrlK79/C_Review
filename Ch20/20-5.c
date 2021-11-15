#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Result(int com, int user)
{
    if (com%3 == (user+1)%3)
        return 1; // win
    else if (com == user)
        return 2; // draw
    else 
        return 0;
}

int main(void)
{
    int com, user, result, win = 0, draw = 0;
    char rsp[3][10] = {"바위", "가위", "보"};

    srand((int)time(NULL));

    while(1)
    {
        com = rand()%3 + 1;
        printf("바위는 1, 가위는 2, 보는 3: ");
        scanf("%d", &user);
        printf("당신은 %s 선택, 컴퓨터는 %s 선택, ", rsp[user-1], rsp[com-1]);
        result = Result(com, user);

        if(result == 1)
        {
            printf("이겼습니다!\n");
            win++;
        }
        else if(result == 2)
        {
            printf("비겼습니다!\n");
            draw++;
        }
        else
        {
            printf("당신이 졌습니다!\n");
            break;
        }
    }
    printf("게임의 결과: %d승 %d무 \n", win, draw);

    return 0;
}