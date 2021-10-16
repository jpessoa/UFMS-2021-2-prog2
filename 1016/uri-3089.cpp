#include <stdio.h>

void main()
{
    int n;
    scanf("%d", &n);

    int qtdpres;
    qtdpres = 2*n;
    int v[qtdpres];
    for (int i = 0; i < qtdpres; i++)
        scanf("%d", &v[i]);

    int parum, pardois, meio, fim;
    fim = (qtdpres-1);
    meio = fim/2;
    parum = v[0] + v[fim];
    pardois = v[meio] + v[meio+1]; 

    if (parum > pardois)
    {
        printf("%d %d\n", parum, pardois);
    }
    else
    {
        printf("%d %d\n", pardois, parum);
    }

    //return 0;
}