#include <stdio.h>

int a = 0,b = 1,c;

void fibonacci(int *t1, int *t2){

    int t3 = *t1 + *t2;

    printf("%d ", t3);

    *t1 = *t2;
    *t2 = t3;
}


int main()
{
        for(int i;i <= 10;i++){

            fibonacci(&a,&b);

        }


    return 0;
}
