#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

struct celula{
     char nome[31];
     struct celula *prox;
};

void inserir_fim(char *nom, celula* &lst);
void imprimir(celula *lst);
void desalocar(celula* &L);

int main()
{
    celula *L1 = NULL;  

    char nome;
  
    scanf("%s ", &nome);
    //while(num != 0)
    while(strcmp(&nome, "FIM") != 0)
    {
        inserir_fim(&nome, L1);
        scanf("%s ", &nome);
    }

    imprimir(L1);
   
    printf("\n");

    desalocar(L1);

    return 0;
}

//Funcao que insere dados no final da lista L
void inserir_fim(char *nom, celula* &lst)
{
    celula *novo, *p;

    novo = (celula*) malloc(sizeof(celula));
    //novo->chave = n;
    strcpy(nom, novo->nome);
    novo->prox = NULL;

    if(lst == NULL)
        lst = novo;
    else{
        p = lst;
        while(p->prox != NULL)
            p = p->prox;

        p->prox = novo;
    }
}

void imprimir(celula *lst)
{
    celula *p;
    for(p = lst; p != NULL; p = p->prox)
        printf("%s ", p->nome);

}

//Funcao que apaga todos os nos da lista L
void desalocar(celula* &L)
{
    celula *aux;

    while( L != NULL)
    {
        aux = L;
        L = aux->prox;
        free(aux);
    }
}

/*
Considerando o tipo struct definido abaixo para as listas encadeadas neste exercício.

struct celula{
     char nome[31];
     struct celula *prox;
};

Construa uma lista L3 que corresponde à intersecção de duas listas L1 e L2 simplesmente encadeadas. 
Crie uma função com o protótipo abaixo para realizar a intersecção das listas. 
A função retorna o ponteiro para a lista L3 criada.

celula* interseccao(celula *L1, celula *L2);

O seu programa deve ler dois conjuntos de nomes e armazená-los em L1 e L2, respectivamente. Construa L3 e imprima.

Entrada: DOIS conjuntos de nomes (apenas primeiro nome de uma pessoa), representando L1 e L2. A palavra "FIM" encerra a entrada de dados de uma lista.

Ana Liane Joaquim Bianca Tatiane Beatriz Laura FIM

Joaquim Maria Jona Joel Marcelo Laura Ana FIM

Saída: uma lista de nomes pertencentes a ambas as listas (L1 e L2)

Ana Joaquim Laura

Caso a lista resultante seja vazia, imprima a palavra "VAZIA", em maiúsculo.
*/