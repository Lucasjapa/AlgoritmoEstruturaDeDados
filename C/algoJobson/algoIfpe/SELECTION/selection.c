#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para gerar um array de tamanho 'tamanho'
int *gerarArrayAleatorio(int tamanho)
{
    int *array = (int *)malloc(tamanho * sizeof(int)); // Aloca memória para o array

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Preenche o array com números aleatórios
    for (int i = 0; i < tamanho; i++)
    {
        array[i] = rand(); // Gera número aleatório
    }

    return array; // Retorna o ponteiro para o array gerado
}

// Função para imprimir um array de tamanho 'tamanho'
void imprimirArray(int *array, int tamanho)
{
    printf("Array gerado de tamanho %d:\n", tamanho);
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// Função de ordenação Bubble Sort
void selectionSort(int *array, int tamanho_entrada)
{
    int i, j, pos_menor, temp;

    for (i = 0; i < tamanho_entrada; i++)
    {
        pos_menor = i;
        for (j = i + 1; j < tamanho_entrada; j++)
        {
            if (array[j] < array[pos_menor])
            {
                pos_menor = j;
            }
        }
        temp = array[i];
        array[i] = array[pos_menor];
        array[pos_menor] = temp;
    }
}

int main()
{
    clock_t inicio, fim;
    double tempo_decorrido;
    int i;
    int entrada[] = {5000, 10000, 25000, 50000, 100000, 250000, 500000};
    // int entrada[] = {10, 15};
    int tamanho_entrada = sizeof(entrada) / sizeof(entrada[0]); // Calcula o tamanho do array

    for (i = 0; i < tamanho_entrada; i++)
    {
        // Gerando o array aleatório
        int *array = gerarArrayAleatorio(entrada[i]);
        // imprimirArray(array, entrada[i]); // Comentei para não imprimir o array gerado

        // Ordenando o array com o método BUBBLE SORT
        inicio = clock();
        selectionSort(array, entrada[i]);
        fim = clock();
        tempo_decorrido = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
        // imprimirArray(array, entrada[i]); // Comentei para não imprimir o array ordenado
        printf("Tamanho da entrada: %7d Tempo de execução: %20.6f segundos\n", entrada[i], tempo_decorrido);

        // Liberando a memória alocada para o array
        free(array);
    }

    return 0;
}
