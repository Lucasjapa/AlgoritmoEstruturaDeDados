/*
    Instituição: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Lucas Cavalcante da Silva
    Data: 01/03/2024

    Questão 04B
    Faça um programa que receba do usuário dois arrays, A e B, com 10 números inteiros cada.
    Crie um novo array C calculando C = A − B. Mostre na tela os dados do array C.

*/

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VETOR 10

int main()
{
    int *a, *b, *c; // Ponteiros para receber os dados do usuário.
    char i;         // Variável usada para iterar estruturas de repetição.

    // Aloca na HEAP um espaço de 10 inteiros (40 bytes) e verifica se o espaço foi alocado corretamente.
    a = malloc(sizeof(int) * TAMANHO_VETOR);
    b = malloc(sizeof(int) * TAMANHO_VETOR);
    c = malloc(sizeof(int) * TAMANHO_VETOR);
    if (a == NULL || b == NULL || c == NULL)
    {
        printf("Falha ao alocar memória.\n");
        return 1;
    }

    // Ler vetor 'a' de números inteiros da entrada padrão.
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        scanf("%d", a + i);
    }

    // Ler vetor 'b' de números inteiros da entrada padrão.
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        scanf("%d", b + i);
    }

    // Iterar pelos vetores 'a' e 'b' e calcular a diferença entre os elementos correspondentes.
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        *(c + i) = *(a + i) - *(b + i);
    }

    // Exibir o vetor resultante 'c' na saída padrão.
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        printf("%d ", *(c + i));
    }

    // Libera a memória alocada.
    free(a);
    free(b);
    free(c);

    // Retorna 0 para o sistema operacional indicando que o processo encerrou com sucesso.
    return EXIT_SUCCESS;
}
