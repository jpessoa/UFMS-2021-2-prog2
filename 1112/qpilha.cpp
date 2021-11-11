#include <stdio.h>
#include<stdlib.h>

struct celula {
    int chave;
    struct celula *prox;
};
void empilha(int x, celula *&lst);
int desempilha(celula *&lst);

int main()
{
    celula *P;
    P = NULL;
    printf("Hello World!\n");
    empilha(5,P);
    

  return 0;
}

/*
Qual o conteúdo de uma pilha P inicialmente vazia após a execução das seguintes operações:
 empilha(5,P), empilha(3,P), desempilha(P), empilha(2,P), empilha(8,P), desempilha(P), 
 desempilha(P), empilha(9,P), empilha(1,P), desempilha(P), empilha(7,P), empilha(6,P), 
 desempilha(P), desempilha(P), empilha(4,P), desempilha(P), desempilha(P), empilha(13,P).

*/
void empilha(int x, celula *&lst)
{
 celula *nova;
 nova = (celula *) malloc(sizeof (celula));
 nova->chave = x;
 nova->prox = lst;
 lst = nova;
}
int desempilha(celula *&lst)
{
 celula *aux;
 int num;
 if(lst == NULL)
 return 0;
 else{
 num = lst->chave;
 aux = lst;
 lst = lst->prox;
 free(aux);
 return num;
 }
}