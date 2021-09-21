#include<stdio.h>
#define TAM 20

bool temPar(int n, int *V)
{
    if(n == 0)
        return false;
    else if(V[n-1] %2 == 0)
        return true;
    else 
        return temPar(n-1, V);
}

bool temPar2(int n, int *V)
{
    if(n == 1){
        if(V[n-1]%2 == 0)
            return true;
        else return false;
    }
    else if(V[n-1] %2 == 0)
        return true;
    else 
        return temPar(n-1, V);
}

int main()
{
    int n;
    int vetor[TAM];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)

        scanf("%d", &vetor[i]);

    if(temPar(n, vetor))
        printf("Sim\n");
    else
        printf("Não\n");

    printf("\n");
    return 0;
}
