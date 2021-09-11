/*
Aula de 2021-09-10
*/
#include<stdio.h>
#define MAX 3


int main()
{
    int v[8] = {54, 36, 13, 74, 15, 2, 44, 13}, *p, i, j;
    p = v;
    i = *p++;
    j = *p;

	printf("p = %n\n", p);
    printf("i = %d\n", i);
    printf("j =%d \n", j);

	return 0;
}

