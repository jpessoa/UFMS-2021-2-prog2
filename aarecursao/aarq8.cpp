/*
Lista avaliativa sobre recursão (entrega até 30/09)
https://ava.ufms.br/mod/quiz/view.php?id=331022

Considere a função recursiva ‘func’ definida por

func(1) = 1
func( n ) = (n - 1) * func(n - 1)

Quais são os valores de func(4) e func(5), respectivamente?
*/

#include <stdio.h>
int func(int n);

int main()
{
    int o = 4, m;
    m = func(o);
    printf("\nfunc(4) = %d", m);
    o = 5;
    m = func(o);
    printf("\nfunc(5) = %d\n", m);
}


int func(int n)
{
	if (n == 1)
	{
        return 1;
	}
    else
    {
        return (n - 1) * func(n - 1);
    }
}