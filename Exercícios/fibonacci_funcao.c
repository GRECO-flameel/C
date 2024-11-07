#include <stdio.h>

int a=0,b=1,c;

int fibonacci(int *t1,int *t2){
    int t3 = *t1+*t2;

    *t1 = *t2;
    *t2 = t3;

    return t3;
}



int main()
{

    for (int i;i <= 10;i++){

        c = fibonacci(&a,&b);
        printf("%d ",c);
    }



    return 0;
}
