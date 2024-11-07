#include <stdio.h>

int x,y;

void soma( int *a,int *b){

    *a += 1;
    *b += 2;
    printf("o valor de a eh %d\n",*a);
    printf("o valor de b eh %d\n",*b);
    printf("A soma vale %d\n",*a+*b);

}

int main()
{
     x = 4;
     y = 8;

    soma(&x,&y);
    printf("o valor de x eh %d\n",x);
    printf("o valor de y eh %d\n",y);



    return 0;
}

/*void imprimir(int *num){

   printf("%d\n",*num);
   *num = 80;
}

int main()
{

int idade = 35;

    imprimir(& idade);
    printf("%d",idade);



    return 0;
}*/
