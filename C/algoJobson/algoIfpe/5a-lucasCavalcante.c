/*
    Instituição: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Lucas Cavalcante da Silva
    Data: 01/03/2024

    Questão 05A
    Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros números naturais que não são múltiplos de 7.
    Ao final, imprima esse vetor na tela.

*/

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VETOR 100

int main() {
    int vetor[TAMANHO_VETOR];   // Vetor para receber os dados.
    char i, j = 0;              // Variáveis usadas para iterar estruturas de repetição.

    // Loop para preencher o vetor com os primeiros 100 números naturais que não são múltiplos de 7.
    while (i < TAMANHO_VETOR) {
        if(j%7 != 0) {
            vetor[i] = j;
            i++;
        }
        j++;
    }

   // Exibir o vetor resultante na saída padrão.
    for (i=0; i<TAMANHO_VETOR; i++) {
        printf("%d ", vetor[i]);
    }

    // Retorna 0 para o sistema operacional indicando que o processo encerrou com sucesso.
    return EXIT_SUCCESS;
}


