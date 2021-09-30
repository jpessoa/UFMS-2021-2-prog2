#include <stdio.h>
#define MAX 100

float q2(int k);

int main()
{
    int v[MAX];
    int n, k;
    // ler n
	scanf("%d", &n);
    // ler k n vezes dentro de um laço para guardar no vetor v os k inteiros
    int i;
	for(i = 0; i <= n-1; i++)
	{
        scanf("\n%d", &v[i]);
	}
    // executar laço para ler n posições do vetor e executar a função recurvisa q2
	for(i = 0; i <= n-1; i++)
	{
        float S;
        S = q2(v[i]);
        printf("\n%.2f", S);
	}
}

float q2(int k)
{
    float aux; 

    if (k == 1)
    {
        aux = 0.0;
    }
    else 
    {
        aux = q2(k-1) + ( (float)(k*k-1) / k ) ; 
    }
    return aux;
}

