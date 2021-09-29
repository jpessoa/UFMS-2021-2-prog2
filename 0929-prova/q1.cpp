#include <stdio.h>
#define MAX 3

int A (int m, int n)
{
    if (m ==0)
        return n + 1;
    else if (n == 0)
        return A(m -1, 1);
    else
        return A (m -1, A(m, n-1));

}
int main()
{
    int resp;
    resp = A(2,0);
    printf("%d", resp);

}