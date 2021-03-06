#include <stdio.h> /*printf*/
#include <stdlib.h> /*malloc, calloc, free*/

struct celula
{
    int chave;
    struct celula *prox;
};

void desalocar(celula* &L);
void inserir_inicio(int n, celula* &lst);
void remover(int x, celula* &lst);
void inserir_fim(int n, celula* &lst);
void imprimir(celula *lst);
void somar(celula *lst);
void contar(celula *lst);


int main()
{
    celula *lista = NULL;  /*lista sem cabeca vazia*/

    int num;
  
    //printf("Digite um numero(zero p/encerrar): ");
    scanf("%d", &num);
    while(num != 0)
    {
        inserir_fim(num, lista);
        
        //printf("Digite um numero(zero p/encerrar): ");
        scanf("%d", &num);
    }

    contar(lista);
    
    printf("\n");

    /*apagar toda a lista encadeada alocada dinamicamente*/
    desalocar(lista);

    

    return 0;
}

/*Funcao conta a quantidade de itens da lista L*/
void contar(celula *lst)
{
    celula *p;
    int cont;
    cont = 0;

    for(p = lst; p != NULL; p = p->prox)
    {
        cont++;
        
    }
    printf("%d", cont);

}

/*Funcao imprime o campo chave armazenado em cada no da lista L*/
void imprimir(celula *lst)
{
    celula *p;
    for(p = lst; p != NULL; p = p->prox)
        printf("%d ", p->chave);

}

/*Funcao soma o campo chave armazenado em cada no da lista L*/
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


void inserir_inicio(int n, celula* &lst)
{
    celula *novo;

    novo = (celula*) calloc(1, sizeof(celula));
    novo->chave = n;
    novo->prox = lst;
    lst = novo;
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
Escreva uma fun????o que conte o n??mero de c??lulas de uma lista linear encadeada.

Entrada: A entrada ?? composta dos valores a inserir na lista na ordem em que aparecem, 
sendo que o n??mero 0 finaliza a entrada.

1 5 8 7 23 98 42 31 14 33 0

Sa??da: A sa??da representa o n??mero de c??lulas da lista.

10

Crie um programa para testar sua fun????o respeitando o formato da entrada e da sa??da.

*/