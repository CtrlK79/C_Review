#include <stdio.h>

int main(void)
{
    int num = 0, sum = 0, i = 0;
    while(i<5){
        printf("%d번째 정수를 입력하세요: ", i+1);
        scanf("%d", &num);
        while(num<1){
            printf("정수가 1보다 작습니다. 다시 입력하세요: ");
            scanf("%d", &num);
        }
        sum += num;
        i++;
    }
    printf("5개 정수의 합은 %d 입니다. \n", sum);

    return 0;
}