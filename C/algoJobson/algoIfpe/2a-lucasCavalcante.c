/*
    Institui��o: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Lucas Cavalcante da Silva
    Data: 01/03/2024

    Quest�o 02A
    Fa�a um programa que receba do usu�rio um vetor X com 10 posi��es.
    Em seguida dever�o ser impressos o maior e o menor elemento desse vetor.
*/

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VETOR 10

int main() {
    int vetor[TAMANHO_VETOR];   // Vetor para receber os dados do usu�rio.
    char i;                     // Vari�vel usada para iterar estruturas de repeti��o.
    char maior, menor;          // Vari�veis para armazenar o maior e o menor valor do vetor.

    // Ler vetor de inteiros da entrada padr�o.
    for (i=0; i<TAMANHO_VETOR; i++) {
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0]; // Inicializa 'maior' com o primeiro elemento do vetor.
    menor = vetor[0]; // Inicializa 'menor' com o primeiro elemento do vetor.

    // Iterar pelo vetor para encontrar o maior e o menor valor.
    for (i=0; i<TAMANHO_VETOR; i++) {
        if (vetor[i] > maior) { // Se o elemento atual � maior que 'maior', atualiza 'maior'.
            maior = vetor[i];
        }
        if (vetor[i] < menor) { // Se o elemento atual � menor que 'menor', atualiza 'menor'.
            menor = vetor[i];
        }
    }

    // Exibir o maior e o menor valor na sa�da padr�o.
    printf("%d %d\n", maior, menor);

    // Retorna 0 para o sistema operacional indicando que o processo encerrou com sucesso.
    return EXIT_SUCCESS;
}
