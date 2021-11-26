#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

#define MAX 31

struct celula{
     char nome[31];
     struct celula *prox;
};

celula* interseccao(celula *L1, celula *L2);
void inserir_fim(char *nom, celula* &lst);
void imprimir(celula *lst);

int main()
{
    celula *L1 = NULL;  /*lista sem cabeca vazia*/

    char nome[MAX];
  
    scanf(" %s", &nome);
    while(nome != "FIM")
    {
        inserir_fim(nome, L1);
        scanf(" %s", &nome);
    }

    imprimir(L1);
    
    printf("\n");

    return 0;
}

void inserir_fim(char *nome, celula* &lst)
{
    celula *nova, *p;

    nova = (celula*) malloc(sizeof(celula));
    nova->nome = nome;
    nova->prox = NULL;

    if(lst == NULL)
        lst = nova;
    else{
        p = lst;
        while(p->prox != NULL)
            p = p->prox;

        p->prox = nova;
    }
}

//Funcao imprime o campo chave armazenado em cada no da lista L
void imprimir(celula *lst)
{
    celula *p;
    for(p = lst; p != NULL; p = p->prox)
        printf("%s", p->nome);

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