#include <stdio.h>
// #define STNUM(Y, S, P) YSP
// #define STNUM(Y, S, P) Y S P
// #define STNUM(Y, S, P) ((Y)*100000+(S)*1000+(P))
// #define STNUM(Y, S, P) #Y #S #P // 이때는 전체를 문자열로... %s 써주면 같은 결과 얻을 수 있다.
#define STNUM(Y,S,P) Y##S##P

int main(void)
{
    printf("학번: %d \n", STNUM(10,65,175));
    printf("학번: %d \n", STNUM(10,65,075)); 
    return 0;
}