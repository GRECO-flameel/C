#include <stdio.h>

int main()
{
    int n[7];
    int c,p = 0;
    int pos;

    for (c = 1;c <= 7;c++){
        printf("digite o %do valor: ",c);
        scanf("%d",&n[c]);
        if(n[c] % 2 == 0){
            p++;
        }
    }

    printf("\n%d valores sao pares\n",p);

    for(c = 1;c <= 7;c++){
        if(n[c] % 2 == 0){
        printf("\nValor par na posicao %d\n",c);
        }
    }



    return 0;
}


