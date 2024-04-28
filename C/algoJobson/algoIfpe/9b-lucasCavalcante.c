/*
    Institui��o: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Lucas Cavalcante da Silva
    Data: 01/03/2024

    Faça um programa que calcule o desvio-padrão d de um vetor V contendo n números em que m é a média desse vetor.
    Considere n = 8. O vetor v deve ser lido do teclado.


*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAMANHO_VETOR 8

int main()
{
    int *vetor;                          // Ponteiro para armazenar os dados de entrada.
    int i, d, media, somaDesvios, total; // Variável usada para iterar no loop.

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
        scanf("%d", vetor + i);
        total += *(vetor + i);
    }

    media = total / TAMANHO_VETOR;

    // Cálculo da soma dos quadrados dos desvios
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        somaDesvios += pow((*(vetor + i) - media), 2); // Soma dos quadrados das diferenças da média
    }

    // Cálculo do desvio padrão
    d = sqrt(somaDesvios / TAMANHO_VETOR); // Raiz quadrada da média dos quadrados dos desvios

    // Exibir o resultado na saída padrão.
    printf("%d", d);

    // Libera a memória alocada para os vetores.
    free(vetor);

    // Retorna 0 para o sistema operacional indicando que o programa terminou com sucesso.
    return EXIT_SUCCESS;
}
