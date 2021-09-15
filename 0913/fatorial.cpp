/*
Aula de 2021-09-13
*/
#include<stdio.h>
int fatorial(int n)
{
    int result; 
    if (n <=1)
        result = 1;
    else
        result = n * fatorial(n-1);
        //printf("\n n = %d // result = %d", n, result);
    return result;
}

int main()
{
    int numero = 5, fat;
    //printf("Digite o numero a ser calculado o fatorial : ");
	//scanf("%d", numero);
    fat = fatorial(numero);
    printf("\n Fatorial de %d é %d", numero, fat);
 
	return 0;
}

