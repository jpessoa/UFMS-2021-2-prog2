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
    printf("\nDigite o nome do arquivo : ");

    FILE*  arq;             /* variavel para acessar um arquivo */
    char nome_arq[MAX];     /* nome do arquivo a ser aberto*/
    char nome_alun[MAX];    /* nome do aluno */
    int rga, contador;
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
        contador = 0;
        printf("Arquivo foi aberto!\n\n");
        
        /*Joao da Silva Santos 345678 2.3 4.5 9.0 2.0*/
        
        /*leitura dos dados do arquivo*/
        fscanf(arq, "%s %d %f %f %f %f", nome_alun, &rga, &p1, &p2, &trab, &po);

        while( feof(arq) == 0 )    /*CHEGOU AO FINAL DO ARQUIVO??? verificando se chegou ao fim do arquivo*/
        {
            // verifica PO
            if (po != 0)
            {
                if (p1 > p2)
                {
                    if (po > p2)
                        p2 = po;
                }
                else{
                    if (po > p1)
                        p1 = po;
                }
            }
            /*calcula da media e impressao na tela*/
            media = (0.35 * p1) + (0.35 * p2) + (0.3 * trab);
            //printf("%s %.2f\n", nome_alun, media);
            //printf("\n%s %f %f %f %f %f", nome_alun, p1, p2, trab, po, media);
        
            /*leitura dos proximos dados do arquivo*/
            fscanf(arq, "%s %d %f %f %f %f", nome_alun, &rga, &p1, &p2, &trab, &po);
            contador++;

        }
        
        /*fechamento do arquivo*/
        printf("\nAlunos cadastrados = %d", contador);
        fclose(arq);
        
    }
    printf("\n");    
    //return 0;
}
//4 - Gerar arquivo com dados dos alunos aprovados
//5 - Gerar arquivo com dados dos alunos reprovados
//6 - Fechar programa
