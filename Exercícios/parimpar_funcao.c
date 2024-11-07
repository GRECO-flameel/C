#include <stdio.h>

int main() {
    const int idade = 25;  // Constante
    printf("Idade inicial: %d\n", idade);

    printf("Digite uma nova idade: ");
    scanf("%d", &idade);  // Tentativa de alterar o valor da constante

    printf("Idade alterada: %d\n", idade);
    return 0;
}
