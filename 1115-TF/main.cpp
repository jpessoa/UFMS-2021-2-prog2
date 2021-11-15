/*
Trabalho Final de Prog2, aluno Jefferson E. Pessoa
*/

#include "arq_aux.h"
#include <stdio.h>

int main()
{
    int num, op;

    do{

        printf("\n");
        printf("\n1 - Cadastrar um novo aluno ");
        printf("\n2 - Buscar aluno");
        printf("\n3 - Ler arquivo com listagem de alunos");
        printf("\n4 - Gerar arquivo com dados dos alunos aprovados");
        printf("\n5 - Gerar arquivo com dados dos alunos reprovados");
        printf("\n6 - Fechar programa");
        printf("\nOpcao: ");
        scanf("%d", &op);

        if(op == 1)
        {
            printf("\nEntrou na opção 1");
        }
        else if(op == 2)
        {
            printf("\nEntrou na opção 2");
        }
        else if(op == 3)
        {
//            printf("\nEntrou na opção 3");
            op3_ler_arquivo_alunos();
        }
        else if(op == 4)
        {
            printf("\nEntrou na opção 4");
        }
        else if(op == 5)
        {
            printf("\nEntrou na opção 5");
        }
        else if(op == 6)
        {
            printf("\nEntrou na opção 6 e vai sair \n\n");
        }
    }while(op != 6);

    return 0;
}
