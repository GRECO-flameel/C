#include <stdio.h>

int main()
{

    int n, c = 1, totn = 0;

    do{
        printf("digite um numero: ");
        scanf("%d",&n);
    c = c + 1;
    if(n < 0){
        totn = totn + 1;
    }
    }while (c <= 5);

    printf("\nO TOTAL DE NEGATIVOS EH: %d\n",totn);


    return 0;
}
