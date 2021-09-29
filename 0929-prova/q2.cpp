#include <stdio.h>
#define MAX 10

int fat(int n);
int maximo(int n, int v[MAX]);
float q2(int k);

int main()
{
    int 

}

float q2(int k)
{
    if (k = 1)
        return 0;
    else 
    {
        if (k == 2)
            return (q2(1) + 3/2);
        else
        {
            if (k == 3)
                return (q2(2) + 8/3);
            else
            {
                if (k == 4)
                    return (q2(3) + 15/4);
            }
        }

    }

}


int maximo(int n, int v[MAX])
{
    int aux;

    if (n == 1)
        return v[0];
    else {
        aux = maximo(n-1, v);
        if (aux > v[n-1])
            return aux;
        else
            return v[n-1];
    }
}







int fat(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fat(n -1);
}
