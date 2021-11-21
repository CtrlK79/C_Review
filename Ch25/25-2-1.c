#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ReverseSentence(int n)
{
    int i, len;
    char * str = (char *)malloc(sizeof(char)*(n+1));
    printf("%d개 문자 미만으로 구성된 문장을 입력해주세요: ", n);
    fgets(str, n+1, stdin);
    str[strlen(str)-1] = 0;
    len = strlen(str);

    for(i = len-1; i >= 0; i--)
    {
        if(str[i] == ' ')
        {
            printf("%s ", &(str[i+1]));
            str[i] = 0;
        }
    }
    printf("%s", str);
    printf("\n뒤집기 끝! \n");

    free(str);
}

int main(void)
{
    int n;
    
    printf("최대 몇 개의 문자를 입력할까요? ");
    scanf("%d", &n);
    getchar();
    ReverseSentence(n);


    return 0;
}