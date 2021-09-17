/*
Aula de 2021-09-17

Crie um programa para ler um vetor A com n elementos (n <= 10) e imprimir
True se o vetor contém pelo menos um número par e False, caso contrário.
Para isso, o seu programa deve conter uma função recursiva contem_par
que recebe como argumento um vetor de n números inteiros, retorna True se
o vetor contém um número par e False, em caso contrário.

*/
#include <stdio.h>
bool contem_par(int n, int *V);

int main()
{
    int i, n, resp;
    scanf("%d", &n);
    int A[10];
    for (i = 0; i < n; i++)
    {
     scanf("%d", &A[i]);
    }
    resp = contem_par(n, A);
    printf("\nResult = %d", resp);
}

bool contem_par(int n, int *V)
{
    int i;
    
    for (i = 0; i < n; i++)
    {
        if (V[i]%2 == 0)
        {
            //printf("\nTem par");
            return true;
        }
    }
    return false;
}