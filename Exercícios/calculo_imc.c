#include <stdio.h>

int main()
{

double peso,altura,IMC;

printf("digite seu peso (kg):\n");
scanf ("%lf", &peso);

printf("digite sua altura(M.cm):\n");
scanf ("%lf", &altura);

IMC = peso / pow(altura,2);

printf("Seu IMC eh %.1lf",IMC);

 if(IMC > 18.5 && IMC < 25 ){
    printf(" esta ideal!\n");
 }else if(IMC > 25){
    printf(" esta acima da media!\n");
 }else if(IMC < 18.5){
    printf(" esta abaixo da media!\n");
 }

 return 5;
}
