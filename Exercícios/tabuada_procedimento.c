#include <stdio.h>

int s,r,n;

void tabuada(int numr, int numn, int nums){
    for (int i;i <= 10;i++){
        numr = numn * nums;
            printf("%d x %d = %d\n",numn,nums,numr);
        nums += 1;
    }

}

int main()
{

    scanf("Faremos a tabuada de %d",&n);

    tabuada(r,n,s);


    return 0;
}
