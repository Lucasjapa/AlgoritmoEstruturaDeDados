/*
    Institui��o: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Lucas Cavalcante da Silva
    Data: 01/03/2024

    Quest�o 02B
    Fa�a um programa que receba do usu�rio um vetor X com 10 posi��es.
    Em seguida dever�o ser impressos o maior e o menor elemento desse vetor.
*/

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VETOR 10

int main() {
    int* vetor;                 // Vetor para receber os dados do usu�rio.
    char i;                     // Vari�vel usada para iterar estruturas de repeti��o.
    char maior, menor;          // Vari�veis para armazenar o maior e o menor valor do vetor.

    // Aloca na HEAP um espa�o de 10 inteiros (40 bytes) e verifica se o espa�o foi alocado corretamente.
    vetor = malloc(sizeof(int) * TAMANHO_VETOR);
    if (vetor == NULL) {
        printf("Falha ao alocar mem�ria.\n");
        return 1;
    }

    // Ler vetor de inteiros da entrada padr�o.
    for (i=0; i<TAMANHO_VETOR; i++) {
        scanf("%d", vetor+i);
    }

    maior = *vetor; // Inicializa 'maior' com o primeiro elemento do vetor.
    menor = *vetor; // Inicializa 'menor' com o primeiro elemento do vetor.

    // Iterar pelo vetor para encontrar o maior e o menor valor.
    for (i=0; i<TAMANHO_VETOR; i++) {
        // Se o elemento atual � maior que 'maior', atualiza 'maior'.
        if (*(vetor+i) > maior) {
            maior = *(vetor+i);
        }
        // Se o elemento atual � menor que 'menor', atualiza 'menor'.
        if (*(vetor+i) < menor) {
            menor = *(vetor+i);
        }
    }

    // Exibir o maior e o menor valor na sa�da padr�o.
    printf("%d %d\n", maior, menor);

    // Libera a mem�ria alocada manualmente
    free(vetor);

    // Retorna 0 para o sistema operacional indicando que o processo encerrou com sucesso.
    return EXIT_SUCCESS;
}
