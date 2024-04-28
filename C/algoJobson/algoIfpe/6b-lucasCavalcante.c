/*
    Institui��o: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Lucas Cavalcante da Silva
    Data: 01/03/2024

    Leia um conjunto de números reais, armazenando-o em vetor.
    Em seguida, calcule o quadrado de cada elemento desse vetor armazenando esse resultado em outro vetor.
    Os conjuntos têm, no máximo, 20 elementos. Imprima os dois conjuntos de números.


*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAMANHO_VETOR 20

int main()
{
    int *vetor; // Ponteiros para os vetores dinâmicos que receberão os dados e armazenarão os resultados.
    char i = 0; // Variável usada para iterar em loops.

    // Aloca na heap espaço para 20 inteiros e verifica se o espaço foi alocado corretamente.
    vetor = malloc(sizeof(int) * TAMANHO_VETOR);
    if (vetor == NULL)
    {
        printf("Falha ao alocar memoria.\n");
        return 1;
    }

    // Lê os dados do usuário e calcula o quadrado de cada elemento.
    while (i < TAMANHO_VETOR)
    {
        scanf("%d", vetor + i); // Lê um inteiro do usuário e armazena no vetor.

        *(vetor + i) = pow(*(vetor + i), 2); // Calcula o quadrado do valor e armazena no vetorResposta.
        i++;                                 // Incrementa o índice para a próxima iteração.
    }

    // Exibe o vetor de quadrados na saída padrão.
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        printf("%d ", *(vetor + i));
    }

    // Libera a memória alocada para os vetores.
    free(vetor);

    // Retorna 0 para o sistema operacional indicando que o processo encerrou com sucesso.
    return EXIT_SUCCESS;
}
