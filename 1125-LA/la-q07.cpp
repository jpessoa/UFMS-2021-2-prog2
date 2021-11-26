#include <stdio.h> 
#include <stdlib.h>

struct celula
{
    int chave;
    struct celula *prox;
};

void inserir_fim(int n, celula* &lst);
void imprimir(celula *lst);
void desalocar(celula* &L);

int main()
{
    celula *lista = NULL;  /*lista sem cabeca vazia*/

    int num;
  
    scanf("%d", &num);
    while(num != 0)
    {
        inserir_fim(num, lista);
        
        scanf("%d", &num);
    }

    imprimir(lista);
    
    printf("\n");

    /*apagar toda a lista encadeada alocada dinamicamente*/
    desalocar(lista);

    return 0;
}


//Funcao que insere dados no final da lista L
void inserir_fim(int n, celula* &lst)
{
    celula *novo, *p;

    novo = (celula*) malloc(sizeof(celula));
    novo->chave = n;
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

//Funcao imprime o campo chave armazenado em cada no da lista L
void imprimir(celula *lst)
{
    celula *p;
    
    for(p = lst; p != NULL; p = p->prox){
        if (p->chave % 2 != 0){
            printf("%d ", p->chave);
        }
    }
}


/*
Escreva um programa que dada uma lista encadeada formada por números, remova todos os elementos com chaves pares. 
Imprima a lista resultante.

Entrada: A entrada é composta dos valores a serem inseridos na lista na ordem em que aparecem, sendo que o 
número 0 finaliza a entrada.

1 5 8 7 23 98 42 31 14 33 0

Saída: A saída é a impressão da lista resultante após a remoção dos elementos pares.

1 5 7 23 31 33

*/