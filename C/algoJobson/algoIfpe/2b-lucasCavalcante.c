/*
    Instituição: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Lucas Cavalcante da Silva
    Data: 01/03/2024

    Questão 02B
    Faça um programa que receba do usuário um vetor X com 10 posições.
    Em seguida deverão ser impressos o maior e o menor elemento desse vetor.
*/

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VETOR 10

int main() {
    int* vetor;                 // Vetor para receber os dados do usuário.
    char i;                     // Variável usada para iterar estruturas de repetição.
    char maior, menor;          // Variáveis para armazenar o maior e o menor valor do vetor.

    // Aloca na HEAP um espaço de 10 inteiros (40 bytes) e verifica se o espaço foi alocado corretamente.
    vetor = malloc(sizeof(int) * TAMANHO_VETOR);
    if (vetor == NULL) {
        printf("Falha ao alocar memória.\n");
        return 1;
    }

    // Ler vetor de inteiros da entrada padrão.
    for (i=0; i<TAMANHO_VETOR; i++) {
        scanf("%d", vetor+i);
    }

    maior = *vetor; // Inicializa 'maior' com o primeiro elemento do vetor.
    menor = *vetor; // Inicializa 'menor' com o primeiro elemento do vetor.

    // Iterar pelo vetor para encontrar o maior e o menor valor.
    for (i=0; i<TAMANHO_VETOR; i++) {
        // Se o elemento atual é maior que 'maior', atualiza 'maior'.
        if (*(vetor+i) > maior) {
            maior = *(vetor+i);
        }
        // Se o elemento atual é menor que 'menor', atualiza 'menor'.
        if (*(vetor+i) < menor) {
            menor = *(vetor+i);
        }
    }

    // Exibir o maior e o menor valor na saída padrão.
    printf("%d %d\n", maior, menor);

    // Libera a memória alocada manualmente
    free(vetor);

    // Retorna 0 para o sistema operacional indicando que o processo encerrou com sucesso.
    return EXIT_SUCCESS;
}
