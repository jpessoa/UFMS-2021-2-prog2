
#include <stdio.h> 

#define LIN 3
#define COL 3

int main()
{
   int i, j;
   int matriz[LIN][COL];


   // leitura da matriz -- percorrendo a matriz por linha   
   for (i = 0; i < LIN; i++)
      for (j = 0; j < COL; j++)
         scanf("%d", &matriz[i][j]);

   // percorrendo a matriz por linha
   for (i = 0; i < LIN; i++){
      for (j = 0; j < COL; j++)
         printf("%d ", matriz[i][j]);

      printf("\n");
   }

   return 0;
}