#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[20];
    int i,tot = 0;
    char C[10][20];

    for(i = 1;i <= 10;i++){
        printf("Digite um nome:");
        scanf (" %19s",nome);
        if (nome[0] == 'C' || nome[0] == 'c'){
            tot = tot + 1;
            strcpy(C[tot], nome);
        }
    }
    system("cls");


    printf("Os nomes que comecam com C:\n");
    for(i = 1;i < tot;i++){
        printf("%s\n",C[i]);
    }







    return 0;
}
