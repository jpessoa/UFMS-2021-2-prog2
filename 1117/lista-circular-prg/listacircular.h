/*lista encadeada circular*/


#define MAX 50


 struct celulaCirc{
    char nome[MAX];
    struct celulaCirc *prox;
};

void adicionar(char *s, celulaCirc *&cur);

void remover(celulaCirc *&cur);

void desalocar(celulaCirc *&circ);

void imprimir(celulaCirc *cur);

celulaCirc* avancar(celulaCirc *cur);

void avancar2(celulaCirc *&cur);

