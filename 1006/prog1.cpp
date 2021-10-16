/*
Página 8
https://ava.ufms.br/pluginfile.php/644455/mod_resource/content/0/aula-eficiencia-slides-P04.pdf
*/

#include <stdio.h>
#define MAX 100
int main(void)
{
    int n, i, C[MAX], x;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    scanf("%d", &C[i]);
    scanf("%d", &x);
    for (i = 0; i < n && C[i] != x; i++)
        ;
    if (i < n)
        printf("%d está na posição %d de C\n", x, i);
    else
        printf("%d não pertence ao conjunto C\n", x);
    return 0;
}