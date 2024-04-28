/*
    Institui��o: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Lucas Cavalcante da Silva
    Data: 01/03/2024

    Quest�o 05B
    Fa�a um programa que preencha um vetor de tamanho 100 com os 100 primeiros n�meros naturais que n�o s�o m�ltiplos de 7.
    Ao final, imprima esse vetor na tela.

*/

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VETOR 100

int main() {
    int* vetor;     // Ponteiro para armazenar os dados.
    char i, j = 0;  // Vari�veis usadas para iterar estruturas de repeti��o.

    // Aloca na HEAP um espa�o de 100 inteiros (400 bytes) e verifica se o espa�o foi alocado corretamente.
    vetor = malloc(sizeof(int) * TAMANHO_VETOR);
    if (vetor == NULL) {
        printf("Falha ao alocar mem�ria.\n");
        return 1;
    }

    // Loop para preencher o vetor com os primeiros 100 n�meros naturais que n�o s�o m�ltiplos de 7.
    while (i < TAMANHO_VETOR) {
        // Verifica se j n�o � m�ltiplo de 7.
        if(j%7 != 0) {
            // Preenche o vetor na posi��o i com o valor de j.
            *(vetor+i) = j;
            // Incrementa i para avan�ar para a pr�xima posi��o no vetor.
            i++;
        }
        // Incrementa j para verificar o pr�ximo n�mero natural.
        j++;
    }

    // Exibir o vetor resultante na sa�da padr�o.
    for (i=0; i<TAMANHO_VETOR; i++) {
        printf("%d ", *(vetor+i));
    }

    // Libera a mem�ria alocada.
    free(vetor);

    // Retorna 0 para o sistema operacional indicando que o processo encerrou com sucesso.
    return EXIT_SUCCESS;
}

