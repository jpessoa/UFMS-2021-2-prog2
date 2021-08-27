/* 
Aula de 2021-08-13
PROGRAMA LE MAX NOTAS, CALCULA A MEDIA ARITMETICA ENTRE ELAS,
CALCULA QUANTAS NOTAS ESTAO ACIMA E ABAIXO DA MEDIA
*/
#include <stdio.h> 

#define MAX 5

int main()
{
   int i, menor, maior;
   float nota[MAX], soma, media;

   // leitura
   for (i = 0; i < MAX; i++)
      scanf("%f", &nota[i]);

   soma = 0.0;
   for (i = 0; i < MAX; i++)
         soma = soma + nota[i];
   
   // calculo da media
   media = soma / MAX;

   // inicializacao de variaveis
   menor = 0;
   maior = 0;

   for (i = 0; i < MAX; i++) 
   { 
      if (nota[i] < media)
         menor++;
      if (nota[i] > media)
         maior++;
   }
   printf("\n%2.2f %d %d\n", media, menor, maior); 
   return 0;
}