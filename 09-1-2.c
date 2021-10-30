#include <stdio.h>
double CelToFah(double Cel);
double FahToCel(double Fah);

int main(void)
{
    char ForC;
    double temp1, temp2;

    printf("화씨: F, 섭씨: C를 입력하세요");
    scanf("%c", &ForC);
    printf("몇 도 입니까?");
    scanf("%lf", &temp1);

    if(ForC=='C')
        temp2 = CelToFah(temp1);
        printf("입력한 섭씨 %lf도는 화씨 %lf도 입니다.\n", temp1, temp2);
    else if(ForC=='F')
        temp2 = FahToCel(temp1);
        printf("입력한 화씨 %lf도는 섭씨 %lf도 입니다.\n", temp1, temp2);
    else{
        printf("Error!");
        return 0;
    }
}

double CelToFah(double Cel)
{
    return 1.8 * Cel + 32;
}

double FahToCel(double Fah)
{
    return (Fah - 32) / 1.8;
}