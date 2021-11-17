#include <stdio.h>
#define MAX 100 // ver qual é o maximo
#define TAM 50 // ver qual é o maximo


struct Alunos
{
    char nome[MAX] ;
    int rga;
    float notap1;
    float notap2;
    float notatp;
    float notapo;
};

// Prototipos
void op1_cad_novo_aluno(Alunos );
void op3_ler_arquivo_alunos();
