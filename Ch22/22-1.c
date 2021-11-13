#include <stdio.h>
#include <string.h>

struct employee
{
    char name[20];
    char id[15];
    int salary;
};

void ResetBuffer(void)
{
    while(getchar() != '\n');
}

void RemoveBSN(char str[])
{
    int i;
    int len = strlen(str);
    
    for(i = 0; i < len; i++)
    {
        if(!str[i])
            str[i] = 0;
    }
}

int main(void)
{
    struct employee person1;

    fputs("이름 입력: ", stdout); fgets(person1.name, sizeof(person1.name), stdin);
    RemoveBSN(person1.name);
    fputs("주민등록번호(000000-0000000) 입력: ", stdout); fgets(person1.id, sizeof(person1.id), stdin);
    ResetBuffer();
    fputs("급여(정수) 입력: ", stdout); scanf("%d", &(person1.salary));

    printf("이름: %s \n", person1.name);
    printf("주민등록번호: %s \n", person1.id);
    printf("급여: %d \n", person1.salary);

    return 0;
}