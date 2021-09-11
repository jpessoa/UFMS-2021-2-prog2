/*

Aula de 2021-09-10
*/
#include<stdio.h>

int main()
{
    int x, y, *p;
    y = 0;
    p = &y;
    x = *p;
    x = 4;
    (*p)++;
    --x;
    (*p) += x;
    //printf("x=%d  y=%d *p=%d", x, y, *p);

    printf("x = %d \n", x);
    printf("y = %d \n", y);
    printf("*p = %d \n", *p);


	return 0;
}

