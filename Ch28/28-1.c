#include <stdio.h>
#include <string.h>

typedef struct bookcatalogue
{
    char author[30];
    char title[30];
    int pages;
} BookCatalogue;

int main(void)
{
    int i;
    BookCatalogue list[3];

    puts("도서 정보 입력");
    for(i = 0; i < 3; i++)
    {
        printf("저자: ");
        fgets(list[i].author, sizeof(list[i].author), stdin);
        (list[i].author)[strlen(list[i].author)-1] = 0;
        printf("제목: ");
        fgets(list[i].title, sizeof(list[i].title), stdin);
        (list[i].title)[strlen(list[i].title)-1] = 0;
        printf("페이지 수: ");
        scanf("%d", &list[i].pages);
        getchar();
    }

    puts("");
    puts("도서 정보 출력");
    for(i = 0; i < 3; i++)
    {
        printf("저자: %s \n", list[i].author);
        printf("제목: %s \n", list[i].title);
        printf("페이지 수: %d \n", list[i].pages);
    }

    return 0;
}