#include "mc.h"

/*funcao procura a marca com codigo 'codmarca' e retorna o endereco
 do no onde a marca foi encontrada. */
tipomarca* buscarMarca(tipomarca* M, char *s)
{
    tipomarca *p;
    
    p = M;
    while(p != NULL && strcmp(p->nome, s) !=0)
    {
        p = p->prox;
    }
    return p;
}

/*funcao insere uma nova marca na lista*/
void inserirMarca(tipomarca *&, int cmarca, char nom*)
{
    tipomarca* novo = (tipomarca*) calloc (1, sizeof(tipomarca));
    novo->codmarca = cmarca;
    novo->nome = nom;

    if(L == NULL)
        L = novo;
    else
    {
        tipomarca *p;

        p = L;

        while( p->prox != NULL)
            p = p->prox;

        p->prox = novo;
        novo->ant = p;
    }

}

/*
void inserir_fim(int x, celula*&L)
{
    celula* novo = (celula*) calloc (1, sizeof(celula));
    novo->chave = x;

    if(L == NULL)
        L = novo;
    else
    {
        celula *p;

        p = L;

        while( p->prox != NULL)
            p = p->prox;

        p->prox = novo;
        novo->ant = p;
    }
}

*/
/*funcao imprime os CARROS*/
void listarCarro(tipocarro* l)
{
    while(l != NULL)
    {
        printf("%d %d\n", l->codcarro, l->codmarca);
        l = l->prox;
    }
}


/*funcao imprime as marcas*/
void listarMarca(tipomarca* l)
{
    while(l != NULL)
    {
        printf("%d %s\n", l->codmarca, l->nome);
        l = l->prox;
    }
}

