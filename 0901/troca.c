/*
Aula de 2021-09-01
Exemplo do slide
https://ava.ufms.br/pluginfile.php/625335/mod_resource/content/0/ponteiros-funcoes-slides-P04.pdf
*/

//Exemplo em C puro
#include <stdio.h>
void troca(int *a, int *b)
{
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}
int main(void)
{
    int x, y;
    
    scanf("%d%d", &x, &y);
    printf("Antes da troca : x = %d e y = %d\n", x, y);
    troca(&x, &y);
    printf("Depois da troca: x = %d e y = %d\n", x, y);
    return 0;
}