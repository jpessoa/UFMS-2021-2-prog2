#include <stdio.h>



void impressao3(int N)

{

     if(N < 10)

         printf("%d", N);

     else

     {

         printf("%d.", N%10);

         impressao3(N/10);

     }

}





void impressao4(int N)

{

    if(N < 10)

         printf("%d", N);

     else

     {

         impressao4(N/10);

         printf(".%d", N%10);

     }     

}







int main()

{

    int n;



    scanf("%d", &n);



    impressao3(n);

    printf("\n");



    impressao4(n);

    printf("\n");

}