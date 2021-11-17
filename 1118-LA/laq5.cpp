/*
7 - Algoritmos de Ordenação
Lista avaliativa Ordenação e Eficiência de algoritmos
*/

#include <stdio.h>
#define MAX 100

// prototipo
void quicksort(int p, int r, int v[MAX]);
void imprime(int n, int v[MAX]);
int separa(int p, int r, int v[MAX]);

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
    quicksort(0, n - 1, v);

    // imprimir vetor
    imprime(n, v);

    return 0;
}

void quicksort(int p, int r, int v[MAX])
{
    int q;
    if (p < r){
        q = separa(p, r, v);
        quicksort(p, q, v);
        quicksort(q+1, r, v);
    }
}

void imprime(int n, int v[MAX])
{
    int i;

    for (i = 0; i < n ; i++) {
        printf("%d ", v[i]);
    }
}

int separa(int p, int r, int v[MAX])
{
    int x, i, j, aux;

    x = v[p];
    i = p -1;
    j = r + 1;
    while (1) {
        do {
            j--;
        } while (v[j] < x);
        do {
            i++;
        } while (v[i] > x);
        if (i < j)
        {
            //troca
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
        }
        else
            return j;
    }
}

/*
Escreva um programa que leia um vetor v com n elementos e ordene-o em ordem decrescente utilizando o método de ordenação por 
separação (Quicksort). Considere n <= 100.
Entrada: A entrada é composta por um número n de elementos, na primeira linha e, na segunda, são lidos os n elementos do vetor

5
-1   5   10   7   4

Saída: A saída é composta dos elementos do vetor v ordenado em ordem decrescente.

10 7 5 4 -1
 
Escreva um programa para testar sua função, respeitando o formato da entrada.
*/