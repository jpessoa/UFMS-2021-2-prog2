#include <stdio.h> 
#include <stdlib.h>

int H(int m, int n);

int main()
{
    int m, n, cont;
    cont = 0;
  
    scanf("%d %d", &m, &n);
    cont = H(m, n);

    printf("\nCont : %d ", cont);
    printf("\n");

    return 0;
}

int H(int m, int n)
{
    printf("\nEntrou M=%d N= %d", m, n);
    if(n == 1)
        return m+1;
    else if(m == 1)
        return n+1;
    else
        return H(m, n-1) + H(m-1, n);
}
