/*

Aula de 2021-09-10
*/
#include<stdio.h>

int main()
{
    int i, j, *pi, *pj;
   
    pi = &i; 
//    *pj = &j; 
    i = (*pi)+++*pj;
    i = *&*&j; 
    pj = &*&j; 
 
	return 0;
}

