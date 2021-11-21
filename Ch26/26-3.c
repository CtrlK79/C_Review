#include <stdio.h>
#define MAX(X,Y) ((X)>(Y) ? (X):(Y))

int main(void)
{
    int x = 10, y = 20;
    printf("%d와 %d중 큰 값은 %d \n", x, y, MAX(x, y));

    return 0;
}