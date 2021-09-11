/*
Aula de 2021-09-10
*/
#include<stdio.h>

#define DIM 5
int main()
{

int v[DIM] = {6, 76, 2, 12, 5}, i, soma, *p;

soma = 0;
p = v;
for (i = 0; i < DIM; i++)
   soma = soma + p[i];

printf("\n soma: %d", soma);

return 0;
}