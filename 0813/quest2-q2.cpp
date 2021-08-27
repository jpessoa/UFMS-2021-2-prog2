/*
Aula de 2021-08-13
https://ava.ufms.br/mod/quiz/attempt.php?attempt=318026&cmid=311753
Já OK no AVA

As Coordenações de Curso da FACOM desejam saber quais alunos estão cursando simultaneamente Algoritmos e 
Programação I e Introdução aSistemas Digitais. As listas dos alunos matriculados em cada uma das disciplinas 
é dada pelo RGA (Registro Geral Acadêmico) dos alunos. Para simplificar, o RGA será dado por apenas 5 dígitos, 
sendo os dois primeiros dígitos indicando os dois últimos dígitos do ano de ingresso, o terceiro indica curso 
ue o aluno está matriculado, e os dois últimos a ordem em que o aluno foi matriculado no curso. Não existem 
mais de 500 alunos cursando cada uma das disciplinas.
Projete e implemente um programa para computar a interseção das duas listas das matrículas dos alunos nessas 
disciplinas. A lista de cada disciplina é dada por um arranjo de inteiros com os números dos RGA´s dos 
estudantes na respectiva disciplina. A interseção também deve ser dada por um arranjo representando a lista 
com os RGA´s dos alunos que estão matriculados em ambas as disciplinas. O seu programa programa deve ler um 
inteiro tamA, tamanho da lista que  representa a disciplina discA, a lista de inteiros com os tamA RGA´s dos 
alunos matriculados na disciplina discA, um inteiro tamB, tamanho da lista da disciplina discB, e a lista de 
inteiros com os tamB RGA´s dos alunos matriculados na disciplina discB. O seu programa deve computar e 
imprimir a lista intAB, com a interseção das matrículas das disciplinas discA e discB. Caso não tenha nenhum 
aluno matriculado simultaneamente nas duas disciplinas, o programa deve imprimir a mensagem vazia.
A entrada é dada por 4 linhas. A primeira linha contém um inteiro tamA indicando o tamanho da primeira lista. 
A segunda linha contém os tamA elementos com os RGA´s de cada um dos alunos matriculados na disciplina discA. 
A terceira linha contém um inteiro tamB indicando o tamanho da segunda lista. 
A quarta linha contém os tamB elementos, com os RGA´s de cada um dos alunos matriculados na disciplina discB.
A saída consiste em imprimir a lista dos RGA´s dos alunos que cursam simultaneamente cada par de disciplinas. 
No caso da interseção ser vazia, imprima a mensagem vazia. Os elementos das listas devem ser impressos com um 
espaço em branco entre eles, e após o último elemento deve ser impresso um espaço e mudança de linha.

Exemplo 1

5

11111 11222 12333 12444 13555

4

11101 11222 12333 12401


11222 12333
 

Exemplo 2

2

11111 12111

1

12411


vazia
*/
#include <stdio.h>
#include <string.h>

int main()
{
    int n, m;

    //printf("\nDigite o tamanho da lista A: ");
    scanf("%d", &n);
    
    int va[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &va[i]);
    
    //printf("\nDigite o tamanho da lista B: ");
    scanf("%d", &m);
    
    int vb[m];
    for (int i = 0; i < m; i++)
        scanf("%d", &vb[i]);

    //printf("\n");

    bool vazio = true;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (va[i] == vb[j])
            {
                printf("%d ", va[i]);
                vazio = false;
            }
        }
    }
    if (vazio == true)
    {
        printf("vazia");
    }

    return 0;
}

