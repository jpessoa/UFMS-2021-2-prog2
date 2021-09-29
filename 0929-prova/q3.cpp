#include <stdio.h>

int main()
{
    int x, y, *p;

    y = 1; 
    printf("\n%d %d", x, y);
    p = &y; 
    printf("\n%d %d", x, y);
    x = *p; 
    printf("\n%d %d", x, y);
    x = 3; 
    printf("\n%d %d", x, y);
    (*p)++; 
    printf("\n%d %d", x, y);
    --x;
    printf("\n%d %d", x, y);
    p = &x;
    printf("\n%d %d", x, y);
    (*p) = (*p) - 3*y;
    printf("\n%d %d", x, y);
    printf("\n\n%d\n", (x-y));
}