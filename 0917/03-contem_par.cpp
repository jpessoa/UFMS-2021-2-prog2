/*
Aula de 2021-09-17

Crie um programa para ler um vetor A com n elementos (n <= 10) e imprimir
True se o vetor contém pelo menos um número par e False, caso contrário.
Para isso, o seu programa deve conter uma função recursiva contem_par
que recebe como argumento um vetor de n números inteiros, retorna True se
o vetor contém um número par e False, em caso contrário.

*/
#include <stdio.h>
bool lista_pares(int n, int *V, int *Vpar);

int main()
{
    int i, n, resp;
    scanf("%d", &n);
    int A[20], B[20];
    for (i = 0; i < n; i++)
    {
     scanf("%d", &A[i]);
    }
    resp = lista_pares(n, A, B);
    printf("\nResult = %d", resp);
}

void contem_par(int n, int *V, int *Vpar)
{
    bool temp;
    if (n == 0)
    {
        printf("Zero");
    }
    else if (V[n]%2 == 0)
    {
        printf("\nTem par %d", V[n]);
    }
    else
    {
        printf("\nImpar%d", V[n]);
    }
}
