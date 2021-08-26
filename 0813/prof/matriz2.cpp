
#include <stdio.h> 


int main()
{
   int i, j;
   int n;   // ordem da matriz


   // leitura da ordem da matriz
   scanf("%d", &n);

   int matriz[n][n];


   // leitura da matriz -- percorrendo a matriz por linha   
   for (i = 0; i < n; i++)
      for (j = 0; j < n; j++)
         scanf("%d", &matriz[i][j]);

   // percorrendo a matriz por linha
   for (i = 0; i < n; i++){
      for (j = 0; j < n; j++)
         printf("%d ", matriz[i][j]);

      printf("\n");
   }

   return 0;
}