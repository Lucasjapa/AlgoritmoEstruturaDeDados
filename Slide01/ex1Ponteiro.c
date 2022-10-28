#include <stdio.h>

int main()
{
    // Exemplo 1:
    int x, y, *ponteiro;
    x = 10;
    ponteiro = &x;

    y = 20;
    *ponteiro = y;

    printf("%d\n", x);
    printf("%d\n", &x);
    printf("%d\n", *ponteiro);
    printf("%d\n", ponteiro);

    float a = 2000.900;
    float b = 3000.1504;
    float *p = &a;
    float *q = &b;
    printf("a: %.2f b: %.2f\n", a, b);
    printf(" %f\n %f\n %f\n %f \n ", q, *q, *p, &b);

    // ====== REPRESENTAÇÃO DE PONTEIRO DO PRINT ======

    // Declarando a variável com * eu acesso o valor dela.
    // Exemplo:
    // printf("%d\n", *ponteiro);

    // Declarando a variável sem * eu acesso o endereço de memória.
    // Exemplo:
    // printf("%d\n", ponteiro);
}