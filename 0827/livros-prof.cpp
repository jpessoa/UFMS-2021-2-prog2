
#include <stdio.h>

// constantes
#define TAM 10
#define MAX 30

// definicao de tipos
struct tLivro
{
	char titulo[MAX], autor[MAX];
	int ano;
};

void leitura(tLivro vetor[TAM], int n); 

void listagem(tLivro vetor[TAM], int n, int P);

// funcao principal
int main()
{
	tLivro livros[TAM];
	int n;
	int P;

	printf("Qtde de livros: ");
	scanf("%d", &n);

	// leitura
	leitura(livros, n);

	// consulta
	printf("Digite um ano para consultar:");
	scanf("%d", &P);
	while(P != 0)
	{
		listagem(livros, n, P);

		printf("Digite um ano para consultar:");
		scanf("%d", &P);
	}

	return 0;
}

void leitura(tLivro vetor[TAM], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		scanf(" %[^\n]", vetor[i].titulo);
		scanf(" %[^\n]", vetor[i].autor);
		scanf("%d", &vetor[i].ano);
	}
}

void listagem(tLivro vetor[TAM], int n, int P)
{
	int i;

	for(i = 0; i < n; i++)
	{
		if(vetor[i].ano < P)
			printf("%s %s %d", vetor[i].titulo, vetor[i].autor, vetor[i].ano);
	}

}

