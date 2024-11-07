#include <stdio.h>

int main()
{
    int golc,golp, diferenca;

    printf("CRUZEIRO X PATETICO MG\n");
    printf("----------------------\n");

    printf("Quantos gols o Cruzeiro fez:");
        scanf("%d",&golc);
    printf("Quantos gols o Patetico fez:");
        scanf("%d",&golp);
    printf("\n----------------------\n");


    diferenca = abs(golc - golp);

    printf("DIFERENCA: %d\n",diferenca);
    if(diferenca == 0){
        printf("EMPATE");
    }else if(diferenca <= 3){
        printf("PARTIDA NORMAL");
    }else{
        printf("GOLEADA");
    }
    printf("\n----------------------");

    return 0;
}
