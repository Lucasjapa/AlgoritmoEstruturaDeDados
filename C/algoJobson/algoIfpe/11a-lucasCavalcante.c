/*
    Institui��o: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Lucas Cavalcante da Silva
    Data: 01/03/2024

    Faça um programa que permita ao usuário entrar com uma matriz de tamanho 3 × 3 de números inteiros.
    Em seguida, calcule um vetor contendo três posições, em que cada posição deverá armazenar a soma dos números de cada coluna da matriz.
    Exiba na tela esse array.


*/

#include <stdio.h>
#include <stdlib.h>

#define LINHA 3
#define COLUNA 3

int main()
{
    int vetor[LINHA][COLUNA], resposta[COLUNA]; // Vetor para armazenar os dados de entrada e saída.
    int i, j;                                   // Variável usada para iterar no loop.

    // Ler matriz de números inteiros da entrada padrão.
    for (i = 0; i < LINHA; i++)
    {
        for (j = 0; j < COLUNA; j++)
        {
            scanf("%d", &vetor[i][j]);
        }
    }

    // Soma os valores em cada coluna
    for (j = 0; j < COLUNA; j++)
    {
        for (i = 0; i < LINHA; i++)
        {
            resposta[j] += vetor[i][j];
        }
    }

    // Exibe a soma das colunas na saída padrão.
    for (i = 0; i < COLUNA; i++)
    {
        printf("%.d ", resposta[i]);
    }

    // Retorna 0 para o sistema operacional indicando que o programa terminou com sucesso.
    return EXIT_SUCCESS;
}
