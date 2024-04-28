/*
    Institui��o: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Lucas Cavalcante da Silva
    Data: 01/03/2024

    Faça um programa que leia uma string e imprima as quatro primeiras letras dela.

*/

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VETOR 100

int main()
{
    char *string; // Ponteiro para armazenar os dados de entrada como string.
    int i;        // Variável usada para iterar no loop.

    // Aloca na heap espaço para 1 char e verifica se o espaço foi alocado corretamente.
    string = malloc(TAMANHO_VETOR * sizeof(char));
    if (string == NULL)
    {
        printf("Falha ao alocar memoria.\n");
        return 1;
    }

    gets(string); // Lê uma string da entrada padrão de forma segura.

    // Exibe os primeiros 4 caracteres da string na saída padrão.
    for (i = 0; i < 4; i++)
    {
        printf("%c", *(string + i));
    }

    // Libera a memória alocada para os vetores.
    free(string);

    // Retorna 0 para o sistema operacional indicando que o programa terminou com sucesso.
    return EXIT_SUCCESS;
}
