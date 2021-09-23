/*
Aula de 2021-09-20

*/
#include <stdio.h>
#include<stdio.h>
#define MAX 3

int busca_sequencial(int n, int v[MAX], int x);
int busca_sequencial_R(int n, int v[MAX], int x);

int main()
{

}
// Busca sequencial 
int busca_sequencial(int n, int v[MAX], int x)
{
    int k;

    for (k = n-1; k >= 0 && v[k] != x; k--)
        ;

    return k; 

}
// Busca sequencial Recursiva
int busca_sequencial_R(int n, int v[MAX], int x)
{
    if (n == 0)
        return -1;
    else
        if (x == v[n-1])
            return -1;
        else
            return busca_sequencial_R(n -1, v, x);
}