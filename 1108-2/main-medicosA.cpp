#include<stdio.h>
#include "fila-med.h"

int main()
{
    int op;
    char nome[40];
    

    pacientes *i1, *f1, *i2, *f2;

    // inicializando as filas com vazio
    i1 = f1 = i2 = f2 = NULL;

    do
    {
        printf("\n\n 1 - Inserir Med 1\n 2 - Inserir Med 2\n 3 - Atender med 1\n 4 - Atender med 2\n 5 - Nomes em comum nas filas\n 6 - Imprimir \n 7 - Sair \n Opcao: ");
        scanf("%d", &op);

        if(op == 1)
        {
            scanf(" %s", nome);
            enfileirar(nome, i1, f1);
            printf("Enfileirado em Fila 1!");

        }
        else if(op == 2)
        {
            scanf(" %s", nome);
            enfileirar(nome, i2, f2);
            printf("Enfileirado em Fila 2!");
        }
        else if(op == 3)
        {
            // remover da fila do medico 1
            strcpy(nome, desenfileirar2(i1, f1));

            if(strcmp(nome,"") != 0)
                printf("Paciente: %s\n", nome);
            
        }
        else if(op == 4)
        {
            // remover da fila do medico 2
            strcpy(nome, desenfileirar2(i2, f2));

            if(strcmp(nome,"") != 0)
                printf("Paciente: %s\n", nome);
            
        }
        else if(op == 5)
        {
            interseccao(i1, i2);

        }
        else if(op == 6)
        {
            printf("\nFila 1:\n");
            imprime(i1);

            printf("\nFila 2:\n");
            imprime(i2);

        }
        
    }while(op != 7);
    
    // desalocando as filas
    desalocar(i1);
    desalocar(i2);

    return 0 ;
}
