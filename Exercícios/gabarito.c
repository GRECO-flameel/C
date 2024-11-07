#include <stdio.h>
#include <stdlib.h>


int main()
{
    int quest[5] = {1,2,3,4,5};
    char resp[3][5];
    char gab[5];
    char nome[3][20];
    double nota[3],valorq = 2.0;
    double media;
    int i,j;

    printf("PASSO 1 - CADASTRO DE GABARITO\n");
    printf("------------------------------\n");

    for(i = 0;i < 5;i++){
        printf("Questao %d:",quest[i]);
        scanf(" %19s",&gab[i]);
    }

    system("cls");



    for(i = 0;i < 3;i++){
        printf("------------------------------\n");
        printf("ALUNO %d\n",i);
        printf("------------------------------\n");
        printf("nome:");
        scanf (" %s",nome[i]);
        printf("RESPOSTAS DADAS:\n");
        for(j = 0;j < 5;j++){
            printf("Questao %d:",quest[j]);
            scanf(" %c",&resp[i][j]);
        }
        system("cls");

    }



    printf("Notas Finais\n");
    printf("------------------------------\n");
    for(i = 0;i < 3;i++){
        nota[i] = 0;
    for(j = 0; j < 5;j++){
        if(resp[i][j] == gab[j]){
            nota[i] += valorq;
        }
    }
        printf("%-15s   %.1f\n",nome[i],nota[i]);
    }
    printf("------------------------------\n");

    media = (nota[0]+nota[1]+nota[2]) / 3;
    printf("MEDIA: %.1lf",media);


    return 0;
}
