/*
Aula de 2021-09-15
Exercício 2
https://ava.ufms.br/pluginfile.php/632384/mod_resource/content/0/exercicios.pdf
Resposta errada
*/
#include <stdio.h>

void impressao(int n);

int main()
{
	int i, num;
    scanf("%d", &num);
	for(i = 1; i <= num; i++)
	{
		impressao(i);
		printf("\n");
	}
	return 0;
}

void impressao(int n)
{
	if(n != 0)
	{
		impressao(n - 1);
        printf("%d", n);
	}
}