/*
    Institui��o: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Lucas Cavalcante da Silva
    Data: 01/03/2024

    Faça um programa que leia um vetor de 10 posições.
    Verifique se existem valores iguais e os escreva na tela.

*/

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VETOR 10

int main()
{
    int *vetor, *iguais;       // Ponteiros para armazenar os vetores de entrada e de valores iguais.
    char j, w, i;              // Variáveis usadas para iterar nos loops.
    char validador = 0, a = 0; // Variáveis para controle: 'validador' verifica duplicatas, 'a' conta os iguais encontrados.

    // Aloca na heap espaço para 10 inteiros e verifica se o espaço foi alocado corretamente.
    vetor = malloc(sizeof(int) * TAMANHO_VETOR);
    iguais = malloc(sizeof(int) * TAMANHO_VETOR);
    if (vetor == NULL || iguais == NULL)
    {
        printf("Falha ao alocar memoria.\n");
        return 1;
    }

    // Lê um vetor de números inteiros da entrada padrão.
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        scanf("%d", vetor + i);
    }

    // Verifica se existem valores iguais no vetor e os armazena no vetor 'iguais',
    // garantindo que cada valor seja armazenado uma única vez.
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        for (j = 0; j < TAMANHO_VETOR; j++)
        {
            validador = 0;                              // Reset do validador para cada comparação.
            if (*(vetor + i) == *(vetor + j) && i != j) // Verifica se há valores iguais e diferentes índices.
            {
                // Percorre o vetor 'iguais' para verificar se o valor já foi adicionado.
                for (w = 0; w < 10; w++)
                {
                    // Se o valor já estiver no vetor 'iguais', ajusta o validador.
                    if (*(iguais + w) == *(vetor + j))
                        validador = 1;
                }
                // Se o valor não estiver no vetor 'iguais', adiciona-o.
                if (validador == 0)
                {
                    *(iguais + a) = *(vetor + i);
                    a++; // Incrementa o índice do vetor 'iguais'.
                }
            }
        }
    }

    // Imprime os valores duplicados encontrados na saída padrão, se houver.
    for (i = 0; i < a; i++)
    {
        printf("%d ", *(iguais + i)); // Imprime o i-ésimo elemento do vetorResposta.
    }

    // Libera a memória alocada.
    free(vetor);
    free(iguais);

    // Retorna 0 para o sistema operacional indicando que o programa terminou com sucesso.
    return EXIT_SUCCESS;
}
