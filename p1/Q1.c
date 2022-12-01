#include <stdio.h>

typedef int TIPO_IDENTIFICADOR;

typedef struct REGISTRO_ALUNO
{
    TIPO_IDENTIFICADOR id;
    char *nome[100];
    char *matricula[50];
    int idade;
    int periodo;
    int curso;
};

typedef struct CURSOS
{
    char cursos[6];
} cursos[6] = {
    "0 - informatica",
    "1 - agroindustria",
    "2 - agropecuaria",
    "3 - engenharia de software",
    "4 - enfermagem",
    "5 - musica"};

typedef struct DATA
{
    int dia;
    int mes;
    int ano;
};

typedef struct FILA_DO_DIA
{
    struct DATA data_fila;
    int qtd_alunos;
    struct REGISTRO_ALUNO *alunos[];
};

typedef struct COLECAO_FILAS
{
    int qtd_filas;
    struct FILA_DO_DIA *filas[];
};

struct DATA criarData(int dia, int mes, int ano)
{
    struct DATA data;

    data.dia = dia;
    data.mes = mes;
    data.ano = ano;

    return data;
}

struct FILA_DO_DIA *fila;

void iniciarFila(struct DATA data, int qtdAlunos, struct REGISTRO_ALUNO *listaAlunos[])
{
    fila->data_fila = data;
    fila->qtd_alunos = qtdAlunos;
    fila->alunos[qtdAlunos] = listaAlunos;
}

int main()
{
    int qtdAlunos = 2;
    struct DATA data;

    struct REGISTRO_ALUNO *listaAlunos[qtdAlunos];

    data = criarData(30, 11, 2022);
    iniciarFila(data, qtdAlunos, &listaAlunos[qtdAlunos]);

    printf("========= DATA A FILA ==========\n");
    printf("%d/%d/%d", fila->data_fila.dia, fila->data_fila.mes, fila->data_fila.ano);
}