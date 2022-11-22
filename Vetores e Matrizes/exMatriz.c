#include <stdio.h>;

int main()
{

    // Matriz de 0...4 linhas e colunas.
    float valores[5][5];
    float cont = 0.5;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            valores[i][j] = cont;
            cont++;
            printf("O valor de [%d][%d] vale %.2f\n", i, j, valores[i][j]);
        }
    }
}
