#include <stdio.h>

int main(void)
{
    char ch;

    printf("0~127 사이의 숫자를 입력하세요: ");
    scanf("%s", &ch);

    printf("입력한 숫자에 해당하는 문자는 %c 입니다. \n", ch);

    return 0;
}