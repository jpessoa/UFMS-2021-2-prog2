/*lista encadeada circular*/
#include<stdio.h>
#include "listacircular.h"


int main()
{
    celulaCirc *cursor = NULL;/* ponteiro para um no' da lista circular*/
    int op;
    char nome[MAX];

    do
    {   printf("\n 1 - Adicionar");
        printf("\n 2 - Remover");
        printf("\n 3 - AVANCAR");
        printf("\n 4 - Sair");
        printf("\n Opcao: ");
        scanf("%d", &op);

        if(op == 1)
        {
            printf("\nAdicionar um novo nome:");
            scanf(" %s", nome);

            adicionar(nome, cursor);


        }
        else if(op == 2){
            remover(cursor);


        }
        else if(op == 3)
        {

            if(cursor !=NULL)
                cursor = avancar(cursor);

        }

        printf("\n\n");
        imprimir(cursor);
        printf("\n\n");

    }while(op != 4);

    /*desalocar lista*/
    desalocar(cursor);

    return 0;
}
