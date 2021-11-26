#include<stdio.h>

/*funcao main*/
int main()
{
    int op;

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
            //Cadastrar marca
            
        }
        else if(op == 2)
        {
            //Cadastrar carro
            
        }
        else if(op == 3)
        {
            //Remover último carro
        
        }
        
    }while(op != 4);

    return 0;
}


