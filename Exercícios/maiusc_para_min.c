#include <stdio.h>
#include <ctype.h>

char a[100];


void min(char* str){
    int i = 0;

    while(str[i] != '\0'){
        str[i] = tolower (str[i]);
        i++;
    }

}

int main()
{

    printf("digite uma string com letras maiusculas, para que essas letras\nsejam transformadas em minusculas: ");
    fgets(a,sizeof(a),stdin);

    min(a);

    printf("\n%s\n",a);

    return 0;
}
