/*
Aula de 2021-08-27
Exemplo do slide
https://ava.ufms.br/pluginfile.php/622361/mod_resource/content/0/aula-ponteiros-P04.pdf
*/
#include <stdio.h>
int main(void)
{
    int i, j, *p1, *p2;
    p1 = &i;
    i = 5;
    j = 2 * *p1 + 3;
    p2 = p1;
    printf("i = %d, &i = %p\n\n", i, &i);
    printf("j = %d, &j = %p\n\n", j, &j);
    printf("&p1 = %p, p1 = %p, *p1 = %d\n", &p1, p1, *p1);
    printf("&p2 = %p, p2 = %p, *p2 = %d\n\n", &p2, p2, *p2);
    return 0;
}
