/*lista encadeada circular*/
#include<stdio.h>
#include "listacircular.h"


int main()
{
    celulaCirc *cursor = NULL;/* ponteiro para um no' da lista circular*/
    int op;
    char aux;
    char nome[MAX];

    printf("\n\n");
    imprimir(cursor);
        
    adicionar("18", cursor);
    printf("\n\n");
    imprimir(cursor);

    adicionar("37", cursor);
    printf("\n\n");
    imprimir(cursor);

    adicionar("24", cursor);
    printf("\n\n");
    imprimir(cursor);

    avancar(cursor);
    printf("\n\n");
    imprimir(cursor);

    adicionar("42", cursor);
    printf("\n\n");
    imprimir(cursor);

    adicionar("5", cursor);
    printf("\n\n");
    imprimir(cursor);

    avancar(cursor);
    printf("\n\n");
    imprimir(cursor);

    avancar(cursor);
    printf("\n\n");
    imprimir(cursor);

    aux = remover(cursor);
    printf("\n\n");
    imprimir(cursor);

    avancar(cursor);  
    printf("\n\n");
    imprimir(cursor);

    /*desalocar lista*/
    desalocar(cursor);

    return 0;
}
