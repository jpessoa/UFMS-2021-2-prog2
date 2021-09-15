#include <stdio.h>
#define DIM 100
#define MAX 50
/* Recebe um inteiro positivo n e n nomes, telefones e datas de
aniversário, recebe uma data de consulta e mostra os nomes
e telefones das pessoas que aniversariam nesta data */

int main(void)
{
    int i, n;
    struct {
        char nome[MAX+1];
        int telefone;
        struct {
            int dia;
            int mes;
            int ano;
        } aniver;
    } agenda[DIM];
    struct {
        int dia;
        int mes;
    } data;
    
    printf("Informe a quantidade de amigos: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("\nAmigo(a): %3d\n", i+1);
        printf(" Nome : ");
        scanf(" %[^\n]", agenda[i].nome);
        printf(" Telefone : ");
        scanf("%d", &agenda[i].telefone);
        printf(" Aniversário: ");
        scanf("%d/%d/%d", &agenda[i].aniver.dia, &agenda[i].aniver.mes,&agenda[i].aniver.ano);
}
printf("\nInforme uma data (dd/mm): ");
scanf("%d/%d", &data.dia, &data.mes);
for (i = 0; i < n; i++)
    if (agenda[i].aniver.dia == data.dia && agenda[i].aniver.mes == data.mes)
    printf("%-50s %8d\n", agenda[i].nome, agenda[i].telefone);
return 0;
}