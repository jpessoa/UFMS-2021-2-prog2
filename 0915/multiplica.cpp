/*
Aula de 2021-09-15
com erro / inacabada
*/
#include<stdio.h>

int multiplica(int n1, int n2)
{
	if (n1 == 1) 
		return n2;
	else if (n2 == 1) 
		return n1;
    else
		return (n1) + multiplica(n1, n2) ;

}

int main()
{
	int n1, n2;

	scanf("%d%d", &n1,&n2);

//	printf("%d\n", multiplica(n));

	return 0;
}