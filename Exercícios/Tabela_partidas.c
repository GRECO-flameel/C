#include <stdio.h>
#include <stdlib.h>

int main()
{
char Tim[3][20];
int  i,j;


printf("CAMPEONATO FUTEBOL\n");
printf("------------------\n");

    for(i = 0;i < 3;i++){
        printf("Nome %do time:",i + 1 );
        scanf (" %19s",Tim[i]);
    }
    system("cls");

printf("TABELa DE PARTIDAS\n");
printf("------------------\n");

    for(i = 0;i < 3;i++){
        for(j = 0;j < 3;j++){
            if(i != j){
            printf("%s   [] x []   %s\n",Tim[i],Tim[j]);
            }
        }

    }


    return 0;
}
