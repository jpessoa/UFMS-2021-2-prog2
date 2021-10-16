#include <stdio.h>

int main()
{
    // Ler a quantidade de netos
    int n;
    scanf("%d", &n);

    // Ler o valor dos presentes
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

    //printf("\nP1 = %d // v0 = %d // vqtd = %d", parum, v[0] , v[fim]);
    //printf("\nP2 = %d // meio = %d // meio+1 = %d\n\n", pardois,  v[meio],  v[meio+1]);

    if (parum > pardois)
    {
        printf("%d %d", parum, pardois);
    }
    else
    {
        printf("%d %d", pardois, parum);
    }

    return 0;
}


/*
    // Varrer o vetor buscando o mais caro e o mais barato
    int caro, barato;
    caro = 0;
    barato = 1000000;
    for (int i = 0; i < 2*n; i++)
    {
        if (v[i] > caro)
            caro = v[i];
        if (v[i] < barato)
            barato = v[i];
    }

    printf("\nCaro = %d", caro);
    printf("\nBarato = %d", barato);
    printf("\nSoma = %d\n\n", caro+barato);

*/