#include<stdio.h>
#define MAX 20

int main()
{
	int op;
	tMarca M[MAX];
	int tamM = 0;
	int codmarca;
	float nota;

	do{
		printf("\n[1] Cadastrar marca\n");
		printf("[2] Buscar Marca\n");
		printf("[3] Sair\n");
		printf("Sair\n");
		scanf("%d", &op);


	}while (op != 3);

	return 0;
}