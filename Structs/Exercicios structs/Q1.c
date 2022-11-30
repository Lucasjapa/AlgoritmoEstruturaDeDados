#include <stdio.h>
#include <string.h>

typedef struct st_horario
{
    int hora;
    int minutos;
    int segundos;
};

typedef struct st_data
{
    int dia;
    int mes;
    int ano;
};

typedef struct st_compromisso
{
    struct st_horario horario;
    struct st_data data;
    char descricao[100];
};

int main()
{

    struct st_horario horario;
    struct st_data data;
    struct st_compromisso compromisso;

    horario.hora = 21;
    horario.minutos = 27;
    horario.segundos = 55;

    data.dia = 29;
    data.mes = 11;
    data.ano = 2022;

    compromisso.horario = horario;
    compromisso.data = data;
    strcpy(compromisso.descricao, "jodlbfgaslsdfb adlfghka oehrfqewirqweflm,asd!!!");

    printf("======== COMPROMISSO =========\n");
    printf("======= HORARIO ========\n");
    printf("%d:%d:%d\n\n", compromisso.horario.hora, compromisso.horario.minutos, compromisso.horario.segundos);

    printf("======= DATA ========\n");
    printf("%d/%d/%d\n\n", compromisso.data.dia, compromisso.data.mes, compromisso.data.ano);

    printf("======= DESCRICAO ========\n");
    printf("%s\n\n", compromisso.descricao);
}