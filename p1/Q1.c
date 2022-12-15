#include <stdio.h>
#include <string.h>

typedef int TIPO_IDENTIFICADOR;

typedef struct REGISTRO_ALUNO
{
    TIPO_IDENTIFICADOR id;
    char *nome[100];
    char *matricula[50];
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
    struct REGISTRO_ALUNO *alunos[];
};

typedef struct COLECAO_FILAS
{
    int qtd_filas;
    struct FILA_DO_DIA *filas[];
};

criarData(struct DATA *data, int dia, int mes, int ano)
{
    // *data = (struct DATA *)malloc(sizeof(struct DATA));

    data->dia = dia;
    data->mes = mes;
    data->ano = ano;
}

/*criarAluno(
    struct REGISTRO_ALUNO *alu,
    TIPO_IDENTIFICADOR id,
    char *nome,
    char *matricula,
    int idade,
    int periodo)
{

    alu->id = id;
    strcpy(alu->nome, nome);
    strcpy(alu->matricula, matricula);
    alu->idade = idade;
    alu->periodo = periodo;
}*/

struct FILA_DO_DIA *fila;

iniciarFila(struct DATA data, int qtdAlunos, struct REGISTRO_ALUNO *listaAlunos[])
{
    // struct FILA_DO_DIA *fi;

    fila->data_fila = data;
    fila->qtd_alunos = qtdAlunos;
    fila->alunos[qtdAlunos] = listaAlunos;

    // return fi;
}

int main()
{
    int qtdAlunos = 2;
    int posInicialFila = 0;
    char *nome = "Lucas cavalcante";
    char *matricula = "1234asd";
    struct DATA *data;
    // struct FILA_DO_DIA *fila;
    struct REGISTRO_ALUNO *listaAlunos[qtdAlunos], *alu;

    data = (struct DATA *)malloc(sizeof(struct DATA));

    criarData(data, 14, 12, 2022);

    // criarAluno(&alu, posInicialFila, nome, matricula, 26, 3);
    // fila = iniciarFila(data, qtdAlunos, &listaAlunos);

    printf("========= DATA A FILA ==========\n");
    printf("%d/%d/%d\n", data->dia, data->mes, data->ano);

    /* printf("========= Aluno ==========\n");
     printf("id:%d\n", alu->id);
     printf("nome:%s\n", alu->nome);
     printf("matricula:%s\n", alu->matricula);
     printf("idade:%d\n", alu->idade);
     printf("periodo:%d\n", alu->periodo);*/
}