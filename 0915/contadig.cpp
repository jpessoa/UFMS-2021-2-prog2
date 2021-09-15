/*
Aula de 2021-09-15
Exercício 2
https://ava.ufms.br/pluginfile.php/632384/mod_resource/content/0/exercicios.pdf
Resposta errada
*/
#include <stdio.h>

void contadig(int n);

int main()
{
	int i, num;
    scanf("%d", &num);
	for(i = 1; i <= num; i++)
	{
		contadig(i);
		printf("\n");
	}
	return 0;
}

void contadig(int n)
{
	if(n != 0)
	{
		contadig(n -1);
        printf("%d", n);
	}
}