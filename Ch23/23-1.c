#include <stdio.h>

typedef struct
{
    int xpos;
    int ypos;
} Point;

void SwapPoint(Point * ppos1, Point * ppos2)
{
    Point tmp;
    tmp.xpos = ppos1->xpos; tmp.ypos = ppos1->ypos;
    ppos1->xpos = ppos2->xpos; ppos1->ypos = ppos2->ypos;
    ppos2->xpos = tmp.xpos; ppos2->ypos = tmp.ypos;
}

int main(void)
{
    Point pos1 = {2, 4};
    Point pos2 = {5, 7};

    SwapPoint(&pos1, &pos2);

    printf("pos1: [%d, %d], pos2: [%d, %d] \n", pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);

    return 0;
}