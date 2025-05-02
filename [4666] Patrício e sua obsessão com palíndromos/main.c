#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int N, total = 0;
    scanf("%d", &N);
    getchar(); // Remove o '\n' após o número de palavras

    char entrada[500];        // Buffer para a entrada completa
    char palavras[N][50];     // Armazena cada palavra separadamente
    char palavras_reversas[N][50]; // Palavras invertidas
    int palindromos[N];       // Índices dos palíndromos
    int index = 0;            // Contador para palavras

    fgets(entrada, sizeof(entrada), stdin); // Lê a linha completa com as palavras

    // Divide as palavras da entrada
    char *token = strtok(entrada, " \n");
    while (token != NULL) {
        strcpy(palavras[index++], token);
        token = strtok(NULL, " \n");
    }

    // Construção das palavras invertidas
    for (int i = 0; i < N; i++) {
        int len = strlen(palavras[i]);
        for (int j = 0; j < len; j++) {
            palavras_reversas[i][j] = palavras[i][len - j - 1];
        }
        palavras_reversas[i][strlen(palavras[i])] = '\0'; // Adiciona o '\0'
    }

    // Identificação de palíndromos
    for (int i = 0; i < N; i++) {
        if (strcmp(palavras[i], palavras_reversas[i]) == 0) {
            palindromos[total++] = i; // Armazena o índice do palíndromo
        }
    }

    // Verificação se há palíndromos
    if (total == 0) {
        printf("Nenhuma palavra palíndroma encontrada\n");
        return 0;
    }

    // Impressão das palavras palíndromas
    for (int i = 0; i < total; i++) {
        printf("%s\n", palavras[palindromos[i]]);
    }

    // Impressão do total
    printf("Total: %d\n", total);

    return 0;
}
