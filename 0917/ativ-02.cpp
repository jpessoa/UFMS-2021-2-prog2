/*
Aula de 2021-09-17

*/
#include <stdio.h>
void imprimeSerie(int a, int b, int k);

int main()
{
    int a, b, k;
    scanf("%d %d %d", a, b, k);
    imprimeSerie(a, b, k);

}

void imprimeSerie(int a, int b, int k)
{
    if (a <= b)
    {
        printf("%d", a);
        imprimeSerie(a+k, b, k);
    }
}
