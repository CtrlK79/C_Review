#include <stdio.h>

int main(void)
{
    int cntA = 0, cntP = 0;
    char word[20];
    FILE * str = fopen("28-4.txt", "rt");
    
    while(1)
    {
        fscanf(str, "%s", word);

        if(word[0] == 'A')
            cntA++;
        else if(word[0] == 'P')
            cntP++;

        if(fgetc(str) == EOF)
            break;
    }

    printf("A로 시작하는 단어의 수: %d \n", cntA);
    printf("P로 시작하는 단어의 수: %d \n", cntP);

    return 0;
}