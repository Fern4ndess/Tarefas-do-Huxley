#include <stdio.h>

struct ESTANTE {
    int N; 
    int X;
};

int main() {
    struct ESTANTE prateleiras;

    scanf("%d", &prateleiras.N);

    char produtos[prateleiras.N][prateleiras.N];
    char tipo[prateleiras.N][prateleiras.N]; // 'B' ou 'C'
    double D[prateleiras.N][prateleiras.N];

    for (int i = 0; i < prateleiras.N; i++) {
        for (int j = 0; j < prateleiras.N; j++) {
            scanf(" %c %c %lf", &produtos[i][j], &tipo[i][j], &D[i][j]);
        }
    }

    scanf("%d", &prateleiras.X);

    int infectados[prateleiras.X][2];

    for (int i = 0; i < prateleiras.X; i++) {
        scanf("%d %d", &infectados[i][0], &infectados[i][1]);
    }

    double prejuizo = 0.0;

    // matriz auxiliar para marcar os produtos já infectados
    int infectado[prateleiras.N][prateleiras.N];
    for (int i = 0; i < prateleiras.N; i++) {
        for (int j = 0; j < prateleiras.N; j++) {
            infectado[i][j] = 0; // inicializa como não infectado
        }
    }

    for (int i = 0; i < prateleiras.X; i++) {
        int linha = infectados[i][0];
        int coluna = infectados[i][1];

        if (!infectado[linha][coluna]) {
            printf("%c\n", produtos[linha][coluna]);
            prejuizo += D[linha][coluna];
            infectado[linha][coluna] = 1;
        }

        if (tipo[linha][coluna] == 'B') {
            // acima
            if (linha - 1 >= 0 && !infectado[linha - 1][coluna]) {
                printf("%c\n", produtos[linha - 1][coluna]);
                prejuizo += D[linha - 1][coluna];
                infectado[linha - 1][coluna] = 1;
            }
            // abaixo
            if (linha + 1 < prateleiras.N && !infectado[linha + 1][coluna]) {
                printf("%c\n", produtos[linha + 1][coluna]);
                prejuizo += D[linha + 1][coluna];
                infectado[linha + 1][coluna] = 1;
            }
            // esquerda
            if (coluna - 1 >= 0 && !infectado[linha][coluna - 1]) {
                printf("%c\n", produtos[linha][coluna - 1]);
                prejuizo += D[linha][coluna - 1];
                infectado[linha][coluna - 1] = 1;
            }
            // direita
            if (coluna + 1 < prateleiras.N && !infectado[linha][coluna + 1]) {
                printf("%c\n", produtos[linha][coluna + 1]);
                prejuizo += D[linha][coluna + 1];
                infectado[linha][coluna + 1] = 1;
            }
        }
    }

    printf("%.2lf\n", prejuizo);

    return 0;
}
