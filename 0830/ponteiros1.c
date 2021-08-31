/*
Aula de 2021-08-27
Exemplo do slide
https://ava.ufms.br/pluginfile.php/622361/mod_resource/content/0/aula-ponteiros-P04.pdf
*/
#include <stdio.h>
int main(void)
{
    char c, *p;

    p = &c;
    c = 'a';
    printf("&c = %p c = %c\n", &c, c);
    printf("&p = %p p = %p *p = %c\n\n", &p, p, *p);

    c = '/';
    printf("&c = %p c = %c\n", &c, c);
    printf("&p = %p p = %p *p = %c\n\n", &p, p, *p);

    *p = 'Z';
    printf("&c = %p c = %c\n", &c, c);
    printf("&p = %p p = %p *p = %c\n\n", &p, p, *p);
    
    return 0;
}