#include <stdio.h>

int main() {
 int valor;
 int notas[7] = {100,50,20,10,5,2,1};
 int quantidade[7] = {0};

 scanf("%d",&valor);

 printf("%\n",valor);

 for(int  i = 0; i < 7; i++){
         quantidade[i] = valor / notas[i];
         valor %= notas[i];
 }

 for (int i = 0; i < 7; i++){
         printf("%d nota(s) de R$ %d,00\n", quantidade[i], notas[i]);
 }


    return 0;
}
