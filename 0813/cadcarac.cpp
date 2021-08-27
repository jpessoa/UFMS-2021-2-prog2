/* 
Aula de 2021-08-13
Cadeias de caracteres
*/
#include <stdio.h> 
#include <string.h> // strlen

int main()
{
    char palavra[10] = "Ola!";
    int n;

    n = 0;
    while (palavra[n] != '\0')
        n++;
    printf("O comprimento da palavra é %d\n", n);
    // Armazenado o resultado de srteln em uma variavél, pois se colocar direto dá erro
    int tam = strlen(palavra);
    printf("O comprimento da palavra é %d\n", tam);

    return 0;
}