/*
Aula de 2021-09-13
*/
#include<stdio.h>
int somadigito(int n)
{
    int result; 
    if (n <=10)
        result = n ;
    else
        result = (n%10) + somadigito(n/10);
    return result;


}

int main()
{
    int numero, somadig;
    printf("Digite o numero a ser calculado : ");
	scanf("%d", &numero);
    somadig = somadigito(numero);
    printf("\n A soma dos digitos de %d é %d", numero, somadig);
 
	return 0;
}

