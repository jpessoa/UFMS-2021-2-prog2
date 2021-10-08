#include <stdio.h>
#define MAX 20

struct tipoA{
	char nome[MAX+1];
	int op1, op2;
};

// PROTOTIPO DAS FUNCOES
int buscaIguais (int n,  tipoA   *v);

int main()
{
	int n;
	tipoA v[MAX];

	// leitura de n
	scanf("%d", &n);
	// leitura do vetor
 	int i ;
	for(i = 0; i <= n-1; i++)
	{
		 scanf(" %[^\n]", v[i].nome);
		 scanf("%d", &v[i].op1);
		 scanf("%d", &v[i].op2);
	}
	// chamada da funcao para calcular a quantidade de vezes da mais escolhida
	int zz;

	zz = buscaIguais (n,  v);


	// chamada da funcao para verificar aluno que informou as 2 optativas iguais


	return 0;
}


// CORPO DAS FUNCOES
int buscaIguais (int n,  tipoA   *v)
{
	int i ;
	for(i = 0; i <= n-1; i++)
	{
		if (v[i].op1 == v[i].op2)
			{
				printf("%s", v[i].nome);
			}
 		 //printf("%s", v[i].nome);
		 //printf("%d", v[i].op1);
		 //printf("%d", v[i].op2);
	}
	return 0;
}