/*
7 - Algoritmos de Ordenação
Lista avaliativa Ordenação e Eficiência de algoritmos
*/

#include <stdio.h>
#include <string.h>
#define MAX 100

struct Aluno
{
	char nome[MAX];
	int problemas;
};

// prototipo
void quicksort(int p, int r, int v[MAX]);
void imprime(int n, int v[MAX]);
int separa(int p, int r, int v[MAX]);

int main()
{
    // ler tamanho do vetor
    int n, i;
    int v[MAX];

    //printf("\nInforme o tamanho do vetor : ");
    scanf("%d", &n);
    // ler dados do vetor
    for (i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    // ordena vetor
    quicksort(0, n - 1, v);

    // imprimir vetor
    imprime(n, v);

    return 0;
}

void quicksort(int p, int r, int v[MAX])
{
    int q;
    if (p < r){
        q = separa(p, r, v);
        quicksort(p, q, v);
        quicksort(q+1, r, v);
    }
}

void imprime(int n, int v[MAX])
{
    int i;

    for (i = 0; i < n ; i++) {
        printf("%d ", v[i]);
    }
}

int separa(int p, int r, int v[MAX])
{
    int x, i, j, aux;

    x = v[p];
    i = p -1;
    j = r + 1;
    while (1) {
        do {
            j--;
        } while (v[j] < x);
        do {
            i++;
        } while (v[i] > x);
        if (i < j)
        {
            //troca
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
        }
        else
            return j;
    }
}


/*
Entrada:  A primeira linha de cada instância consiste em um inteiro n(1 ≤ n ≤ 100) indicando o número de alunos na competição. 
Cada uma das n linhas seguintes contém o nome do aluno e o número de problemas resolvidos por ele. O nome consiste em uma sequência 
de letras [ a-z ] com no máximo 20 letras e cada time resolve entre 0 a 10 problemas.
           
Saída: A saída é composta dos nomes dos alunos ordenados em ordem decrescente de pontuação (do maior para o menor), seguida de uma linha em branco.

Por exemplo:
Entrada1
4
cardonha 9
naofoidestavez 3
marcel 9
eupassei 3

Resultado1
cardonha marcel eupassei naofoidestavez

Entrada2
4
fulano 4
beltrano 7
zequinha 1
andrezinho 1

Resultado2
beltrano fulano andrezinho zequinha

-*-*-*-*-
Prof. Wallywow da Universidade da Columbia Britânica está muito preocupado com a queda do nível de atenção de seus estudantes. 
Ele já tentou várias técnicas mundialmente conhecidas para incentivar os alunos a prestar atenção nas suas aulas e fazer as tarefas que ele 
passa para a turma: deu nota para os alunos mais participativos, ofereceu chocolates aos alunos, levou seu karaokê e cantava nas aulas etc. 
Como tais medidas não levaram a uma melhora no comparecimento às aulas (a ideia do karaokê, inclusive, mostrou-se bastante infeliz... na segunda 
aula com karaokê a turma reduziu-se a um aluno – que tinha problemas auditivos) ele teve uma brilhante ideia: faria uma competição entre os alunos.

Prof. Wallywow passou um conjunto de problemas aos alunos, e deu um mês para que eles os resolvessem. No final do mês os alunos mandaram o número 
de problemas resolvidos corretamente. A promessa do brilhante didata era reprovar sumariamente o último colocado da competição. Os alunos seriam 
ordenados conforme o número de problemas resolvidos, com empates resolvidos de acordo com a ordem alfabética dos nomes (não há homônimos na turma). 
Isso fez com que alunos com nomes iniciados nas últimas letras do alfabeto se esforçassem muito nas tarefas, e não compartilhassem suas soluções 
com colegas (especialmente aqueles cujos nomes começassem com letras anteriores). Sua tarefa neste problema é escrever um programa que lê os 
resultados dos alunos do Prof. Wallywow e imprime o nome do infeliz reprovado.
Qualquer semelhança entre o Prof. Wallywow e o Prof. Carlinhos é mera coincidência. Seu programa deve utilizar uma estrutura que contém o nome e 
o número de problemas resolvidos. Para ordenar o vetor é necessário utilizar o método de ordenação por inserção.

*/