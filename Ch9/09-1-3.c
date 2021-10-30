#include <stdio.h>
void FibonacciSequence(int num);

int main(void)
{
    int num;
    printf("얼마나 출력할까요?");
    scanf("%d", &num);
    FibonacciSequence(num);

    return 0;
}

void FibonacciSequence(int num)
{
    int seq1 = 0, seq2 = 1, temp;
    for(int i = 0; i<num; i++){
        printf("%d ", seq1);
        temp = seq2;
        seq2 += seq1;
        seq1 = temp;
    }
    // printf("%d\n", i); this line raises error!
    printf("\n");
}