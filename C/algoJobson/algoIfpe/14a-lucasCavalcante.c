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
    char string[TAMANHO_VETOR], temp; // Vetor para armazenar os dados de entrada e variável para armazenar o char temporariamente.
    int i, cont = 0;                  // Variáveis usadas para iterar no loop e armazenar o comprimento da string.

    fgets(string, 100, stdin);

    // Calcula o comprimento da string excluindo o caractere de nova linha.
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        if (string[i] != '\n')
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
        temp = string[i];
        string[i] = string[cont];
        string[cont] = temp;
        cont--;
    }

    // Exibe a string invertida na saída padrão.
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        if (string[i] != '\n')
        {
            printf("%c", string[i]);
        }
        else
        {
            break;
        }
    }

    // Retorna 0 para o sistema operacional indicando que o programa terminou com sucesso.
    return EXIT_SUCCESS;
}
