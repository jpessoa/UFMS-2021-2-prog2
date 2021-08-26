/* 
Aula de 2021-08-13
*/
#include <stdio.h> 
#include <string.h> // strlen, strcpy, strcmp, strcat

#define MAX 50

int main()
{
   char nome[MAX+1];
   char cidade[] = "Campo Grande";
   char cid[13] = "Campo";
   //char msg[5] = "abcdefghijklmn";

   //char cid[13] = {'C','a','m','p','o',' ', 'G', 'r', 'a', 'n', 'd', 'e'};

   
   // IMPRESSAO - parametro %s
   printf("%s\n", cidade);
   printf("%s\n", cid);


   // LEITURA - cadeia sem espaço
   //scanf(" %s", nome);
   //printf("%s\n", nome);


   // LEITURA e IMPRESSAO - cadeia com espaço
   scanf(" %[^\n]", nome);
   printf("%s\n", nome);


   // tamanho de uma string
   int tam = strlen(cidade);
   printf("\n%s tem %d caracteres\n", cidade, tam);

   // comparacao entre 2 strings

   /*
   strcmp(s1,s2)
   < 0  (s1 < s2)
   = 0  ( s1 == s2)
   > 0  ( s1 > s2)*/

   printf("\n%d\n",strcmp(cidade, cid));

   printf("%d\n",strcmp(cid, cidade));

   char s1[MAX], s2[MAX];

   scanf(" %s %s", s1, s2);
   
   if(strcmp(s1, s2) < 0)
      printf("%s < %s", s1, s2);
   else if(strcmp(s1, s2) == 0)
      printf("%s = %s", s1, s2);
   else
      printf("%s > %s", s1, s2);

   printf("\n\n\n\n\n");


   // atribuindo um valor a uma string
   strcpy(s2,  "hello, world!");
   printf("\ns2=%s", s2);


   // copiando uma string para outra
   strcpy(s1, s2);     // s1 = s2
   printf("\ns1=%s\n", s1);

   printf("\n\n\n\n\n");


   // concatenacao --> s1 = s1 + s2

   strcat(s1, "---");
   strcat(s1, s2);

   printf("\n%s", s1);


   printf("\n"); 
   return 0;
}