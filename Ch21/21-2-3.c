#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[])
{
    int len = strlen(str);
    str[len-1] = 0;
}

char* NameAgeSeparate(char str[])
{
    int i;
    
    for(i = 0; i < strlen(str); i++)
    {
        if(str[i] == ' ')
        {
            str[i] = 0;
            break;
        }
    }

    return &str[i+1];
}

int main(void)
{
    char str1[30];
    char str2[30];
    char * name1, * name2, * age1, * age2;

    puts("첫 번째 사람의 이름과 나이를 입력하세요: ");
    fgets(str1, sizeof(str1), stdin);
    RemoveBSN(str1);
    puts("두 번째 사람의 이름과 나이를 입력하세요: ");
    fgets(str2, sizeof(str2), stdin);
    RemoveBSN(str2);

    name1 = str1;
    name2 = str2;
    age1 = NameAgeSeparate(str1);
    age2 = NameAgeSeparate(str2);

    if(!strcmp(name1, name2))
        printf("서로 이름이 %s로 같습니다. \n", name1);
    if(!strcmp(age1, age2))
        printf("서로 나이가 %s로 같습니다. \n", age1);

    return 0;

}