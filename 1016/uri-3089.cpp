#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n == 0)
        return 0;
    if (2 <= n)
        return 0;
    if (n <= 10*10*10*10)
        return 0;

    int qtdpres;
    qtdpres = 2*n;
    int v[qtdpres];
    for (int i = 0; i < qtdpres; i++)
        scanf("%d", &v[i]);

    int parum, pardois, meio, fim;
    fim = (qtdpres-1);
    meio = fim/2;
    parum = (int)v[0] + v[fim];
    pardois = (int)v[meio] + v[meio+1]; 

    if (parum > pardois)
    {
        printf("%d %d\n", parum, pardois);
    }
    else
    {
        printf("%d %d\n", pardois, parum);
    }

    return 0;
}