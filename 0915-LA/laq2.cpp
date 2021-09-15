/*
Lista avaliativa sobre registros (entrega até 15/09)
https://ava.ufms.br/mod/quiz/view.php?id=320938

Construa uma estrutura tAluno com número de matrícula, nome (com até 30 caracteres) e curso 
(com até 30 caracteres), nesta ordem. Leia do usuário as informações de 5 alunos e armazene 
em vetor dessa estrutura. Em seguida, leia um nome de curso, pesquise e liste todos os alunos 
(a matrícula e nome) que fazem o curso.
*/

#include <stdio.h>
#include<string.h>
#define MAX 30
#define DIM 200

struct tAluno  
{
    int matricula;
    char nome[MAX+1];
    char curso[MAX+1];
};

int main()
{
    // Leia do usuário as informações de 5 alunos e armazene em vetor dessa estrutura.
    tAluno aluno[DIM];
    int i, qtd = 5;
    char qcurso[MAX+1];
    for (i = 0; i < qtd; i++)
    {
        //printf("\nInforme a matricula: ");
        scanf("%d", &aluno[i].matricula);
        //printf("Informe o nome: ");
        scanf(" %[^\n]", aluno[i].nome);
        //printf("Informe o curso: ");
        scanf(" %[^\n]", aluno[i].curso);
    }

    // Em seguida, leia um nome de curso, pesquise e liste todos os alunos (a matrícula e nome) que fazem o curso.
    //printf("\nInforme o curso a ser pesquisado: ");
    scanf(" %[^\n]", qcurso);
    
    for (i = 0; i < qtd; i++)
    {
        if( strcmp(aluno[i].curso, qcurso) == 0) 
            printf("%d %s\n", aluno[i].matricula, aluno[i].nome);
    }

    return 0;

}