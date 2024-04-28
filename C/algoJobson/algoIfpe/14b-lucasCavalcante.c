/*
    Institui��o: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Lucas Cavalcante da Silva
    Data: 01/03/2024

    Faça um programa que leia uma string e a inverta.
    A string invertida deve ser armazenada na mesma variável.
    Em seguida, imprima a string invertida.


*/

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VETOR 100

int main()
{
    char *string, temp; // Ponteiro para armazenar os dados de entrada e variável para armazenar o char temporariamente.
    int i, cont = 0;    // Variável usada para iterar no loop.

    // Aloca na heap espaço para 100 inteiros e verifica se o espaço foi alocado corretamente.
    string = malloc(TAMANHO_VETOR * sizeof(char));
    if (string == NULL)
    {
        printf("Falha ao alocar memoria.\n");
        return 1;
    }

    fgets(string, 100, stdin);

    // Calcula o comprimento da string excluindo o caractere de nova linha.
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        if (*(string + i) != '\n')
        {
            cont++;
        }
        else
        {
            cont--;
            break;
        }
    }

    // Inverte a string dentro de seu comprimento calculado (sem incluir o caractere de nova linha).
    for (i = 0; i < cont; i++)
    {
        temp = *(string + i);
        *(string + i) = *(string + cont);
        *(string + cont) = temp;
        cont--;
    }

    // Exibe a string invertida na saída padrão.
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        if (*(string + i) != '\n')
        {
            printf("%c", *(string + i));
        }
        else
        {
            break;
        }
    }

    // Libera a memória alocada para os vetores.
    free(string);

    // Retorna 0 para o sistema operacional indicando que o programa terminou com sucesso.
    return EXIT_SUCCESS;
}
