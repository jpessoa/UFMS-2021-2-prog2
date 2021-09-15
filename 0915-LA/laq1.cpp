/*
Lista avaliativa sobre registros (entrega até 15/09)
https://ava.ufms.br/mod/quiz/view.php?id=320938

Faça um programa para simular uma agenda de compromissos e:
• Crie e leia um vetor de 5 estruturas de dados com: compromisso (máximo 60 letras) 
  e data, nesta ordem. A data deve ser outra estrutura de dados contendo dia, mês e ano. 
• Leia dois inteiros M e A e mostre todos os compromissos do mês M do ano A. Repita o 
   procedimento até ler M = 0.

Dica: utilize  scanf("%d/%d/%d", &variavel_dia, &variavel_mes, &variavel_ano); para 
      leitura formatada da data.
*/
/*
No link abaixo tem exemplod de agenda de aniversário
https://ava.ufms.br/pluginfile.php/577638/mod_resource/content/1/reg-vet-mat.pdf
*/

#include <stdio.h>
#include<string.h>
#define MAX 5

/*struct tipoData{
    int dia, mes, ano;
};*/

struct {
    char compromisso;
    int dia, mes, ano;
    //tipoData datacompro;
} Agenda [MAX];

int main()
{
    int i, M, A, dcano, dcmes;
    /* Crie e leia um vetor de 5 estruturas de dados com: compromisso (máximo 60 letras) 
       e data, nesta ordem.       */
    for (i = 0; i < 5; i++)
    {
        printf("Digite descrição do compromisso: ");
        scanf(" %[^\n]", Agenda[i].compromisso);

        printf("Digite a data no formato DD/MM/AAAA: ");
        scanf("%d/%d/%d", &Agenda[i].dia, &Agenda[i].mes, &Agenda[i].ano);

    }

    /* Leia dois inteiros M e A e mostre todos os compromissos do mês M do ano A. Repita o 
       procedimento até ler M = 0.    */
    while (M != 0)
    {
        printf("\nInforme uma data (MM/AAAA): ");
        scanf("%d/%d", &dcmes, &dcano);

    }
    
}