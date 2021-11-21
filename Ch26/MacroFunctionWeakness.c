#include <stdio.h>
#define DIFF_ABS(X,Y) ( (x)>(y) ? (x)-(y) : (y)-(x))

int main(void)
{
    // int x = 0, y = 0;
    // 매크로는 그냥 저 형태로 대체하는 것이기 때문에, 위의 //를 제거하면 아래의 결과값이 모두 0이 되어버린다.
    printf("두 값의 차: %d \n", DIFF_ABS(5,7));
    printf("두 값의 차: %g \n", DIFF_ABS(1.8,-1.4));

    return 0;
}