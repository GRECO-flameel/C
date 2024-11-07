#include <stdio.h>

void parimp(int a){

if(a % 2 == 0){
    printf("O numero eh par.\n");
}else{
    printf("O numero eh impar.\n");
    }
}

int main()
{

    int x=0;


    for(int i; i <=5; i++){
        scanf("%d",&x);
        parimp(x);

    }


    return 0;
}
