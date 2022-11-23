#include <stdio.h>

int main(void)
{

    int i, valor, valores[6];

    printf("Informe 6 numeros inteiros.\n\n");
    for (i = 0; i < 6; i++)
    {
        printf("Valor %d:", i);
        scanf("%d", &valores[i]);
    }

    printf("Os 6 numeros inteiros informados sao:\n\n");
    for (i = 0; i < 6; i++)
    {
        printf("Valor %d = %d\n", i, valores[i]);
    }
}