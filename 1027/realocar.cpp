#include <stdio.h>
#include <stdlib.h>

void imprime(int n, int *v);

int main (void)
{
	int *p, 	// ponteiro para armazenar endereco da memoria alocada
		a,		// tamanho do vetor 
		i;		// indice

	a = 30;
	p=(int *)calloc(a, sizeof(int));
	if (!p)
	{
		printf ("** Erro: Memoria Insuficiente **\n");
		return 0;
	}
	for (i=0; i<a ; i++)
		p[i] = i*i;

	imprime(a, p);
	//REDIMENSIONANDO O VETOR*/
	a = 100;
	p = (int *)realloc (p, a*sizeof(int));
	if (!p) { printf ("\nERRO!\n"); return 0; }


	imprime(a, p);

	for (i=30; i<a; i++)
		p[i] = a*i*(i-6);

	imprime(a, p);

	return 0;
}

void imprime(int n, int *v)
{
	for(int i = 0; i < n; i++)
		printf("%d ", v[i]);


	printf("\n\n\n");
}