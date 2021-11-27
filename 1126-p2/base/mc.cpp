#include "mc.h"

void inserirMarca(tipomarca *&L, int cmarca, char *nom)
{
    tipomarca* novo = (tipomarca*) calloc (1, sizeof(tipomarca));
    novo->codmarca = cmarca;
    strcpy(novo->nome, nom);
    
    novo->prox = L;
    novo->ant = NULL;

    if(L != NULL)
        L->ant = novo;

    L = novo;
}

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
//void inserirMarca (tipomarca *&, int, char*)
void inserirMarcaFim(tipomarca *&L, int cmarca, char *nom)
{
    tipomarca* novo = (tipomarca*) calloc (1, sizeof(tipomarca));
    novo->codmarca = cmarca;
    strcpy(novo->nome, nom);

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

