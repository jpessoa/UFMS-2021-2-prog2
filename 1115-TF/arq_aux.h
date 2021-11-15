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

/*Função recebe o ponteiro para primeiro nó da lista e imprime todos os nós (células)
da lista*/
//void imprime_lista(celula *lst);

/*Funcao insere um novo no sempre no inicio da lista*/
//void inserir_inicio(int x, celula*&L);

/*Funcao insere um novo no fim da lista*/
//void inserir_fim(int x, celula*&L);

/*Procura e remove um no com valor x*/
//void remover(int x, celula*&lst);

/*Funcao que apaga todos os nos da lista L*/
//void desalocar(celula*&L);
