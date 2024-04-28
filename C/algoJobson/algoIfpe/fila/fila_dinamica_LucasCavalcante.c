#include <stdio.h>
#include <stdlib.h>

typedef struct NO
{
    int dado;
    struct NO *prox;
} NO;

typedef struct FILA
{
    NO *ini;
    NO *fim;

} FILA;

void inicializarFila(FILA *f)
{
    f->ini = NULL;
    f->fim = NULL;
}

void enfileirar(int dado, FILA *f)
{
    NO *ptr = (NO *)malloc(sizeof(NO));
    if (ptr == NULL)
    {
        printf("Erro alocacao.\n");
        return;
    }
    else
    {
        ptr->dado = dado;
        ptr->prox = NULL;
        if (f->ini == NULL)
        {
            printf("Enfileirando: %d\n", dado);
            f->ini = ptr;
        }
        else
        {
            printf("Enfileirando: %d\n", dado);
            f->fim->prox = ptr;
        }
    }
    f->fim = ptr;
}

void desenfileirar(FILA *f)
{

    NO *ptr = f->ini;

    if (ptr == NULL)
    {
        printf("Fila vazia.\n");
    }
    else
    {
        printf("Desenfileirando: %d\n", f->ini->dado);
        f->ini = ptr->prox;
        ptr->prox = NULL;
        free(ptr);
    }
}

void imprimeFila(FILA *f)
{
    NO *ptr = f->ini;
    if (ptr == NULL)
    {
        printf("Fila vazia.\n");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->dado);
            ptr = ptr->prox;
        }
        printf("\n");
    }
}

int main()
{
    FILA *f1 = (FILA *)malloc(sizeof(FILA));

    if (f1 == NULL)
    {
        printf("Erro de alocação do nó./n");
        exit(0);
    }
    else
    {
        inicializarFila(f1);
        enfileirar(3, f1);
        enfileirar(6, f1);
        enfileirar(1, f1);
        enfileirar(50, f1);
        desenfileirar(f1);
        // desenfileirar(f1);
        // desenfileirar(f1);
        // desenfileirar(f1);
        imprimeFila(f1);
    }

    return 0;
}