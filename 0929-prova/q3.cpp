#include <stdio.h>

int main()
{
    int x, y, *p;

    //Antes de apresentar a resposta final da questão, mostre também os valores de x e de y após a execução de cada linha.
    y = 1; 
    printf("\n%d %d", x, y);
    
    p = &y; 
    printf("\n%d %d", x, y);
    
    x = *p; 
    printf("\n%d %d", x, y);
    
    x = 3; 
    printf("\n%d %d", x, y);
    
    (*p)++; 
    printf("\n%d %d", x, y);
    
    --x;
    printf("\n%d %d", x, y);
    
    p = &x;
    printf("\n%d %d", x, y);
    
    (*p) = (*p) - 3*y;
    printf("\n%d %d", x, y);
    
    //Qual será o valor da expressão (x - y) ao final do trecho de código abaixo?
    printf("\n\n%d\n", (x-y));
}