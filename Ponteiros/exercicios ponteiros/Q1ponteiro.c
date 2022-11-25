#include <stdio.h>

int main()
{

    int inteiro, *pInteiro;
    double real, *pReal;
    char string, *pString;

    inteiro = 5;
    real = 4.876;
    string = 'c';

    pInteiro = &inteiro;
    pReal = &real;
    pString = &string;

    printf("Os valores sao:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.6f\n", real);
    printf("Char: %c\n", string);

    modificarValor(pInteiro, pReal, pString);

    printf("\n\nOs novos valores sao:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.6f\n", real);
    printf("Char: %c\n", string);
}

void modificarValor(int *v1, double *v2, char *v3)
{

    *v1 = 55;
    *v2 = -50.98;
    *v3 = 'L';
}