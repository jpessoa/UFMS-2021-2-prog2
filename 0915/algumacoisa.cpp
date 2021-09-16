/*
Aula de 2021-09-15
https://ava.ufms.br/pluginfile.php/633348/mod_resource/content/0/algumacoisa.cpp
*/
#include <stdio.h>

void imprime_alguma_coisa(int n);

int main()
{
	int i;
	for(i = 1; i <= 10; i++)
	{
		imprime_alguma_coisa(i);
		printf("\n");
	}
	return 0;
}

void imprime_alguma_coisa(int n)
{
	if(n != 0)
	{
		imprime_alguma_coisa(n/2);
		//printf("i=%d -> %d ", n, n%2);
        printf("%d", n%2);
	}
}