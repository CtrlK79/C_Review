#include <stdio.h>

int main(void)
{
    int budget;
    printf("현재 당신이 소유하고 있는 금액: ");
    scanf("%d", &budget);

    for(int cream = 1; cream <= budget/500; cream++)
    {
        for(int shrimp = 1; shrimp <= (budget - cream*500)/700; shrimp++)
        {
            for(int coke = 1; coke <= (budget - cream*500 - shrimp*700)/400; coke++)
            {
                if(budget == cream*500 + shrimp*700 + coke*400)
                    printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개 \n", cream, shrimp, coke);
            }
        }
    }
    printf("어떻게 구입하시겠습니까?\n");

    return 0;
}