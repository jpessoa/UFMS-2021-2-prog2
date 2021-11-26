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

void inserir_fim(int n, celula* &lst);
void imprimir(celula *lst);
void desalocar(celula* &L);
void uniao (celula *&L1, celula *&L2, celula *&L3);
int pesquisa(int n, celula* &lst);

int main()
{
     celula *L1 = NULL;  
     celula *L2 = NULL;  
     celula *L3 = NULL;  

     int num;
  
     scanf("%d", &num);
     while(num > 0)
     {
          inserir_fim(num, L1);
          scanf("%d", &num);
     }
    
     scanf("%d", &num);
     while(num > 0)
     {
          inserir_fim(num, L2);
          scanf("%d", &num);
     }
    
     uniao (L1, L2, L3);
     imprimir(L3);
    
     printf("\n");

     desalocar(L1);

     return 0;
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

void imprimir(celula *lst)
{
     celula *p;

     for(p = lst; p != NULL; p = p->prox){
          printf("%d ", p->chave);
     }
}

void uniao (celula *&L1, celula *&L2, celula *&L3)
{
     celula *p;
     bool jatem;

     for(p = L1; p != NULL; p = p->prox){
          inserir_fim(p->chave, L3);
     }
     for(p = L2; p != NULL; p = p->prox){
          //verificar se p->chave não existe em L3
          jatem = pesquisa(p->chave, L3);
          if(jatem == 0){
               inserir_fim(p->chave, L3);
          }
     }
}

int pesquisa(int n, celula* &lst)
{
     celula *p;

     for(p = lst; p != NULL; p = p->prox){
          if (n == p->chave)
          {
               return 1;
          }
     }
     return 0;
}


/*
Considerando o tipo struct definido abaixo para as listas encadeadas neste exercício.

struct celula{
     int chave;
     struct celula *prox;
};

Construa uma lista L3 que corresponde à união de duas listas L1 e L2 simplesmente encadeadas 
(lembre-se que o resultado da união de dois conjuntos não possui elementos repetidos). 
Ao término da função, as listas L1 e L2 devem ser apagadas. Crie uma função com o protótipo abaixo 
para realizar a união das listas. 

void uniao (celula *&L1, celula *&L2, celula *&L3);

O seu programa deve ler dois conjuntos de números e armazená-los em L1 e L2, respectivamente. 
Construa L3 e imprima. L3 não deve ser impressa dentro da função uniao, deve ser impressa na main.

Entrada: DOIS conjuntos de números positivos (um número menor ou igual a zero, encerra a entrada 
de dados de L1 e de L2)

2  7  9  12  54  23  -3

8  9  24  37  88  99  2  0

Saída: uma lista de números resultante da união de L1 e L2

2  7  9  12  54  23  8  24  37  88  99 

*/