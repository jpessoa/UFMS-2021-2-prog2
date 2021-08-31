/*
Aula de 2021-08-27
Exemplo do slide
https://ava.ufms.br/pluginfile.php/622361/mod_resource/content/0/aula-ponteiros-P04.pdf
*/
#include <stdio.h>
int main(void)
{
    int i, j, *p, *q;
    p = &i;
    q = p;
    *p = 1;
    printf("i=%d, *p=%d, *q=%d\n", i, *p, *q);
    q = &j;
    i = 6;
    *q = *p;
    printf("i=%d, j=%d, *p=%d, *q=%d\n", i, j, *p, *q);
    return 0;
}
