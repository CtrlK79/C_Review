#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int users_num;

typedef struct info
{
    char name[20];
    char phone[20];
} Info;

void Menu();
void PrintInfo(Info user);
void Insert(Info * users);
void Delete(Info * users, char target[]);
void Search(Info * users, char target[]);
void PrintAll(Info * users);

int main(void)
{
    int choice;
    char target[20];
    Info * users = (Info *)malloc(sizeof(Info));
    
    while(1)
    {
        Menu();
        scanf("%d", &choice);
        getchar();

        switch(choice)
        {
            case 1:
                puts("[ INSERT ]");
                Insert(users);
                break;
            case 2:
                puts("[ DELETE ]");
                printf("Input Target Name: ");
                scanf("%s", target);
                getchar();
                Delete(users, target);
                break;
            case 3:
                puts("[ SEARCH ]");
                printf("Input Target Name: ");
                scanf("%s", target);
                getchar();
                Search(users, target);
                break;
            case 4:
                puts("[ PRINT ALL ]");
                PrintAll(users);
                break;
            case 5:
                puts("[ Exit Program]");
                free(users);
                return 0;
            default:
                puts("Wrong Choice. Please Choose A Number Among 1-5.");
                break;
        }
    }
}

void Menu()
{
    puts("*****MENU*****");
    puts("1. Insert");
    puts("2. Delete");
    puts("3. Search");
    puts("4. Print All");
    puts("5. Exit");
    printf("Choose the item: ");
}

void PrintInfo(Info user)
{
    printf("Name: %s\t\tTel: %s", user.name, user.phone);
}

void Insert(Info * users)
{
    users_num++;
    users = realloc(users, sizeof(Info)*users_num);

    printf("Input Name: ");
    scanf("%s", users[users_num-1].name);
    getchar();
    printf("Input Tel Number: ");
    scanf("%s", users[users_num-1].phone);
    getchar();
}

void Delete(Info * users, char target[])
{
    int i;
    int target_num;

    for(i = 0; i < users_num; i++)
    {
        if(!strcmp(users[i].name, target))
        {
            target_num = i;
            break;
        }
    }

    for(i = target_num; i < users_num-1; i++)
    {
        strcpy(users[i].name, users[i+1].name);
        strcpy(users[i].phone, users[i+1].phone);
    }
    users_num--;
    users = realloc(users, sizeof(Info)*(users_num));

}

void Search(Info * users, char target[])
{
    int i;

    for(i = 0; i < users_num; i++)
    {
        if(!strcmp(users[i].name, target))
        {
            PrintInfo(users[i]);
            return;
        }
    }
}

void PrintAll(Info * users)
{
    int i;

    for(i = 0; i < users_num; i++)
    {
        PrintInfo(users[i]);
        puts("");
    }
}