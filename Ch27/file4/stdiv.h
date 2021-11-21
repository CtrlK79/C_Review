#ifndef __STDIV_H__
#define __STDIV_H__

typedef struct div
{
    int quotient;
    int remainder;
} Div;

Div IntDiv(int num1, int num2);

#endif