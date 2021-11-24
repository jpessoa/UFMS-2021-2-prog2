/*
Considerando o tipo struct definido abaixo para as listas encadeadas neste exercício.

struct celula{

     char nome[31];

     struct celula *prox;

};

Construa uma lista L3 que corresponde à intersecção de duas listas L1 e L2 simplesmente encadeadas. Crie uma função com o protótipo abaixo para realizar a intersecção das listas. A função retorna o ponteiro para a lista L3 criada.

celula* interseccao(celula *L1, celula *L2);

O seu programa deve ler dois conjuntos de nomes e armazená-los em L1 e L2, respectivamente. Construa L3 e imprima.

Entrada: DOIS conjuntos de nomes (apenas primeiro nome de uma pessoa), representando L1 e L2. A palavra "FIM" encerra a entrada de dados de uma lista.

Ana Liane Joaquim Bianca Tatiane Beatriz Laura FIM

Joaquim Maria Jona Joel Marcelo Laura Ana FIM

Saída: uma lista de nomes pertencentes a ambas as listas (L1 e L2)

Ana Joaquim Laura

Caso a lista resultante seja vazia, imprima a palavra "VAZIA", em maiúsculo.
*/