/*
7 - Algoritmos de Ordenação
Lista avaliativa Ordenação e Eficiência de algoritmos
*/

#include <stdio.h>
#define MAX 100

// prototipo
void selection(int n, int v[MAX]);
void imprime(int n, int v[MAX]);

int main()
{
    // ler tamanho do vetor
    int n, i;
    int v[MAX];

    //printf("\nInforme o tamanho do vetor : ");
    scanf("%d", &n);
    // ler dados do vetor
    for (i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    // ordena vetor
    selection(n, v);

    // imprimir vetor
    imprime(n, v);

    return 0;
}

void selection(int n, int v[MAX])
{
    int i, j, min, aux;

    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i+1; j < n; j++)
        if (v[j] < v[min])
            min = j;
        aux = v[i];
        v[i] = v[min];
        v[min] = aux;
    }
}

void imprime(int n, int v[MAX])
{
    int i;

    for (i = 0; i < n ; i++) {
        printf("%d ", v[i]);
    }
}



/*
Faça a implementação do algoritmo ordenação por seleção para um vetor de números inteiros.
    void selection(int n, int v[MAX]);
Entrada: A primeira linha de um conjunto de teste contém um número inteiro positivo n(1 ≤ n ≤ 100) que indica o tamanho do vetor. 
Em seguida são apresentados os n elementos do vetor.

Saída: Para cada conjunto de teste da entrada seu programa deve produzir o vetor ordenado, seguido de uma linha em branco.
*/