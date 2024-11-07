#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[5][20];
    double n1[5];
    double n2[5];
    double m[5];
    int i;

    for(i = 1;i <= 4;i++){
        printf("Aluno %d:\n",i);
        printf("Nome:  ");
        scanf(" %19s",&nome[i]);
        printf("Primeira nota:");
        scanf("%lf",&n1[i]);
        printf("Segunda nota:");
        scanf("%lf",&n2[i]);

        m[i] = (n1[i] + n2[i]) / 2;

    }
    system("cls");

    printf("LISTAGEM DOS ALUNOS\n");
    printf("-------------------\n");
    for(i = 1; i <= 4; i++){
        printf("%s: %.1lf\n",nome[i],m[i]);

    }




    return 0;
}
