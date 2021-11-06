#include <stdio.h>

void ComplexFuncOne(int ** arr1, int *(*arr2)[5]){}
void ComplexFuncTwo(int *** arr1, int ***(*arr2)[5]){}
// int ***(*arr)[5] 
// (*arr) : arr은 포인터!
// int *** : 이 자료형을 가리키는 포인터!
// [5] : 길이는 5!

int main(void)
{
    int * arr1[3];
    int * arr2[3][5];
    int ** arr3[5];
    int *** arr4[3][5];

    ComplexFuncOne(arr1, arr2);
    ComplexFuncTwo(arr3, arr4);
    
    return 0;
}