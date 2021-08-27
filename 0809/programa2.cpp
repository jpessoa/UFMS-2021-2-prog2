/* 
Aula de 2021-08-09
https://ava.ufms.br/pluginfile.php/577622/mod_resource/content/1/aula5.pdf
Página 56

Operadores  >>  https://youtu.be/txyjr8iDvqc?t=5099

*/
#include <stdio.h> // Biblioteca de Entrada/Saída

// DECLARAÇÃO DE VARIÁVEIS
// Letras maiúscula e minúsculas, dígitos(0,1,...8,9), Underline(_)
// Sempre começa com uam letra,

/* ESPECIFICADORES DE TIPO PARA IMPRESSÃO DOS DADOS

%d - números inteiros
%f - números reais do tipo float e double

*/

int main()
{
    //tipo identificador
    int num1;
    int num2, num3, x, y, z;
    int a;
    int b;
    int c;
    float nota1 = 2.5; // 6 casas de precisão
    double nota2 = 5.123456789; // 15 casas de precisão

    float altura = 1.87;
    a = 2;
    b = 3;

    //a = b = c = 0; Atribuição multimpla

    printf("\n%d + %d = %d", a, b, a+b);
    printf("\n%.2f", nota1);
    printf("\n%.10f", nota2);

    printf("\nHello, world!\n");
    return 0;
}
