#include <stdio.h>

int main(void)
{
    char ch;
    
    printf("알파벳을 입력하세요: ");
    scanf("%c", &ch);

    printf("입력한 문자에 해당하는 숫자는 %d 입니다. \n", ch);

    return 0;
}