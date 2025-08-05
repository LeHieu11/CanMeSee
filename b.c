#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

typedef struct point
{
    int x;
    int y;
} Point;

typedef struct rectangle
{
    Point upperLeft;
    Point bottomRight;
} Rectangle;

int rectangleArea(const Rectangle rec)
{
    int width = abs(rec.upperLeft.y - rec.bottomRight.y);
    int height = abs(rec.bottomRight.x - rec.upperLeft.x);

    return width * height;
}

int main()
{
    Rectangle firstRectangle;
    
    // set upper
    firstRectangle.upperLeft.x = 1;
    firstRectangle.upperLeft.y = 5;

    // set bottem
    firstRectangle.bottomRight.x = 3;
    firstRectangle.bottomRight.y = 1;
    
    printf("Area = %d\n", rectangleArea(firstRectangle));

    printf("Success!");

    return 0;
}
