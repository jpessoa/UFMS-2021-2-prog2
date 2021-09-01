/*
Aula de 2021-09-01
Exemplo do slide
https://ava.ufms.br/pluginfile.php/625335/mod_resource/content/0/ponteiros-funcoes-slides-P04.pdf
*/

#include <stdio.h>
#define MAX 100

void max_min(int n, int vetor[MAX], int &max, int &min)
{
	int i;

	max = min = vetor[0];
	for(i = 1; i < n; i++)
	{
		if(vetor[i] > max)
			max = vetor[i];
		else if(vetor[i] < min)
			min = vetor[i];
	}	
}

int main()
{
	int n, i;
	int v[MAX];
	int maior, menor;

	scanf("%d", &n);
	for(i = 0; i < n; i++)
		scanf("%d", &v[i]);

	max_min(n, v, maior, menor);

	printf("Maior: %d, Menor: %d\n", maior, menor);

	return 0;
}