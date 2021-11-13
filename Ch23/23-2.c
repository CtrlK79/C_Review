#include <stdio.h>

typedef struct
{
    int xpos;
    int ypos;
} Point;

typedef struct
{
    Point lu;
    Point rl;
} Rectangle;

void RectArea(Rectangle * rec)
{
    printf("area: %d\n", ((rec->rl.xpos) - (rec->lu.xpos)) * ((rec->lu.ypos) - (rec->rl.ypos)));
}

void ShowRectPoints(Rectangle * rec)
{
    printf("[%d, %d], [%d, %d], [%d, %d], [%d, %d]\n"
        , rec->lu.xpos, rec->lu.ypos, rec->rl.xpos, rec->lu.ypos
        , rec->lu.xpos, rec->rl.ypos, rec->rl.xpos, rec->rl.ypos);
}

int main(void)
{
    Rectangle rec = {{0, 10}, {5, 0}};
    RectArea(&rec);
    ShowRectPoints(&rec);

    return 0;

    
}