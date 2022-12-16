#include <stdio.h>
#include <string.h>

#define QTDALUNOS 2

typedef int TIPO_IDENTIFICADOR;

typedef struct REGISTRO_ALUNO
{
    TIPO_IDENTIFICADOR id;
    char *nome;
    char *matricula;
    int idade;
    int periodo;
    //   int curso;
};

// typedef CURSOS
// {
//     char cursos[6];
// };

// struct CURSOS cursos[6] = {
//     "0 - informatica",
//     "1 - agroindustria",
//     "2 - agropecuaria",
//     "3 - engenharia de software",
//     "4 - enfermagem",
//     "5 - musica"};

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
    struct REGISTRO_ALUNO *alunos;
};

typedef struct COLECAO_FILAS
{
    int qtd_filas;
    struct FILA_DO_DIA *filas;
};

criarData(struct DATA *data, int dia, int mes, int ano)
{
    data->dia = dia;
    data->mes = mes;
    data->ano = ano;
}

criarFila(
    struct FILA_DO_DIA *fila,
    struct DATA data,
    struct REGISTRO_ALUNO *listaAlunos)
{
    fila->data_fila = data;
    fila->qtd_alunos = QTDALUNOS;
    fila->alunos = listaAlunos;
}

addAluno(
    struct FILA_DO_DIA *fila,
    char *nome,
    char *matricula,
    int idade,
    int periodo)
{

    int id = 0;
    fila->alunos[id].id = id;
    fila->alunos[id].nome = nome;
    fila->alunos[id].matricula = matricula;
    fila->alunos[id].idade = idade;
    fila->alunos[id].periodo = periodo;
    id++;
}

int main()
{
    struct DATA *data;
    struct FILA_DO_DIA *fila;
    struct REGISTRO_ALUNO *listaAlunos[QTDALUNOS], *alu;

    data = (struct DATA *)malloc(sizeof(struct DATA));
    fila = (struct FILA_DO_DIA *)malloc(sizeof(struct FIlA_DO_DIA *));

    criarData(data, 14, 12, 2022);
    criarFila(fila, *data, listaAlunos);

    addAluno(fila, "Lucas Cavalcante", "1", 26, 1);

    // criarAluno(&alu, posInicialFila, nome, matricula, 26, 3);

    printf("========= DATA A FILA ==========\n");
    printf("%d/%d/%d\n", fila->data_fila.dia, fila->data_fila.mes, fila->data_fila.ano);

    printf("========= Aluno ==========\n");
    printf("id:%d\n", fila->alunos[0].id);
    printf("nome:%s\n", fila->alunos[0].nome);
    printf("matricula:%s\n", fila->alunos[0].matricula);
    printf("idade:%d\n", fila->alunos[0].idade);
    printf("periodo:%d\n", fila->alunos[0].periodo);
}