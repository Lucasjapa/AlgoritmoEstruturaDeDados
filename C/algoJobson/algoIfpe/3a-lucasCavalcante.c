/*
    Instituição: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Lucas Cavalcante da Silva
    Data: 01/03/2024

    Questão 03A
    Faça um programa que preencha um vetor com 10 números reais.
    Em seguida, calcule e mostre na tela a quantidade de números negativos e a soma dos números positivos desse vetor.
*/

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VETOR 10

int main() {
    float vetor[TAMANHO_VETOR];     // Vetor para receber os dados do usuário.
    char i;                         // Variável usada para iterar estruturas de repetição.
    char qtd_num_negativos = 0;     // Variável para contar a quantidade de números negativos no vetor.
    float soma;                     // Variável para armazenar a soma dos valores positivos do vetor.

    // Ler vetor de números decimais da entrada padrão.
    for (i=0; i<TAMANHO_VETOR; i++) {
        scanf("%f", &vetor[i]);
    }

    // Iterar pelo vetor para contar a quantidade de números negativos e calcular a soma dos positivos.
    for (i=0; i<TAMANHO_VETOR; i++) {
        // Se o elemento atual for negativo, incrementa o contador de números negativos.
        if (vetor[i] < 0) {
            qtd_num_negativos++;
        } else { // Caso contrário, adiciona o valor positivo ao total da soma.
            soma += vetor[i];
        }
    }

    // Exibir a quantidade de números negativos e a soma dos positivos na saída padrão.
    printf("%d %.2f\n", qtd_num_negativos, soma);

    // Retorna 0 para o sistema operacional indicando que o processo encerrou com sucesso.
    return EXIT_SUCCESS;
}
