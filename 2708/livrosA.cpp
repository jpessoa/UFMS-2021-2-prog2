/*
Inacabado
Aula de 2021-08-27
Faca um programa que leia um vetor com os dados de N (N <= 10)livros: 
titulo (maximo de 30 letras), autor (maximo de 30 letras) e ano. 
Leia um valor P e mostre as informacoes de todos os livros com ano abaixo de P. 
Repita esta consulta ate que seja lido um valor P = 0 seja informado. 

- Crie uma funcao para fazer a leitura dos N livros, armazenando-os em um vetor de 
registros. A funcao deve receber como parametro o valor de N e o vetor para armazenar
os dados.

- Crie uma funcao para fazer a listagem dos livros com ano menor que P.*/

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
    int i, n;
    tLivro vetor[TAM];
    printf("Informe a quantidade de livros: ");
    scanf("%d", &n);

    /*leitura dos dados do vetor*/
    for (i = 0; i < n; i++)
    {
        printf("\nInforme o título: ");
        scanf(" %[^\n]", vetor[i].titulo);
        printf("Informe o autor: ");
        scanf(" %[^\n]", vetor[i].autor);
        printf("Informe o ano: ");
        scanf(" %d", &vetor[i].ano);
    }

    /* Impressão */

    for (i = 0; i < n; i++)
    {
        printf("\n");
        printf("\n%s, %s, %d", vetor[i].titulo, vetor[i].autor, vetor[i].ano );
    }
    printf("\n");

//        if (agenda[i].aniver.dia == data.dia && agenda[i].aniver.mes == data.mes)
//            printf("%s, %d", agenda[i].nome , agenda[i].telefone);

	return 0;
}