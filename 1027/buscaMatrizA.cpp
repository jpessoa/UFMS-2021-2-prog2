#include <stdio.h>
#include <stdlib.h>  // calloc, free

// aloca uma matriz mxn e retorna o ponteiro para ela
int** alocacaoMatriz(int m, int n);

// le e armazena dados na matriz mxn
void leitura(int m, int n, int **mat);

// imprime uma matriz mxn
void impressao(int m, int n, int **mat);

// funcao para realizar a busca de x na matriz e retornar
// o numero de ocorrencias de x
int buscaMatriz(int m, int n, int **mat, int x);

// funcao para desalocar uma matriz

int main()
{
   int n,   // ordem da matriz 
       x;   // elemento a ser buscado na matriz
   int **matriz = NULL; // ponteiro para a matriz
   

   /*alocacao da matriz*/

   /*leitura da matriz*/


   /* buscar x */


    printf("\n");

   return 0 ;
}

int buscaMatriz(int m, int n, int **mat, int x)
{


}

int** alocacaoMatriz(int m, int n)
{
   int **A;          
   int i;

   A = (int **) calloc(m, sizeof(int*)); 
   if(A == NULL)
      return NULL;
   for(i = 0; i < m; i++){
      A[i] = (int *) calloc(n, sizeof(int));
      if(A[i] == NULL)
         return NULL;
   }

   return A;
}


void leitura(int m, int n, int **mat)
{
   int i, j;
   for(i = 0; i < m; i++)
      for(j = 0; j < n; j++)
         scanf("%d", &mat[i][j]);
}

void impressao(int m, int n, int **mat)
{
   int i, j;
   for(i = 0; i < m; i++)
   {
      for(j = 0; j < n; j++)
         printf("%d ", mat[i][j]);

      printf("\n"); 
   }
}

