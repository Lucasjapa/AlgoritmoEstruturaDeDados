/*
    Institui��o: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Lucas Cavalcante da Silva
    Data: 01/03/2024

   Construa um programa que leia duas strings do teclado.
   Imprima uma mensagem informando se a segunda string lida está contida dentro da primeira.


*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_VETOR 100

int main()
{
    char *string1, *string2;

    // Aloca na heap espaço para 100 char e verifica se o espaço foi alocado corretamente.
    string1 = malloc(TAMANHO_VETOR * sizeof(char));
    string2 = malloc(TAMANHO_VETOR * sizeof(char));
    if (string1 == NULL || string2 == NULL)
    {
        printf("Falha ao alocar memoria.\n");
        return 1;
    }

    gets(string1); // Lê uma string da entrada padrão de forma segura.
    gets(string2); // Lê uma string da entrada padrão de forma segura.

    // Verifica se string2 está contida dentro da string1
    if (strstr(string1, string2) != NULL)
    {
        printf("S");
    }
    else
    {
        printf("N");
    }

    // Libera a memória alocada para os vetores.
    free(string1);
    free(string2);

    // Retorna 0 para o sistema operacional indicando que o programa terminou com sucesso.
    return EXIT_SUCCESS;
}
