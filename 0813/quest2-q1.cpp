/*
Aula de 2021-08-13
https://ava.ufms.br/mod/quiz/attempt.php?attempt=318026&cmid=311753
Já OK no AVA

Escreva um programa que leia um vetor L de 2 <= tam <= 100 números inteiros e verifique se os elementos do 
vetor estão em ordem crescente. O programa deverá imprimir verdadeiro se os elementos do vetor estiverem em 
ordem crescente ou falso caso contrário. Note que o seguinte predicado pode ser usado para descrever esta 
propriedade de L, caso os elementos de L estiverem em ordem crescente:
para todo i em {1,...,tam-1}: L[i] < L[i+1]}
A entrada é dada por um vetor de números inteiros, onde o primeiro elemento é um número tam indicando o 
tamanho do vetor, seguido de tam números inteiros.
A saída consiste em imprimir verdadeiro se o vetor está em ordem crescente e falso caso contrário.

Exemplo 1

8 1 2 3 4 5 6 9 15

verdadeiro


Exemplo 2

4 1 2 7 7

falso
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int n;

    //printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    
    int v[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);
    
    int maior = 0;
    char resultado[20] = "verdadeiro";
    
    for (int i = 0; i < n; i++)
    {
        if (v[i] <= maior)
        {
            strcpy(resultado, "falso");
        }
        else if(v[i] > maior)
        {
            maior = v[i];  
        }
    }

    //printf("\n");
    printf("%s", resultado);

    return 0;
}
