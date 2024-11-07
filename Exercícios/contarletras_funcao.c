#include <stdio.h>

char a[100];
int b;

  int contarlet(const char* str){
    int count = 0;

    while(str[count] != '\0'){
        count++;
    }
  return count;
  }

  int main()
  {
      printf("digite uma string: ");
      scanf (" %s", a);

      b = contarlet(a);
      printf("\nA quantidade de letras que a sua string possui eh %d",b);


      return 0;
  }
