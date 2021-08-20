/*Escreva um programa para realizar operacoes sobre um vetor, conforme menu a seguir

[1] - Inserir vetor
[2] - Imprimir vetor
[3] - Remover o menor elemento
[4] - Sair

Opcao 1 - o usuario informa n, a quantidade de elementos a inserir no vetor, seguido dos 
elementos. Considere que n <= 50. Sempre que a opcao 1 for escolhida o usuario podera 
informar um novo vetor. Utilize uma funcao 'leitura' para realizar a leitura dos n
elementos do vetor

Opcao 2 - o programa deve imprimir o vetor atual com n elementos. Utilize a funcao 
'impressao' para realizar a impressao dos elementos

Opcao 3 - o programa deve imprimir o menor elemento, bem como remove-lo do vetor. 
Observe que, com a remocao de um elemento, o valor de n deve ser alterado.
Crie uma função removeMinimo para ser usada nesta opcao. A função deve receber o vetor, 
remover o menor elemento (considere que nao ha repeticao no vetor),
retornando para a funcao main o valor que foi removido. Além disso, o valor de n deve
ser alterado dentro da funcao removeMinimo.
*/

#include<stdio.h>
#define TAM 50

// prototipo
void leitura(int v[TAM], int n);
void impressao(int v[TAM], int n);
int removeMinimo();

int main()
{
	int opcao;		// opcao do menu
	int vetor[TAM]; // vetor de números
	int n;			// numero de elementos a armazenar no vetor

	do{
		printf("[1] Inserir vetor");
		printf("[2] Imprimir vetor");
		printf("[3] Remover o menor elemento");
		printf("[4] Sair");
		
		if(opcao == 1)
		{
			scanf("%d", &n);
			// chamada da funcao para leitura do vetor

		}
		else if(opcao == 2)
		{

		}
		else if(opcao == 3)
		{

		}

	}while(opcao != 4);

	return 0;
}
		