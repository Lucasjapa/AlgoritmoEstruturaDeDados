/*
    Institui��o: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Lucas Cavalcante da Silva
    Data: 01/03/2024

    Leia um vetor com 10 números de ponto flutuante.
    Em seguida, ordene os elementos desse vetor e imprima o vetor na tela.


*/

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VETOR 10

int main()
{
    float *vetor, maior; // Ponteiro para armazenar os dados de entrada.
    int i, j;            // Variável usada para iterar no loop.

    // Aloca na heap espaço para 8 inteiros e verifica se o espaço foi alocado corretamente.
    vetor = malloc(sizeof(int) * TAMANHO_VETOR);
    if (vetor == NULL)
    {
        printf("Falha ao alocar memoria.\n");
        return 1;
    }

    // Ler vetor de números inteiros da entrada padrão.
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        scanf("%f", vetor + i);
    }

    // Ordena o vetor em ordem crescente
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        for (j = i; j < TAMANHO_VETOR; j++)
        {
            // Troca os elementos de lugar, colocando sempre o menor valor nas casas iniciais.
            if (*(vetor + i) > *(vetor + j) && i != j)
            {
                maior = *(vetor + i);
                *(vetor + i) = *(vetor + j);
                *(vetor + j) = maior;
            }
        }
    }

    // Exibe o vetor de quadrados na saída padrão.
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        printf("%.1f ", *(vetor + i));
    }

    // Libera a memória alocada para os vetores.
    free(vetor);

    // Retorna 0 para o sistema operacional indicando que o programa terminou com sucesso.
    return EXIT_SUCCESS;
}
