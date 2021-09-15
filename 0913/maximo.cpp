/*
inacabado
Aula de 2021-09-13
*/
#include<stdio.h>
#define MAX 5

int maximo(int n, int v[MAX])
{
    int aux;
    if (n == 1)
        return v[0];
    else 
    {
        aux = maximo(n-1, v);
        if (aux > v[n-1])
            return aux;
        else
            return v[n-1];
    } 
}

int main()
{
    int numero = 3, maior, v[MAX];
    //printf("Digite o numero a ser calculado o fatorial : ");
	//scanf("%d", numero);
    maior = maximo(numero, v);
    printf("\n O maior número é %d", maior);
 
	return 0;
}

