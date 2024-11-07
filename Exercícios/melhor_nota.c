#include <stdio.h>


int main()
{
    int I=1,Aluno;
    char nome[50],melhor[50];
    double nota,M;

    printf("-----------------\n");
    printf("     COLEGIO");
    printf("\n-----------------\n");

    printf("QUANTOS ALUNOS TEM A TURMA: ");
    scanf("%d",&Aluno);
    printf("\n-----------------------------\n");

    M = nota;

    while(I <= Aluno){
        printf("ALUNO %d\n",I);
        printf("NOME DO ALUNO: ");
        scanf("%s", &nome);
        printf("NOTA: ");
        scanf("%lf",&nota);
        printf("-----------------\n");
        I++;
        if (nota > M){
            M = nota;
            strcpy(melhor, nome);
        }

    }
    printf("\n---------------------------------------------------\n");
    printf("O melhor aproveitamento foi de %s com a nota: %.1lf",melhor,M);
    printf("\n---------------------------------------------------\n");

    return 0;
}
