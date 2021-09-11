/*

Aula de 2021-09-10
*/
#include<stdio.h>

int main()
{
    int a=5, b=12, c;
    int *p;
    int *q;
    p = &a;
    q = &b;
    c = *p + *q;
    printf("c = %d", c);

 
	return 0;
}

