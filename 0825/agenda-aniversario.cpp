#include <stdio.h>
#define DIM 100
#define MAX 50

struct tipoData{
    int dia, mes, ano;
};
struct tipoAgenda{
    char nome[MAX+1];
    int telefone;
    tipoData aniver;
};

int main()
{
    tipoAgenda agenda[DIM];
    tipoData data;
    int i, n;
    printf("Informe a quantidade de amigos: ");
    scanf("%d", &n);

    /*leitura dos dados do vetor*/
    for (i = 0; i < n; i++)
    {
        scanf(" %[^\n]", agenda[i].nome);
        scanf("%d", &agenda[i].telefone);
        scanf("%d/%d/%d", &agenda[i].aniver.dia, &agenda[i].aniver.mes, &agenda[i].aniver.ano);
    }
    printf("\nInforme uma data (dd/mm): ");
    scanf("%d/%d", &data.dia, &data.mes);

    for (i = 0; i < n; i++)
        if (agenda[i].aniver.dia == data.dia && agenda[i].aniver.mes == data.mes)
            printf("%s, %d", agenda[i].nome , agenda[i].telefone);

    return 0;
}