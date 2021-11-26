/*

>>>>> OK <<<<<

*/
#include <stdio.h> 
#include <stdlib.h>

struct celula{
     int valor;
     struct celula *prox;
};

void inserir_fim(int n, celula* &lst);
int soma(celula *L);
void desalocar(celula* &L);

int main()
{
    celula *lista = NULL;  /*lista sem cabeca vazia*/

    int num, resp;
  
    //printf("Digite um numero(zero p/encerrar): ");
    scanf("%d", &num);
    while(num >= 0)
    {
        inserir_fim(num, lista);
        
        //printf("Digite um numero(zero p/encerrar): ");
        scanf("%d", &num);
    }

    resp = soma(lista);
    printf("%d", resp);
    
    printf("\n");

    /*apagar toda a lista encadeada alocada dinamicamente*/
    desalocar(lista);

    return 0;
}
/*Funcao soma o campo chave armazenado em cada no da lista L*/
int soma(celula *L)
{
    celula *p;
    int soma;
    soma = 0;

    for(p = L; p != NULL; p = p->prox)
    {
        soma = soma + p->valor;
    }
    //printf("%d", soma);

    return soma;

}
//Funcao que insere dados no final da lista L
void inserir_fim(int n, celula* &lst)
{
    celula *novo, *p;

    novo = (celula*) malloc(sizeof(celula));
    novo->valor = n;
    novo->prox = NULL;

    if(lst == NULL)
        lst = novo;
    else{
        p = lst;
        while(p->prox != NULL)
            p = p->prox;

        p->prox = novo;
    }
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


/*
Considerando o tipo struct definido abaixo,

struct celula{

     int valor;

     struct celula *prox;

};

escreva uma função soma para retornar a soma dos elementos de uma lista L.

int soma(celula *L);

Entrada: Uma sequência de números inteiros. (Uma entrada negativa encerra a entrada).

1 5 8 7 23 98 42 31 14 33 -1

Saída: A saída representa a soma dos elementos da lista lista.

262

*/