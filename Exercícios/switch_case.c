#include <stdio.h>

int main(){

int opcao,valor;

printf("-------------------------------\n");
printf("   Projeto Crianca Esperanca\n");
printf("-------------------------------\n");
printf("[1] para doar 15 reais.\n");
printf("[2] para doar 25 reais.\n");
printf("[3] para doar 50 reais.\n");
printf("[4] para doar outros valores.\n");
printf("[5] para cancelar.\n");
printf("-------------------------------\n");
scanf("%d", &opcao);

switch (opcao){
    case 1:
        valor = 15;
        break;
    case 2:
        valor = 25;
        break;
    case 3:
        valor = 50;
        break;
    case 4:
        printf("Escolha o valor a ser doado:\n");
        scanf("%d",&valor);
        break;
    case 5:
        printf("operacao cancelada\n");
        break;
    default:
        printf("opcao invalida.\n");
        break;
}

if(opcao >= 1 && opcao <= 4){

printf("\n------------------------------\n");
printf ("O VALOR DOADO FOI DE: R$ %d,00\n", valor);
printf("------------------------------\n");
printf("\nOBRIGADO POR NOS AJUDAR A AJUDAR!\n");

}

return 0;
}
