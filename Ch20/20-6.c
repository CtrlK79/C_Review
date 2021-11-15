#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void RandomNum3(int com[])
{
    srand((int)time(NULL));

    com[0] = rand() % 10;

    com[1] = rand() % 10;
    while(com[1] == com[0])
        com[1] = rand() % 10;
    
    com[2] = rand() % 10;
    while((com[2] == com[0]) || (com[2] == com[1]))
        com[2] = rand() % 10;
}

void StrikeBall(int com[], int user[], int strikeball[])
{
    int i, j;

    strikeball[0] = 0; strikeball[1] = 0;
    
    for(i = 0; i < 3; i++)
    {
        if(com[i] == user[i])
            strikeball[0]++;
        else
        {
            for(j = 0; j < 3; j++)
            {
                if(com[i] == user[j])
                    strikeball[1]++;
            }
        }
    }
}


int main(void)
{
    int com[3];
    int user[3];
    int strikeball[2];
    int i = 1;

    RandomNum3(com);
    printf("Start Game!\n");

    while(1)
    {
        printf("3개의 숫자 선택: ");
        scanf("%d %d %d", user, user+1, user+2);
        StrikeBall(com, user, strikeball);

        printf("%d번째 도전 결과: %d strike, %d ball!!\n", i, strikeball[0], strikeball[1]);

        if(strikeball[0] == 3)
            break;
        i++;
    }

    printf("\nGame Over! \n");
    return 0;
}