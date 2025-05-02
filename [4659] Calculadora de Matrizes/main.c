#include <stdio.h>
#include <string.h>

void sistema() {
    char operation[6];
    int matriz_1[3][3], matriz_2[3][3], resultado[3][3];

    // Leitura da operação
    scanf("%s", operation);
    getchar(); // Limpa o buffer

    // Finaliza o programa se a operação for "Fim"
    if (strcmp(operation, "Fim") == 0) {
        return;
    }

    // Leitura das matrizes
    for (int i = 0; i < 3; i++) {
        scanf("%d %d %d", &matriz_1[i][0], &matriz_1[i][1], &matriz_1[i][2]);
    }
    for (int i = 0; i < 3; i++) {
        scanf("%d %d %d", &matriz_2[i][0], &matriz_2[i][1], &matriz_2[i][2]);
    }

    if (strcmp(operation, "Soma") == 0) {
        printf("Resultado Soma:\n");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                resultado[i][j] = matriz_1[i][j] + matriz_2[i][j];
                printf("%d ", resultado[i][j]);
            }
            printf("\n");
        }
    } else if (strcmp(operation, "Sub") == 0) {
        printf("Resultado Sub:\n");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                resultado[i][j] = matriz_1[i][j] - matriz_2[i][j];
                printf("%d ", resultado[i][j]);
            }
            printf("\n");
        }
    } else if (strcmp(operation, "Multi") == 0) {
        printf("Resultado Multi:\n");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                resultado[i][j] = 0;
                for (int k = 0; k < 3; k++) {
                    resultado[i][j] += matriz_1[i][k] * matriz_2[k][j];
                }
                printf("%d ", resultado[i][j]);
            }
            printf("\n");
        }
    }

    // Chama o sistema novamente para processar a próxima operação
    sistema();
}

int main() {
    sistema();
    return 0;
}
