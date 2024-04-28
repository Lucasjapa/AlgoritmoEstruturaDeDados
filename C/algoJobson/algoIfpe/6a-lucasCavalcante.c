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

#define TAMANHO_VETOR 20

int main()
{
    int vetor[TAMANHO_VETOR];         // Vetor para armazenar os dados de entrada.
    int vetorResposta[TAMANHO_VETOR]; // Vetor para armazenar os quadrados dos dados de entrada.
    int i = 0;                        // Variável usada para iterar no loop. Alterado de char para int para suportar índices maiores e evitar problemas de tipo.

    // Preenche os vetores com os dados de entrada e seus quadrados.
    while (i < TAMANHO_VETOR)
    {
        scanf("%d", &vetor[i]); // Lê um inteiro do usuário e armazena no vetor.

        vetorResposta[i] = vetor[i] * vetor[i]; // Calcula o quadrado do valor e armazena no vetorResposta.
        i++;                                    // Incrementa o índice para a próxima iteração.
    }

    // Exibe o vetor de quadrados na saída padrão.
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        printf("%d ", vetorResposta[i]); // Imprime o i-ésimo elemento do vetorResposta.
    }

    // Retorna 0 para o sistema operacional indicando que o programa terminou com sucesso.
    return EXIT_SUCCESS;
}
