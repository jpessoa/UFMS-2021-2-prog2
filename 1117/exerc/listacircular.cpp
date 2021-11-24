/*lista encadeada circular*/
#include<stdio.h>
#include<stdlib.h>
#include "listacircular.h"
#include<string.h>

/*Funcao recebe um ponteiro para o  no da lista circular e o
elemento x que deseja inserir*/
void adicionar(char *s, celulaCirc *&cur)
{
    celulaCirc *nova;

    nova = (celulaCirc *) calloc(1, sizeof (celulaCirc));
    strcpy(nova->nome, s);

    if(cur == NULL){
        nova->prox = nova;
        cur = nova;
    }
    else{
        nova->prox = cur->prox;
        cur->prox = nova;
    }
}


/*Funcao recebe o ponteiro para um no da lista circular, remove o no' que se encontra
imediatamente apos o cursor (se lista possuir apenas o cursor, remove o cursor)*/
void remover(celulaCirc *&cur)
{
    celulaCirc *aux;
    char s[MAX];

    if(cur == NULL)
        printf("Lista vazia");
    else{
        aux = cur->prox;

        strcpy(s, aux->nome);

        if(aux == cur)
            cur = NULL;
        else
            cur->prox = aux->prox;

        free(aux);

        printf("Removido: %s \n", s);

    }
}

/*Funcao que apaga todos os nos da lista L*/
void desalocar(celulaCirc *&cur)
{
    celulaCirc *aux;
    celulaCirc *ptr = cur; /*guardando o cursor inicial*/

    while(cur != NULL)
    {
        aux = cur;
        cur = cur->prox;

        printf("Vou apagar: %s\n", aux->nome);
        free(aux);

        if(cur == ptr)
           cur = NULL;
    }
}



/*imprimir os nos da lista*/
void imprimir(celulaCirc *cur)
{
    celulaCirc *p = cur;

    if(p){
        printf("C:");
        do{
            printf("%s ", p->nome);
            p = p->prox;
        }while(p != cur);
    }
}


celulaCirc* avancar(celulaCirc *p)
{
    return p->prox;
}


void avancar2(celulaCirc *&cur)
{
    cur = cur->prox;
}

