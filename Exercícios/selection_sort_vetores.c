#include <stdio.h>
#include <stdlib.h>

int main()
{

int vet[10];
int c,j,aux;

    for(c = 1;c <= 10;c++){
        printf("Digite um valor:");
        scanf("%d",&vet[c]);
    }

    for(c = 1;c <= 9;c++){
        for(j = c+1;j <= 10;j++){
            if(vet[c] > vet [j]){
                aux = vet[c];
                vet[c] = vet[j];
                vet[j] = aux;
            }
        }
    }

    for(c = 1;c <= 10;c++){
        printf("{%d}",vet[c]);
    }

    return 0;
}
