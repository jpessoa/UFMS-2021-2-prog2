/*
Aula de 2021-09-20
Exemplo do slide :
https://ava.ufms.br/pluginfile.php/634911/mod_resource/content/0/buscabin.pdf

Recebe um número inteiro n > 0, um vetor de números inteiros crescente v[0..n-1] e um número inteiro x 
e devolve um índice k em [0, n] tal que v[k-1] < x <= v[k]

*/
#include <stdio.h>
#define MAX 3

int  busca_ordenada(int n, int v[MAX], int x);
int   busca_binaria(int n, int v[MAX], int x);
int busca_binaria_R(int esq, int dir, int v[MAX], int x);

int main()
{

}
// Busca em vetor ordenado 
int busca_ordenada(int n, int v[MAX], int x)
{
    int k;

    for (k = 0; k< n && v[k]< x; k++)
        ;

    return k; 

}
// Busca binária
int busca_binaria(int n, int v[MAX], int x)
{
    int esq, dir, meio;

    esq = -1;
    dir = n;
    while (esq < dir - 1) {
        meio = (esq + dir) / 2;
        if (v[meio] < x)
            esq = meio;
        else
            dir = meio;
    }
    return dir;
}

int busca_binaria_R(int esq, int dir, int v[MAX], int x)
{
    int meio;
    if (esq == dir - 1)
        return dir;
    else {
        meio = (esq + dir) / 2;
        if (v[meio] < x)
            return busca_binaria_R(meio, dir, v, x);
        else
            return busca_binaria_R(esq, meio, v, x);
    }
}

