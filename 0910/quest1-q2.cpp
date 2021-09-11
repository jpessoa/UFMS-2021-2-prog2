/*

Aula de 2021-09-10
*/
#include<stdio.h>



int main()
{
    int v[8] = {54, 24, 13, 74, 15, 2, 44, 13}, *p, i, j, k;
    p = v;
    i = *++p;
    j = *p++;
    k = ++*p;

	printf("p = %n \n", p);
    printf("i = %d \n", i);
    printf("j = %d \n", j);
    printf("k = %d \n", k);

	return 0;
}

