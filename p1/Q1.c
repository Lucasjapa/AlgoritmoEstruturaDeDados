#include <stdio.h>
#include <string.h>

#define QTDALUNOS 3

int id = 1;

typedef int TIPO_IDENTIFICADOR;

typedef struct REGISTRO_ALUNO
{
    TIPO_IDENTIFICADOR id;
    char *nome;
    char *matricula;
    int idade;
    int periodo;
    int curso;
} REGISTRO_ALUNO;

char *cursos[6] = {
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
} DATA;

typedef struct FILA_DO_DIA
{
    struct DATA data_fila;
    int qtd_alunos;
    int pos;
    struct REGISTRO_ALUNO *alunos;
} FILA_DO_DIA;

typedef struct COLECAO_FILAS
{
    int qtd_filas;
    struct FILA_DO_DIA *filas;
} COLECAO_FILAS;

criarData(DATA *data, int dia, int mes, int ano)
{
    data->dia = dia;
    data->mes = mes;
    data->ano = ano;
}

criarFila(FILA_DO_DIA *fila, DATA data)
{
    fila->data_fila = data;
    fila->qtd_alunos = QTDALUNOS;
    fila->pos = 0;
    fila->alunos = (REGISTRO_ALUNO *)malloc(QTDALUNOS * sizeof(REGISTRO_ALUNO));
}

REGISTRO_ALUNO criarAluno(char *nome, char *matricula, int idade, int periodo)
{
    REGISTRO_ALUNO *aluno;
    aluno = malloc(sizeof(REGISTRO_ALUNO));

    aluno->id = id;
    aluno->nome = nome;
    aluno->matricula = matricula;
    aluno->idade = idade;
    aluno->periodo = periodo;
    id++;
    return *aluno;
}
addAluno(FILA_DO_DIA *fila, REGISTRO_ALUNO aluno)
{
    if (fila->pos < QTDALUNOS)
    {
        fila->alunos[fila->pos] = aluno;
        fila->pos++;
    }
    else
    {
        printf("Lista de alunos esta cheia.\n");
    }
}

removerAluno(FILA_DO_DIA *fila)
{
    int i, pos;
    pos = fila->pos;
    for (i = 0; i < pos; i++)
    {
        fila->alunos[i] = fila->alunos[i + 1];
    }
    fila->pos--;
}

listarAlunos(FILA_DO_DIA *fila)
{
    int i;
    int total = fila->pos;
    printf("\n============ ALUNOS ============\n");
    for (i = 0; i < total; i++)
    {
        printf("========= Aluno %d ==========\n", fila->alunos[i].id);
        printf("id:%d\n", fila->alunos[i].id);
        printf("nome:%s\n", fila->alunos[i].nome);
        printf("matricula:%s\n", fila->alunos[i].matricula);
        printf("idade:%d\n", fila->alunos[i].idade);
        printf("periodo:%d\n", fila->alunos[i].periodo);
    }
}

int main()
{
    int i;
    DATA *data;
    FILA_DO_DIA *fila;
    REGISTRO_ALUNO aluno;

    data = (DATA *)malloc(sizeof(DATA));
    fila = (FILA_DO_DIA *)malloc(sizeof(FILA_DO_DIA *));

    criarData(data, 14, 12, 2022);
    criarFila(fila, *data);
    printf("========= DATA A FILA ==========\n");
    printf("%d/%d/%d\n", fila->data_fila.dia, fila->data_fila.mes, fila->data_fila.ano);

    aluno = criarAluno("Lucas Cavalcante", "1", 26, 1);
    addAluno(fila, aluno);
    aluno = criarAluno("joao luis", "123rtt", 18, 4);
    addAluno(fila, aluno);
    aluno = criarAluno("Maria fernanda", "15555", 20, 5);

    addAluno(fila, aluno);
    listarAlunos(fila);
    removerAluno(fila);
    listarAlunos(fila);

    aluno = criarAluno("Jose teste", "fff11", 29, 7);
    addAluno(fila, aluno);

    listarAlunos(fila);
    removerAluno(fila);
    listarAlunos(fila);
}
