#include <stdio.h>

int main()
{

int I,F;
printf("CONTAGEM INTELIGENTE");
printf("\n--------------------\n"),

printf("INICIO: ");
scanf("%d",&I);

printf("FIM: ",F);
scanf("%d", &F);

if(I < F){
    printf("CONTANDO:\n");
    while(I <= F){
        printf("%d... ",I);
        I++;
    }
}else if (I > F){
    printf("CONTANDO:\n");
    while( I>= F){
        printf("%d... ",I);
        I--;
    }
}


printf("\n\n");

    return 0;
}
