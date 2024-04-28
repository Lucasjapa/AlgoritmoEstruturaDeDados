/*
    Institui��o: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Lucas Cavalcante da Silva
    Data: 01/03/2024

   Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui.
   Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse caractere.
   Ao final, imprima a nova string e o número de vogais que ela possui.

*/

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VETOR 100

int main()
{
    char *string, letra; // Ponteiro para armazenar os dados de entrada e o caractere para substituição.
    int i, vogais = 0;   // Variáveis usadas para iterar no loop e contar as vogais.

    // Aloca na heap espaço para 1 char e verifica se o espaço foi alocado corretamente.
    string = malloc(TAMANHO_VETOR * sizeof(char));
    if (string == NULL)
    {
        printf("Falha ao alocar memoria.\n");
        return 1;
    }

    printf("> ");
    fgets(string, 100, stdin); // Lê uma string da entrada padrão.

    // Conta o número de vogais na string.
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        if (*(string + i) != '\n')
        {
            if (*(string + i) == 'a' ||
                *(string + i) == 'e' ||
                *(string + i) == 'i' ||
                *(string + i) == 'o' ||
                *(string + i) == 'u')
            {
                vogais++;
            }
        }
    }

    // Exibe o número de vogais na string.
    printf("%d vogais\n", vogais);
    printf("> ");
    scanf("%c", &letra); // Lê um caractere do usuário para substituição.

    // Substitui todas as vogais na string pelo caractere lido e exibe a string resultante.
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        if (*(string + i) != '\n')
        {
            if (*(string + i) == 'a' ||
                *(string + i) == 'e' ||
                *(string + i) == 'i' ||
                *(string + i) == 'o' ||
                *(string + i) == 'u')
            {
                *(string + i) = letra; // Substitui a vogal pelo caractere lido.
                printf("%c", *(string + i));
            }
            else
            {
                printf("%c", *(string + i)); // Exibe o caractere atual da string.
            }
        }
        else
        {
            break;
        }
    }

    // Retorna 0 para o sistema operacional indicando que o programa terminou com sucesso.
    return EXIT_SUCCESS;
}
