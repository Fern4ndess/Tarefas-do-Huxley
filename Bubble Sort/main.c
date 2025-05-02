#include <stdio.h>

/* Ordenação de Array's */

// Função para ler o array recursivamente
void ler_array(int a[], int i, int tamanho) {
    if (i == tamanho) {
        return;
    } else {
        scanf("%d", &a[i]);  // Corrigido a leitura do array
        ler_array(a, i + 1, tamanho);
    }
}

// Função para colocar o maior elemento na última posição do array
void bubble(int a[], int i, int fim) {
    if (i < (fim - 1)) {
        if (a[i] > a[i + 1]) {
            int aux = a[i];
            a[i] = a[i + 1];
            a[i + 1] = aux;
        }
        bubble(a, i + 1, fim);
    }
}

// Função para percorrer todo o array, colocando o maior elemento nas últimas posições
void sort(int a[], int i, int tam) {
    if (i < (tam - 1)) {
        // Coloca o maior elemento na última posição do array
        bubble(a, 0, tam);
        sort(a, i, tam - 1);
    }
}

// Função para imprimir o array recursivamente
void imprimir(int a[], int i, int tamanho) {
    if (i == tamanho) {
        return;
    } else {
        printf("%d ", a[i]);
        imprimir(a, i + 1, tamanho);
    }
}

int main() {
    int a[10];
    
    ler_array(a, 0, 10);
    sort(a, 0, 10);
    imprimir(a, 0, 10);

    return 0;
}
