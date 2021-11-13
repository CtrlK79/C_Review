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
    int i;
    struct employee arr[3];

    // enter the data of employees
    for(i=0;i<3;i++)
    {
        printf("\n-----%d번째 직원의 정보 입력-----\n", i+1);
        fputs("이름 입력: ", stdout); fgets(arr[i].name, sizeof(arr[i].name), stdin);
        RemoveBSN(arr[i].name);
        fputs("주민등록번호(000000-0000000) 입력: ", stdout); fgets(arr[i].id, sizeof(arr[i].id), stdin);
        ResetBuffer();
        fputs("급여(정수) 입력: ", stdout); scanf("%d", &(arr[i].salary));
        ResetBuffer();
    }

    printf("-------입력 끝-------");
    
    // show the data of employees
    for(i=0;i<3;i++)
    {
        printf("\n-----%d번째 직원의 정보 출력-----\n", i+1);
        printf("이름: %s \n", arr[i].name);
        printf("주민등록번호: %s \n", arr[i].id);
        printf("급여: %d \n", arr[i].salary);
    }
    return 0;
}