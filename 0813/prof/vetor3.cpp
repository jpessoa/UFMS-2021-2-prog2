/* 
Aula de 2021-08-13
PROGRAMA LE MAX NOTAS, CALCULA A MEDIA ARITMETICA ENTRE ELAS,
CALCULA QUANTAS NOTAS ESTAO ACIMA E ABAIXO DA MEDIA
*/
#include <stdio.h> 

int main()
{
   int n;

   printf("Digite o tamanho do vetor: ");
   scanf("%d", &n);

   int v[n];

   // leitura
   printf("Digite %d números: ", n);
   for (int i = 0; i < n; i++)
      scanf("%d", &v[i]);

   printf("Os %d números digitados são: ", n);
   for (int i = 0; i < n; i++)
      printf("%d ", v[i]);
   
   printf("\n"); 
   return 0;
}