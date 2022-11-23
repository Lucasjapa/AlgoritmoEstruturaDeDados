#include <stdio.h>
#include <math.h>

int main(void)
{

    int i;
    double valores[10], valoresQuadrados[10];

    printf("Informe 10 numeros reais.\n\n");

    for (i = 0; i < 10; i++)
    {

        printf("Valor %d:", i);
        scanf("%lf", &valores[i]);

        valoresQuadrados[i] = pow(valores[i], 2);
    }

    printf("\n10 valores iniciais.\n");
    for (i = 0; i < 10; i++)
    {
        printf("Valor %d: %.2lf\n", i, valores[i]);
    }

    printf("\nQuadrado dos 10 valores iniciais.\n");
    for (i = 0; i < 10; i++)
    {
        printf("Valor quadrado de %d: %.2lf\n", i, valoresQuadrados[i]);
    }
}