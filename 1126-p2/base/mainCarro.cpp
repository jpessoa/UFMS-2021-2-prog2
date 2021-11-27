/*
Jefferson Eduardo Pessoa
RGA 2021.1907.010-2
*/

#include<stdio.h>
#include "mc.h"

/*funcao main*/
int main()
{
    int op;
    tipomarca *L = NULL;
    int cmarca;
    char nom;
    
    do
    {
        printf("\n1 - Cadastrar marca");
        printf("\n2 - Cadastrar carro");
        printf("\n3 - Remover último carro");
        printf("\n4 - Sair");
        printf("\nOpcao: ");
        scanf("%d", &op);
        
        if(op == 1)
        {
            scanf("%d", &cmarca);
            scanf(" %[^\n]", &nom);
            inserirMarca(L, cmarca, &nom);
            //printf("");
            //listarMarca(L);
        }
        else if(op == 2)
        {
            
        }
        else if(op == 3)
        {
        
        }
        
    }while(op != 4);
    
    
    
    
    return 0;
}


