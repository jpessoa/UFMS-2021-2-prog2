/*fila simplesmente encadeada*/
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

struct pacientes
{
    char nome[40];
    struct pacientes *prox;
};


void enfileirar(char *s, pacientes *&i, pacientes *&f);
void desenfileirar(pacientes *&i, pacientes *&f);

void desalocar(pacientes *&L);
void imprime(pacientes *p);

char* desenfileirar2(pacientes *&i, pacientes *&f);

void interseccao(pacientes *i1, pacientes *i2);

