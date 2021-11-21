#include <stdio.h>
#define SQUARE(X) X*X

int main(void)
{
    int num = 20;
    
    /* 정상적 결과 출력 */
    printf("Square of num: %d \n", SQUARE(num));
    printf("Square of -5: %d \n", SQUARE(-5));
    printf("Square of 2.5: %g \n", SQUARE(2.5));

    /* 비정상적 결과 출력 */
    printf("Square of 3+2: %d \n", SQUARE(3+2));
    // 연산결과를 가지고 함수를 호출하게끔 하는 것은 컴파일러. 선행처리기는 그렇게 하지 못함.
    // 3+2*3+2 = 11이 출력 됨.

    /* 수정된 결과 출력 */
    printf("Square of 3+2: %d \n", SQUARE((3+2)));

    return 0;
}