/*
Considerando o tipo struct definido abaixo para as listas encadeadas neste exercício.

struct celula{
     int chave;
     struct celula *prox;
};

Construa uma lista L3 que corresponde à união de duas listas L1 e L2 simplesmente encadeadas 
(lembre-se que o resultado da união de dois conjuntos não possui elementos repetidos). 
Ao término da função, as listas L1 e L2 devem ser apagadas. Crie uma função com o protótipo abaixo 
para realizar a união das listas. 

void uniao (celula *&L1, celula *&L2, celula *&L3);

O seu programa deve ler dois conjuntos de números e armazená-los em L1 e L2, respectivamente. 
Construa L3 e imprima. L3 não deve ser impressa dentro da função uniao, deve ser impressa na main.

Entrada: DOIS conjuntos de números positivos (um número menor ou igual a zero, encerra a entrada 
de dados de L1 e de L2)

2  7  9  12  54  23  -3

8  9  24  37  88  99  2  0

Saída: uma lista de números resultante da união de L1 e L2

2  7  9  12  54  23  8  24  37  88  99 

*/