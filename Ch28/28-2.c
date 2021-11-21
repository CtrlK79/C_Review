#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct bookcatalogue
{
    char author[30];
    char title[30];
    int pages;
} BookCatalogue;

BookCatalogue * GenerateBookCatalogue(int n)
{
    BookCatalogue * list;
    list = (BookCatalogue *)malloc(sizeof(BookCatalogue) * n);

    return list;
}

void GetBooksInfo(BookCatalogue * list, int n)
{
    int i = 0;

    puts("도서 정보 입력");
    for(i = 0; i < n; i++)
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
}

void ShowBooksInfo(BookCatalogue * list, int n)
{
    int i = 0;

    puts("도서 정보 출력");
    for(i = 0; i < n; i++)
    {
        printf("저자: %s \n", list[i].author);
        printf("제목: %s \n", list[i].title);
        printf("페이지 수: %d \n", list[i].pages);
    }

}

int main(void)
{
    int n;
    BookCatalogue * list;
    printf("몇 권의 책을 저장하시겠습니까?");
    scanf("%d", &n);
    getchar();

    list = GenerateBookCatalogue(n);
    GetBooksInfo(list, n);
    puts("");
    ShowBooksInfo(list, n);
    
    return 0;
}