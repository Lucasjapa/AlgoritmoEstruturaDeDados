#include <stdio.h>
#include <string.h>

#define QTDALUNOS 3
#define QTDFILAS 2

int id = 1;
int qtdFilas = 0;

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

COLECAO_FILAS iniciarListaFila()
{
    COLECAO_FILAS *listaFila;
    listaFila = malloc(sizeof(COLECAO_FILAS));

    listaFila->qtd_filas = 0;
    listaFila->filas = (FILA_DO_DIA *)malloc(QTDFILAS * sizeof(FILA_DO_DIA));

    return *listaFila;
}

criarData(DATA *data, int dia, int mes, int ano)
{
    data->dia = dia;
    data->mes = mes;
    data->ano = ano;
}

criarFila(COLECAO_FILAS *listaFila, DATA data)
{

    FILA_DO_DIA *fila;
    fila = malloc(sizeof(FILA_DO_DIA));
    int filaExist = 0;

    if (listaFila->qtd_filas == 0)
    {
        fila->data_fila = data;
        fila->qtd_alunos = QTDALUNOS;
        fila->pos = 0;
        fila->alunos = (REGISTRO_ALUNO *)malloc(QTDALUNOS * sizeof(REGISTRO_ALUNO));

        listaFila->filas[listaFila->qtd_filas] = *fila;
        listaFila->qtd_filas++;
    }
    else
    {
        for (int i = 0; i < listaFila->qtd_filas; i++)
        {
            if (listaFila->filas[i].data_fila.dia == data.dia &&
                listaFila->filas[i].data_fila.mes == data.mes &&
                listaFila->filas[i].data_fila.ano == data.ano)
            {
                filaExist = 1;
            }
        }

        if (filaExist == 0)
        {
            fila->data_fila = data;
            fila->qtd_alunos = QTDALUNOS;
            fila->pos = 0;
            fila->alunos = (REGISTRO_ALUNO *)malloc(QTDALUNOS * sizeof(REGISTRO_ALUNO));

            listaFila->filas[listaFila->qtd_filas] = *fila;
            listaFila->qtd_filas++;
        }
        else
        {
            printf("\nJa existe uma fila criada para essa data\n\n");
        }

        filaExist = 0;
    }
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

adiciona(FILA_DO_DIA *fila, REGISTRO_ALUNO aluno)
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

removeUltimo(FILA_DO_DIA *fila)
{
    if (fila->pos > 0)
    {
        fila->pos--;
    }
    else
    {
        printf("\nERROR: Fila vazia, nao tem mais aluno para remover.\n");
    }
}

removePrimeiro(FILA_DO_DIA *fila)
{
    int i, pos;
    pos = fila->pos;

    if (fila->pos > 0)
    {
        for (i = 0; i < pos; i++)
        {
            fila->alunos[i] = fila->alunos[i + 1];
        }
        fila->pos--;
    }
    else
    {
        printf("\nERROR: Fila vazia, nao tem mais aluno para remover.\n");
    }
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

listarFilas(COLECAO_FILAS *listaFila)
{
    printf("========= FILAS EXISTENTES ==========\n");
    for (int i = 0; i < listaFila->qtd_filas; i++)
    {
        printf("Fila %d - DATA:%d/%d/%d\n", i, listaFila->filas[i].data_fila.dia,
               listaFila->filas[i].data_fila.mes,
               listaFila->filas[i].data_fila.ano);
    }
}

int main()
{
    int i;
    DATA *data;
    COLECAO_FILAS listaFilas;
    REGISTRO_ALUNO aluno;

    data = (DATA *)malloc(sizeof(DATA));

    listaFilas = iniciarListaFila();

    criarData(data, 14, 12, 2022);
    criarFila(&listaFilas, *data);
    // criarData(data, 14, 12, 2022);
    criarData(data, 15, 12, 2022);
    criarFila(&listaFilas, *data);

    listarFilas(&listaFilas);

    // aluno = criarAluno("Lucas Cavalcante", "1", 26, 1);
    // adiciona(fila, aluno);
    // aluno = criarAluno("joao luis", "123rtt", 18, 4);
    // adiciona(fila, aluno);
    // aluno = criarAluno("Maria fernanda", "15555", 20, 5);
    // adiciona(fila, aluno);

    // listarAlunos(fila);
    // removePrimeiro(fila);
    // removePrimeiro(fila);
    // removePrimeiro(fila);
    // removePrimeiro(fila);
    // removeUltimo(fila);
    // removeUltimo(fila);
    // removeUltimo(fila);
    // removeUltimo(fila);
    // listarAlunos(fila);

    // aluno = criarAluno("Jose teste", "fff11", 29, 7);
    // adiciona(fila, aluno);

    // listarAlunos(fila);
    // removePrimeiro(fila);
    // removeUltimo(fila);
    // listarAlunos(fila);
}
