#include "arq_aux.h"
#include <stdio.h>
#include <stdlib.h>

// 1 - Cadastrar um novo aluno
void op1_cad_novo_aluno(Alunos )
{
    printf("\nEntrou na opção 1");
}
// 2 - Buscar aluno

// 3 - Ler arquivo com listagem de alunos
void op3_ler_arquivo_alunos()
{
    printf("\nEntrou na opção 3");
    printf("\nDigite o nome do arquivo : ")

    FILE*  arq;         /* variavel para acessar um arquivo */
    char nome_arq[MAX];     /* nome do arquivo a ser aberto*/
    char nome_alun[MAX];    /* nome do aluno */
    float p1, p2, trab, po, media;
    
    scanf(" %s", nome_arq);
    
    /*abertura de um arquivo*/
    arq = fopen(nome_arq, "r");
    /* verificando se arquivo foi aberto */
    if( arq == NULL )
    {
        printf("\n\n Arquivo %s nao pode ser aberto.\n\n", nome_arq);
    }
    else
    {
        printf("Arquivo foi aberto!\n\n");
        
        /*JOAO  2.5 7.5*/
        
        /*leitura dos dados do arquivo*/
        fscanf(arq, "%s %f %f %f %f", nome_alun, &p1, &p2, &trab, &po);
        /*
         fscanf(arq, "%s", nomeA)
         fscanf(arq, "%f", &n1)
         fscanf(arq, "%f", &n2);
         */
        while( feof(arq) == 0 )    /*CHEGOU AO FINAL DO ARQUIVO??? verificando se chegou ao fim do arquivo*/
        {
            /*calcula da media e impressao na tela*/
            media = (p1+p2)/2;
            printf("%s %.2f\n", nome_alun, media);
        
            /*leitura dos proximos dados do arquivo*/
            fscanf(arq, "%s %f %f %f %f", nome_alun, &p1, &p2, &trab, &po);
        }
        
        /*fechamento do arquivo*/
        fclose(arq);
        
    }
    printf("\n");    
    //return 0;
}
//4 - Gerar arquivo com dados dos alunos aprovados
//5 - Gerar arquivo com dados dos alunos reprovados
//6 - Fechar programa
