#include <stdio.h>

int main (){
int Q,C;
double D, R,  SOMAD = 0, SOMAR = 0;

C = 1;
SOMAD = D;
SOMAD = R;

printf("QUANTAS VEZES VOCE QUER CONVERTER?\n");
scanf("%d",&Q);
printf("\n<-------------------------------->\n");

while( C <= Q){
printf("ESCREVA QUAL O VALOR DE R:");
scanf ("%lf", &R);

D = R/5.59;

printf("O VALOR CONVERTIDO EM US$ EH %.2lf\n", D);
printf("\n<-------------------------------->\n");

SOMAR += R;
SOMAD += D;

C++;
}

printf("\nO VALOR TOTAL CONVERTIDO EM REAL EH:%.2lf\n",SOMAR);
printf("\nO VALOR TOTAL CONVERTIDO EM DOLAR EH:%.2lf\n",SOMAD);




return 0;
}
