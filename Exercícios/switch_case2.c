#include <stdio.h>

int main(){

char nome[50];
int dep;
double sal, nsal;

printf("Qual o nome do funcionario?\n");
    scanf("%s",&nome);

printf("Qual o salario do funcionario?\n");
    scanf("%lf",&sal);

printf("Qual a quantidade de dependentes?\n");
    scanf("%d",&dep);

    switch (dep) {
    case 0:
        nsal = sal + (sal*5/100);
        break;
    case 1:
    case 2:
    case 3:
        nsal = sal + (sal*10/100);
        break;
    case 4:
    case 5:
    case 6:
        nsal = sal + (sal*15/100);
        break;
    default:
        nsal = sal + (sal*18/100);
        break;
    }


    printf("\nO novo salario de %s de acordo com os seus dependetes ou nao sera de R$%.2lf\n",nome,nsal);



return 0;
}
