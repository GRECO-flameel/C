#include <stdio.h>

int main(){

int S,N,C;
char resp = 'S';

S = 0;

do {

    printf("Digite o valor==>");
    scanf("%d",&N);

S += N;

do{
    printf("Voce quer continuar? [S/N]");
    scanf("%s",&resp);

    if (resp != 'S' && resp != 's' && resp != 'N' && resp != 'n'){
        printf("RESPOSTA INVALIDA.\n");
      }
    }while (resp != 'S' && resp != 's' && resp != 'N' && resp != 'n');

}while (resp != 'n' && resp != 'N');

    printf("\nA SOMA DOS VALORES DIGITADOS EH: %d \n",S);

return 0;
}
