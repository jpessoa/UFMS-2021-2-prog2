/*

>>>>> OK <<<<<

*/
#include <stdio.h> 
#include <stdlib.h>

struct celula
{
    int chave;
    struct celula *prox;
};

void inserir_inicio(int n, celula* &lst);
void imprimir(celula *lst);
void binario(int num);
void desalocar(celula* &L);

int main()
{
    celula *lista = NULL;  /*lista sem cabeca vazia*/

    int num;
  
    //printf("Digite um numero(zero p/encerrar): ");
    scanf("%d", &num);
        
    binario(num);
    printf("\n");

    /*apagar toda a lista encadeada alocada dinamicamente*/
    desalocar(lista);

    return 0;
}

void binario(int num)
{
    celula *lista = NULL; 
    int aux;
    if (num == 0){
        inserir_inicio(num, lista);
    }

    while (num > 0){
        aux = num % 2;
        //printf("%d", aux);
        inserir_inicio(aux, lista);
        num = num /2;
    }

    imprimir(lista);  
}

void inserir_inicio(int n, celula* &lst)
{
    celula *novo;

    novo = (celula*) calloc(1, sizeof(celula));
    novo->chave = n;
    novo->prox = lst;
    lst = novo;
}

//Funcao que apaga todos os nos da lista L
void desalocar(celula* &L)
{
    celula *aux;

    while( L != NULL)
    {
        aux = L;
        L = aux->prox;
        free(aux);
    }
}

//Funcao imprime o campo chave armazenado em cada no da lista L
void imprimir(celula *lst)
{
    celula *p;
    for(p = lst; p != NULL; p = p->prox)
        printf("%d", p->chave);

}

/*

//Funcao soma o campo chave armazenado em cada no da lista L
void somar(celula *lst)
{
    celula *p;
    int soma;
    soma = 0;

    for(p = lst; p != NULL; p = p->prox)
    {
        soma = soma + p->chave;
    }
    printf("%d", soma);

}




void remover(int x, celula* &lst)
{
    celula *p, *q;
    p = NULL;
    q = lst;
    while (q != NULL && q->chave != x) {
        p = q;
        q = q->prox;
    }
    if(q == NULL)
        printf("%d nao foi encontrado.", x);
    else{
        if (p != NULL)
            p->prox = q->prox;
        else
            lst = q->prox;

        free(q);
    }
}

*/

/*
Utilizando uma pilha, escreva uma função que receba um número inteiro positivo no formato decimal e converte este número para o formato binário. A função retorna uma lista encadeada (a pilha) com os dígitos que fazem parte do número em binário. Ao fim imprima a lista resultante.

Entrada: A entrada é composta do valor em decimal.

5  

Saída: A saída é a impressão da pilha com os dígitos binários.

101

Crie um programa para testar sua função respeitando o formato da entrada e saída.
*/