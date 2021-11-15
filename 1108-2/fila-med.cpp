/*fila simplesmente encadeada*/
#include "fila-med.h"


/*Função recebe um ponteiro para o inicio da fila, um ponteiro para o final da fila e o
elemento x que deseja inserir*/
void enfileirar(char *s, pacientes *&i, pacientes *&f)
{
    pacientes *nova;

    nova = (pacientes *) calloc(1, sizeof (pacientes));
    strcpy(nova->nome, s);

    if(i == NULL)
        i = f = nova;
    else{
    	f->prox = nova;
    	f = nova;
    }
}


/*Função recebe o ponteiro para o inicio da fila (e ponteiro para o ultimo no), remove o primeiro e imprime
 o valor do mesmo*/
void desenfileirar(pacientes *&i, pacientes *&f)
{
    pacientes *aux;
    
    
    if(i == NULL)
        printf( "Fila vazia");
    else{
        printf("Removido:%s", i->nome);
        aux = i;
        i = i->prox;
        if(i == NULL)
            f = NULL;
    
        free(aux);
    }
}




char* desenfileirar2(pacientes *&i, pacientes *&f)
{
    pacientes *aux;
    char str[40] = "";
    
    
    if(i == NULL){
        printf( "Fila vazia");
        return str;
    }
    else{
        //printf("Removido:%s", i->nome);
        strcpy(str, i->nome);

        aux = i;
        i = i->prox;
        if(i == NULL)
            f = NULL;
    
        free(aux);

        return str;
    }
}










/*Funcao que apaga todos os nos da lista L*/
void desalocar(pacientes *&L)
{
    pacientes *aux;

    while(L != NULL)
    {
        aux = L;
        L = L->prox;
        free(aux);
    }
}

void imprime(pacientes *L)
{
    pacientes *p;
    for(p = L; p != NULL; p = p->prox)
        printf("%s ", p->nome);

}


void interseccao(pacientes *i1, pacientes *i2)
{
    pacientes *p, *q;
    bool achou = false;
    int cont = 0;

    for(p = i1; p != NULL; p = p->prox)
    {
            achou = false;
            for(q = i2; q != NULL && !achou; q = q->prox)
            {
                if(strcmp(p->nome, q->nome) == 0){
                    printf("%s ", p->nome);
                    achou = true;
                    cont = 1;
                }
            }
    }
    if(cont == 0)
        printf("Nenhum nome em comum.\n");
}


