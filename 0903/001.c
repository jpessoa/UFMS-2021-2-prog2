/*
Aula de 2021-09-03
Exemplo do slide
https://ava.ufms.br/pluginfile.php/625335/mod_resource/content/0/ponteiros-funcoes-slides-P04.pdf
*/

#include <stdio.h>
#define DIM 10  // Era 100 mas diminui para 10 

int main (void)
{
    int v[DIM], soma, *p;

    soma = 0;
    for (p = &v[0]; p <= &v[DIM-1]; p++)
        soma = soma + *p;
}