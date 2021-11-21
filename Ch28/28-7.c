#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SAVE_FILE "info.txt"

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
void WriteInfo(Info * users, char file[]);
void ReadInfo(Info * users, FILE * str);

int main(void)
{
    int choice, i;
    char target[20];
    Info * users = (Info *)malloc(sizeof(Info));
    FILE * str = fopen(SAVE_FILE, "rt");
    if(str != NULL)
    {
        ReadInfo(users, str);
    }
    
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
                WriteInfo(users, SAVE_FILE);
                free(users); free(str);
                return 0;
            default:
                puts("Wrong Choice. Please Choose A Number Among 1-5.");
                break;
        }
    }
}

void WriteInfo(Info * users, char file[])
{
    int i;
    FILE * str = fopen(file, "wt");
    
    fprintf(str, "%d \n", users_num); // first character is the number of users
    for(i = 0; i < users_num; i++)
    {
        fprintf(str, "%s \n", users[i].name);
        fprintf(str, "%s \n", users[i].phone);
    }
}

void ReadInfo(Info * users, FILE * str)
{
    int i;

    fscanf(str, "%d", &users_num);
    users = realloc(users, sizeof(Info)*users_num);

    for(i = 0; i < users_num; i++)
    {
        fscanf(str, "%s", users[i].name);
        fscanf(str, "%s", users[i].phone);
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