/*
    Institui��o: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Lucas Cavalcante da Silva
    Data: 01/03/2024

    Quest�o 03A
    Fa�a um programa que preencha um vetor com 10 n�meros reais.
    Em seguida, calcule e mostre na tela a quantidade de n�meros negativos e a soma dos n�meros positivos desse vetor.
*/

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VETOR 10

int main() {
    float vetor[TAMANHO_VETOR];     // Vetor para receber os dados do usu�rio.
    char i;                         // Vari�vel usada para iterar estruturas de repeti��o.
    char qtd_num_negativos = 0;     // Vari�vel para contar a quantidade de n�meros negativos no vetor.
    float soma;                     // Vari�vel para armazenar a soma dos valores positivos do vetor.

    // Ler vetor de n�meros decimais da entrada padr�o.
    for (i=0; i<TAMANHO_VETOR; i++) {
        scanf("%f", &vetor[i]);
    }

    // Iterar pelo vetor para contar a quantidade de n�meros negativos e calcular a soma dos positivos.
    for (i=0; i<TAMANHO_VETOR; i++) {
        // Se o elemento atual for negativo, incrementa o contador de n�meros negativos.
        if (vetor[i] < 0) {
            qtd_num_negativos++;
        } else { // Caso contr�rio, adiciona o valor positivo ao total da soma.
            soma += vetor[i];
        }
    }

    // Exibir a quantidade de n�meros negativos e a soma dos positivos na sa�da padr�o.
    printf("%d %.2f\n", qtd_num_negativos, soma);

    // Retorna 0 para o sistema operacional indicando que o processo encerrou com sucesso.
    return EXIT_SUCCESS;
}
