/*
    Instituição: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Lucas Cavalcante da Silva
    Data: 01/03/2024

    Questão 05B
    Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros números naturais que não são múltiplos de 7.
    Ao final, imprima esse vetor na tela.

*/

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VETOR 100

int main() {
    int* vetor;     // Ponteiro para armazenar os dados.
    char i, j = 0;  // Variáveis usadas para iterar estruturas de repetição.

    // Aloca na HEAP um espaço de 100 inteiros (400 bytes) e verifica se o espaço foi alocado corretamente.
    vetor = malloc(sizeof(int) * TAMANHO_VETOR);
    if (vetor == NULL) {
        printf("Falha ao alocar memória.\n");
        return 1;
    }

    // Loop para preencher o vetor com os primeiros 100 números naturais que não são múltiplos de 7.
    while (i < TAMANHO_VETOR) {
        // Verifica se j não é múltiplo de 7.
        if(j%7 != 0) {
            // Preenche o vetor na posição i com o valor de j.
            *(vetor+i) = j;
            // Incrementa i para avançar para a próxima posição no vetor.
            i++;
        }
        // Incrementa j para verificar o próximo número natural.
        j++;
    }

    // Exibir o vetor resultante na saída padrão.
    for (i=0; i<TAMANHO_VETOR; i++) {
        printf("%d ", *(vetor+i));
    }

    // Libera a memória alocada.
    free(vetor);

    // Retorna 0 para o sistema operacional indicando que o processo encerrou com sucesso.
    return EXIT_SUCCESS;
}

