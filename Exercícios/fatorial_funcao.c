#include <stdio.h>

int n,r;
int fatorial = 1;

int fatorialcalc(int a){
for(int i ;i <= a; i++){
    fatorial *= i;
    }
    return fatorial;
}


int main()
{

    scanf("%d",&n);

    r = fatorialcalc(n);
    printf("a fatorial de %d eh %d",n,r);



    return 0;
}
