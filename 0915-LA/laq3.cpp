/*
Lista avaliativa sobre registros (entrega até 15/09)
https://ava.ufms.br/mod/quiz/view.php?id=320938

Resposta do AVA
Faça um programa que controla o consumo de energia dos eletrodomésticos de uma casa e:
• Crie e leia 5 eletrodomésticos que contém nome (máximo 15 letras), potência (real, em kW) e tempo ativo 
por dia (real, em horas).
• Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o consumo relativo de cada 
  eletrodoméstico (consumo/consumo total) nesse período de tempo. Apresente este último dado em porcentagem.

Dica: utilize %.2f para impressão dos valores reais com duas casas decimais.
*/

#include <stdio.h>
#define MAX 15

struct tEletro
{
    char nome[MAX+1];
    double potencia;
    double tempo_ativo_por_dia;
};

int main()
{
    tEletro eletrodomesticos[5];

    int t, i;
    double consumo_total = 0.0;

    for (i = 0; i < 5; i++)
    {
        scanf(" %s", eletrodomesticos[i].nome);
        scanf("%lf%lf", &eletrodomesticos[i].potencia, &eletrodomesticos[i].tempo_ativo_por_dia);
    }
    scanf("%d", &t);

    for (i = 0; i < 5; i++)
        consumo_total += eletrodomesticos[i].potencia * eletrodomesticos[i].tempo_ativo_por_dia;
    consumo_total *= t;
    printf("%.2f\n", consumo_total);
    for (i = 0; i < 5; i++)
        printf("%.2f\n", ((100 * eletrodomesticos[i].potencia * eletrodomesticos[i].tempo_ativo_por_dia * t)/consumo_total));
    
    return 0;
}