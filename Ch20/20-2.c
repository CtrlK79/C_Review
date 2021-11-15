#include <stdio.h>

void SnailShell(int n)
{
    int arr[n][n];
    int i, j, num = 1;

    for (i = 0; i < (2 * n - 1); i++)
    {
        if (i%4 == 0)
        {
            for(j = ((i/4-1) > 0 ? i/4-1:0); j < (n-i/4); j++)
                arr[i/4][j] = num++;
        }
        else if (i%4 == 1)
        {
            for(j = i/4+1; j < (n-i/4); j++)
                arr[j][n-i/4-1] = num++;
        }
        else if (i%4 == 2)
        {
            for(j = i/4+1; j < (n-i/4); j++)
                arr[n-i/4-1][n-j-1] = num++;
        }
        else if (i%4 == 3)
        {
            for(j = i/4+1; j < (n-i/4-2); j++)
                arr[n-j-1][i/4] = num++;
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            printf("%4d", arr[i][j]);
        printf("\n");
    }
}


int main(void)
{
    int n;

    printf("자연수를 입력하세요: ");
    scanf("%d", &n);

    SnailShell(n);

    return 0;
}