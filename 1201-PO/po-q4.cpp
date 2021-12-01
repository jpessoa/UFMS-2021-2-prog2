#include <stdio.h> 
#include <stdlib.h>

int H(int m, int n);

int main()
{
    int m, n;
  
    //printf("Digite um numero(zero p/encerrar): ");
    scanf("%d %d", &m, &n);
    H(m, n);

    printf("\n");

    return 0;
}

int H(int m, int n)
{
    printf("\nEntrou");
    if(n == 1)
        return m+1;
    else if(m == 1)
        return n+1;
    else
        return H(m, n-1) + H(m-1, n);
}
