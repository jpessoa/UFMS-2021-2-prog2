/*
Considerando o tipo struct definido abaixo,

struct celula{
     int valor;
     struct celula *prox;
};

escreva uma função remove_ultimo para remover o último nó de uma lista L. 
Além disso, a função deve retornar o valor armazenado no nó removido.

int remove_ultimo(celula *&L);

O seu programa deve ler uma sequência de n números inteiros positivos (maiores que zero) e 
armazená-los em uma lista simplesmente encadeada. 
Em seguida, o seu programa deverá ler um valor k e realizar k vezes a remoção do último elemento da lista, 
imprimindo o valor removido. Caso não haja último elemento a remover, imprima o número zero.

Entrada: n, uma sequência de n números positivos, k

5
8 7 23 98 42
3

Saída: Os últimos k elementos removidos (cada um em uma nova linha).

42

98

23

*/