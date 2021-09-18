/*
Lista avaliativa sobre recursão (entrega até 30/09)
https://ava.ufms.br/mod/quiz/view.php?id=331022

Considere o seguinte processo para gerar uma sequência de números. 
Comece com um número inteiro positivo n. 
Se n é par, divida por 2. Se n é ímpar, multiplique por 3 e some 1. 
Repita esse processo com o novo valor de n, terminando quando n = 1. 

Por exemplo, a sequência de números a seguir é gerada para n = 22: 

>>>> 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1 

É conjecturado que este processo termina com n = 1 para todo inteiro n > 0. 
Os números gerados nessa sequência são chamados de ciclo de n. 
Ademais, para um número n, o comprimento do ciclo de n é o número de elementos gerados na sequência. 
No exemplo acima, o comprimento do ciclo de 22 é 16. 

Crie um programa (.cpp) para ler um número n inteiro, imprimir o ciclo de n e também imprimir o 
comprimento do ciclo. 
O programa deve conter uma função recursiva com a seguinte interface: 

int ciclo (int n) 

que receba um número inteiro n ≥ 1, imprima o ciclo de n e devolva o comprimento do ciclo de n.

Entrada:
22
Resultado Esperado:
22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1 16
Resultado obtido:
22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1 1
*/
#include <stdio.h>

int ciclo(int n);

int main()
{
    int n;
    scanf("%d", &n);
    ciclo(n);
}
    
int ciclo(int n)
{
    // contador de comprimento do ciclo
    int cont = 1;

    // Se n = 1 termina
    if (n == 1)
    {
        printf("%d ", n);
        // como n = 1 é o último laço então imprime o contador 
        cont++;
        printf("\nCont = %d ", cont);
    }
    // Se n é par, divida por 2.
    else if (n%2 == 0) 
    {
        printf("%d ", n);
        //cont++;
        ciclo(n/2);
        cont++;
    }
    // Se n é ímpar, multiplique por 3 e some 1.
    else
    {
        printf("%d ", n);
        //cont++;
        ciclo(n * 3 + 1);
        cont++;
    }
    
    return 0;
}