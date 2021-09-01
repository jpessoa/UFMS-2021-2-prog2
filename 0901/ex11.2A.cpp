/*
Aula de 2021-09-01
Exemplo do slide
https://ava.ufms.br/pluginfile.php/625335/mod_resource/content/0/ponteiros-funcoes-slides-P04.pdf
*/
#include <stdio.h>
#define MAX 100

int* dois_maiores(int n, int v[MAX], int &pr, int&seg)
{
	int i;
	int ind_maior = 0; // maior está na posicao 0
    int ind_segundo_maior = 0; // segundo maior está na posicao 1

	for(i = 1; i < n; i++)
	{
		if(v[i] > v[ind_maior])
			ind_maior = i;
        else if(v[i] > v[ind_segundo_maior])
			ind_segundo_maior = i;

	}
	// maior está em v[ind_maior]
	return &v[ind_maior], &v[ind_segundo_maior];
}

int main()
{
	int n, i, pr, seg;
	int v[MAX];
	int *p;

	scanf("%d", &n);
	for(i = 0; i < n; i++)
		scanf("%d", &v[i]);

	dois_maiores(n, v, pr, seg);

	printf("Maior: %d // Segundo maior: %d \n", pr, seg);

	return 0;
}
