/*
Lista avaliativa sobre recursão (entrega até 30/09)
https://ava.ufms.br/mod/quiz/view.php?id=331022

Considere o pseudocódigo da seguinte função recursiva

inteiro F1(x: inteiro)
    se x = 1 então
        retorne -x
    senão
        retorne -5 * F1(x - 1) + x

Qual é o valor retornado pela função se ela for chamada com x = 4?
*/

#include <stdio.h>
int func1(int x);

int main()
{
    int n = 4, m;
    m = func1(n);
    printf("%d", m);
}

int func1(int x)
{
	if (x == 1)
	{
        return -x;
	}
    else
    {
        return -5 * func1(x -1) + x;
    }
}