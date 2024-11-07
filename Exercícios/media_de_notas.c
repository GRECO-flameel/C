#include <stdio.h>

int main()
{
    double nota1,nota2,notat;

    printf("Primeira nora do aluno:");
        scanf("%lf",&nota1);
    printf("\nSegunda nota do aluno:");
        scanf("%lf",&nota2);

    notat = (nota1 + nota2) / 2;

    printf("\nMEDIA : %.1lf\n",notat);

    if(notat <= 10 && notat >= 9){
        printf("Nota A, muito bem.\n");
    }else if(notat <= 8.9 && notat >= 8){
        printf("Nota B, parabens.\n");
    }else if(notat <= 7.9 && notat >= 7){
        printf("Nota C, bom.\n");
    }else if(notat <= 6.9 && notat >= 6){
        printf("Nota D, pode melhorar.\n");
    }else if(notat <= 5.9 && notat >= 5){
        printf("Nota E, ruim.\n");
    }else{
        printf("Nota F, estude mais\n");
    }


    return 0;
}
