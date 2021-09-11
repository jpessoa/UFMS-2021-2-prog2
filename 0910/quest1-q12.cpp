/*

Aula de 2021-09-10
*/
#include<stdio.h>

int main()
{
    int i=10, j=20, a, b, c, d;
    int *pti, *ptj;
    pti = &i;
    ptj = &j;

    
    //a = pti++; 
    j = pti == ptj;
    b = j;
    i = pti-ptj; 
    c = i;
    //pti += ptj;
   // d = pti;

    printf("a = %d \n", a);
    printf("b = %d \n", b);
    printf("c = %d \n", c);
    printf("d = %d \n", d);

 
	return 0;
}

