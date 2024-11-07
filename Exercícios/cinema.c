#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int cadeiras[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int assento;
    char escolha;
    bool continuar = true;

    while (continuar) {
        printf("Assentos dispon�veis:\n");
        for (int i = 0; i < 10; i++) {
            if (cadeiras[i] != 0) {
                printf("[B%d] ", cadeiras[i]);
            } else {
                printf("[X] ");
            }
        }
        printf("\n--------------------------------------------------\n");

        printf("Escolha um assento dispon�vel (1 a 10): ");
        scanf("%d", &assento);


        if (assento >= 1 && assento <= 10 && cadeiras[assento - 1] != 0) {
            cadeiras[assento - 1] = 0;
            printf("Assento B%d reservado com sucesso!\n", assento);
        } else {
            printf("Assento inv�lido ou j� reservado. Tente novamente.\n");
            continue;
        }

        system("cls");

        printf("Quer escolher mais algum assento? [S/N]: ");
        scanf(" %c", &escolha);

        system("cls");

        if (escolha == 'N' || escolha == 'n') {
            continuar = false;
        } else if (escolha != 'S' && escolha != 's') {
            printf("Resposta invalida! Finalizando.\n");
            continuar = false;
        }
    }

    printf("Reservas conclu�das. Obrigado!\n");

    return 0;
}
