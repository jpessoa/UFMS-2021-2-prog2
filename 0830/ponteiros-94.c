/*
Aula de 2021-08-27
Exemplo do slide
https://ava.ufms.br/pluginfile.php/622361/mod_resource/content/0/aula-ponteiros-P04.pdf
*/
#include <stdio.h>
int main(void)
{
    int a, b, c, *ptr;
    a = 3;
    b = 7;
    printf("a=%d, b=%d\n", a, b);
    ptr = &a;
    c = *ptr;
    ptr = &b;
    a = *ptr;
    ptr = &c;
    b = *ptr;
    printf("a=%d, b=%d\n", a, b);
    return 0;
}
